#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"


double variance(char *str);
int main(void)
{
	  printf("variance of uniform = %lf\n\n",variance("uni.dat"));
	  
	  printf("variance of gaussian = %lf",variance("gau.dat"));
}	
double variance(char *str)
{
double c=mean(str);
int i=0;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
temp = temp+((x-c)*(x-c));
}
fclose(fp);
temp = temp/(i-1);
return temp;

}
