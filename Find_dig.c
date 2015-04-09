#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int t,i,n,interim;
	int var[15];
	char buffer[15][11];
	printf("Enter in integer value for how many test cases you will enter.\n");
	printf("Max value 15 :\t");
	scanf("%d",&t);//received number of inputs from user
	printf("For your test values, please no values greater than 10^10\n");
	for(i=0; i < t; i++)//loop to catch input provided by user
	{
		printf("Enter value:\n");
		scanf("%d",&var[i]);
		//var[i]=getchar();
		if(var[i]>10,000,000,000)
		{
			printf("You did not follow instructions!");
			return 0;
		}
		sprintf(buffer[i],"%d",var[i]);
		printf("Here should be my number %s\n",buffer[i]);
	}
	int c;//take value of length of characters in number value
	int count,tVal;//count is counter to go through count in c & tVal will take actual value of integer read in string value of entry
	int tot;//tot is the total number of integers that can divide into entry meeting problem requirements
	for(i=0; i<t; i++)
	{
		tot = 0;
		c = strlen(buffer[i]);
		printf("how many characters for %s: %d\n",buffer[i],c);
		for(count=0; count<c; count++)
		{
			int vC;
			vC = buffer[i][count] - '0';//took char value and passed vC integer value for char
			printf("Testing: %d\n", vC);
			if(vC == 0)
			{
				;
			}
			else if(var[i]% vC == 0)
			{
				tot++;
				printf("Inside of if check statement\n");
			}
		}
		printf("For %s total: %d\n",buffer[i],tot);
	}
}
