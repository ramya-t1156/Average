#include<stdio.h>

int main(){
	int num_1,num_2,num_3,num_4,num_5,total;
	float avg;
	printf("Enter 5 numbers : ");
	scanf("%d %d %d %d %d ",&num_1,&num_2,&num_3,&num_4,&num_5);
	total=num_1+num_2+num_5+num_3+num_4;
	avg=total/5;
	printf("Average = %.2f",avg);
}
