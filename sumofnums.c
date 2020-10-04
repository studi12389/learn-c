#include<stdio.h>
void main(){
	int nums[5];
	int i,sum=0;
	printf("Enter five numbers:");
	for(i=0;i<5;i++)
		scanf("%d",&nums[i]);
	for (i=0;i<5;i++)
		sum+=nums[i];
	printf("The sum is: %d",sum);
  
}

