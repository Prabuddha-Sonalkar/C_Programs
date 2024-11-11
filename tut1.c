#include <stdio.h>
#include <math.h>

float calculate_mean_deviation(float ci[], float fi[], int n);

int main()
{
  int n, i;
  float ci[20], fi[20];
  float mean_deviation;

  printf("Enter the number of elements in fi:\n");
  scanf("%d", &n);

  printf("Enter the values of Ci:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &ci[i]);
  }

  printf("Enter the values of frequencies:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &fi[i]);
  }

  calculate_mean_deviation(ci, fi, n);

  return 0;
}

float calculate_mean_deviation(float ci[], float fi[], int n)
{
  int i, j;
  float mean, deviation = 0, sum = 0;

  for (i = 0; i < n; i++)
  {
    sum = sum + fi[i];
  }

  printf("sum of all fi is = %.f\n", sum);

  mean = 0;

  for (i = 0; i < n; i++)
  {
    mean = mean + ci[i] * fi[i];
  }

  mean = mean / sum;

  printf("mean is = %.4f\n", mean);

  for (i = 0; i < n; i++)
  {
    deviation = deviation + fi[i] * fabs(ci[i] - mean);
  }
  printf("fidi is = %.4f\n", deviation);

  printf("The mean deviation is = %.4f/%.f", deviation, sum);

  deviation = deviation / sum;

  printf(" = %.4f", deviation);
}