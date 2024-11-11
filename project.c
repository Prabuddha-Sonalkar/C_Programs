#include<iostream>

#include<windows.h>
using namespace std;

void delay(string n)
{
    int i=0;
    while(n[i]!='\0')
    {
        cout<<n[i];
        Sleep(100);
        i++;
    }
}

void colour(int n)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    switch(n)
    {
        case 1:
                SetConsoleTextAttribute(h,4); //Red
                break;
        case 2:
                SetConsoleTextAttribute(h,5); //Purple
                break;
        case 3:
                SetConsoleTextAttribute(h,15);  //white
                break;
                
        case 4:
        	    SetConsoleTextAttribute(h,14);  //white
                break;
	
        default:
                cout<<"Nothing"<<endl;
                break;
    }
}

int main()
{	

	int npeo,team[20][20],skil[20][20],nskil,i,k,j,total=0,max,pos[20],
	m,count=0,size=0,l,pteam[20][20];  
	
	string n="\n\n\t\t\t\t\t\t\t\t*****WELCOME TO TEAM PREDICTOR*****";
    delay(n);
    
	//Check valid input for Players
	start1:
    colour(2);
	cout<<"\nENTER TOTAL NO. OF PLAYERS: ";
    colour(3);
	cin>>npeo;

	if(npeo<=1)
	{   
        colour(1);
		cout<<"ERROR!"<<endl;
		cout<<"Note : No. of Players should be Greater than 1 (PLAYER>1)"<<endl;
		
		goto start1;
	}
	cout<<endl;
	
	//Check valid input for Skill
	start2:
    colour(2);
	cout<<"\nENTER NO. OF SKILLS: ";
    colour(3);
	cin>>nskil;
	
	if(nskil<1)
	{   
        colour(1);
		cout<<"ERROR!"<<endl;
		cout<<"Note : No. of Skills should be Greater than 0 (SKILL>0)"<<endl;
		
		goto start2;
	}
	cout<<endl;
	
    
	//Input for Skills
    colour(2);
	cout<<"ENTER PLAYER RATING PER SKILL"<<endl;
	cout<<"***RATE OUT OF 5***\n"<<endl;
    colour(3);
	for(i=1;i<=npeo;i++)
	{	
		cout<<"Player "<<i<<": ";
		for(j=1;j<=nskil;j++)
		{
			cin>>skil[i][j];
		}
	}
	
	
	//All possible team
    colour(2);
	cout<<"\nALL POSSIBLE TEAMS ARE:\n"<<endl;
    colour(3);
	for(i=1,k=1;i<=npeo;i++)
     	{
		for(j=i+1;j<=npeo;j++)
		{
			cout<<"TEAM "<<k<<": "<<"Player "<<i<<" & "<<"Player "<<j<<endl;
			k++;
			count++;
		}
    	}
    	cout<<endl;
		
        colour(2);
    	cout<<"TOTAL TEAMS: "<<count<<endl;
    	cout<<endl;
    	
    	//Store position of Team
    	for(i=1,m=1;i<=npeo;i++)
     	{
		for(j=i+1;j<=npeo;j++)
		{
			pteam[m][1]=i;
			pteam[m][2]=j;
			m++;	
		}
    	}
	
	
	/*
	//Print Teams players with the array (For Checking)
	cout<<"TEAM AND PLAYERS:"<<endl;
	for(i=1;i<=count;i++)
	{
		cout<<"TEAM  "<<i<<":"<<" Player: "<<pteam[i][1]<<" Player: "<<pteam[i][2]<<endl;
	}
	cout<<endl;
	*/
    
    
    	//Create Team Score
    	l=1;
    	for(i=1;i<=npeo;i++)
    	{
		for(j=i+1;j<=npeo;j++)
		{	
			for(k=1;k<=nskil;k++)
			{
				team[l][k]=skil[i][k]+skil[j][k];
			}
			l++;
		}	
    	}
    	  	
	//print team score per skill
    colour(2);
	cout<<"TEAM SCORE PER SKILLS:"<<endl;
	colour(3);
	
    
    	for(i=1;i<=count;i++)
    	{	 colour(1);
            cout<<" -------------------------------"<<endl;
           
           	colour(4);
    		cout<<"| TEAM: "<<i;
    		for(j=1;j<=nskil;j++)
    		{
    			colour(3);
    			cout<<"| S"<<j<<": "<<team[i][j];
    		}
    		colour(4);
    	}
    	colour(4);
    	cout<<" -------------------------------"<<endl;
    
	
	
		
    	
  	//claculate Final Team Score
  	int finaltem[count];
	for(i=1;i<=count;i++)
	{	
		finaltem[i]=0;
		for(j=1;j<=nskil;j++)
		{
			finaltem[i]=team[i][j]+finaltem[i];
		}
		
	}
	
	/*
	//Print final team score (For Checking)
	cout<<"\nTOTAL SCORE OF TEAM:"<<endl;
	for(i=1;i<=count;i++)
	{	
		
		cout<<"| Team "<<i<<" | "<<finaltem[i]<<"   |"<<endl;
	}
	*/
	
	//find max score
	max=finaltem[1];
	for(i=2;i<=count;i++)
	{
		if(max<finaltem[i])
		{
			max=finaltem[i];
			
		}
	}
	
	//Find best Team with equal score
	for(i=1,j=1;i<=count;i++)
	{
		if(finaltem[i]==max)
		{
			pos[j]=i;
			j++;
			size++;
		}
	}
	
	//Print Final Teams
    colour(2);
	cout<<"\nMOST EFFICIENT TEAM: "<<endl;
    colour(3);
	for(i=1;i<=size;i++)
	{
		cout<<"TEAM "<<pos[i]<<": "<<"Player "<<pteam[pos[i]][1]<<" & "<<"Player "<<pteam[pos[i]][2]<<endl;
		
	}
	
}
