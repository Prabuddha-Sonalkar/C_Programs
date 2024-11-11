#include <stdio.h>
#include <math.h>

//#define MAX_SIZE 20

float calculate_mean_deviation(int ci[], int freq[], int n);

int main()
{
    int n, i, ci[20], freq[20];
    float mean_deviation;

    printf("Enter the number of elements in the frequency distribution:\n");
    scanf("%d", &n);

    printf("Enter the values of Ci:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ci[i]);
    }

    printf("Enter the values of their respective frequencies:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &freq[i]);
    }

    // mean_deviation = calculate_mean_deviation(ci, freq, n);

    // printf("The mean deviation of the frequency distribution is: %.4f\n", mean_deviation);
   
     calculate_mean_deviation(ci, freq, n);
     
    return 0;
}

float calculate_mean_deviation(int ci[], int freq[], int n)
{
    int i, j;
    float mean, deviation = 0, sum = 0;

    for (i = 0; i < n; i++)
    {
        //sum += freq[i];
        sum =sum+ freq[i];
    }

    printf("sum of all frequencies is = %.f\n",sum);

    mean = 0;

    for (i = 0; i < n; i++)
    {
        // mean += ci[i] * freq[i];
         mean = mean + ci[i] * freq[i];
    }
 
    //mean /= sum;
    mean =mean/sum ;
    
    printf("mean is = %.f\n",mean);

    for (i = 0; i < n; i++)
    {
        // deviation += freq[i] * fabs(ci[i] - mean);
         deviation = deviation + freq[i] * fabs(ci[i] - mean);
     
    }

    //deviation /= sum;
      deviation = deviation/sum;

     printf("The mean deviation of the frequency distribution is: %.4f\n",deviation);

    //return deviation;
}
