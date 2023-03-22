//#include<stdio.h>
//int main(){
//	int section[10],i;
//	printf("enter the number:");
//	
//	for(i=0;i<10;i++){
//		scanf("%d",&section[i]);
//	}
//	for(i=0;i<10;i++){
//		printf("section[%d] - %d\n",i, section[i]);
//	}
//}
//#include<stdio.h>
//int main(){
//	int bookshelf[6],i,price;
//	printf("enter the book:");
//	for (i=0;i<6;i++){
//		scanf("%d",&bookshelf[i]);
//		
//	}
//	price = 0;
//	for (i=0;i<6;i++){
//		price=price+bookshelf[i];
//	}
//	printf("%d",price);
	
//		for (i=0;i<6;i++){
//		printf("%u\n",&bookshelf[i]);
//		
//	}
	
//}


//Simple programme to store and print arrays in reverse and present order 
#include<stdio.h>
int main(){
	int a[5],i;
	printf("Enter the numbers in the arrays: ");
	for(i=0;i<5;i++){
		scanf("%d\n",&a[i]);//i is the index
	}
	for(i=0;i<5;i++){
		printf("\nthe number at index %d is : %d",i,a[i]);
	}
	for(i=4;i>=0;i--){
		printf("\narray number at index %d is : %d",i,a[i]);//printing the numbers in reverse order
	}
}










