#include<stdio.h>
int main(){
	int a[10],i;
	int even=0,odd=0;
	printf("Enter the number of arrrays: ");
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
	}
	printf(" total evennumbers=%d",even);
	printf("total oddnumbers=%d",odd);
}//calculating the no of even and odd numbers 
