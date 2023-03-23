#include<stdio.h>
int main(){
	int i;
	float marks[5];
	float sum=0.0 , avg;
	printf("Enter the marks of the stdents: ");
	for(i=0;i<5;i++){
		scanf("%f",&marks[i]);
	}
	for(i=0;i<5;i++){
	   sum = sum+marks[i];
	   
	}
	avg=sum/5;
	printf("sum=%f",sum);
	printf("\naverage=%f",avg);
}
