/*
 * main.c
 *
 *  Created on: Jun 24, 2024
 *      Author: youss
 */


#include "stdio.h"
int main(){
	char choice;
	float n1,n2,result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&choice);
	printf("\n Enter two operands: ");
	fflush(stdin);
		fflush(stdout);
		scanf("%f %f",&n1,&n2);
		switch (choice){
		case '+' : {
			result = n1+n2;
		}
		break;
		case '-':{
			result =n1-n2;
		}
		break;
		case '*':{
			result=n1*n2;
		}
		break;
		default:{
			result=n1/n2;}
			break;


		}
printf("%f %c %f=%f",n1,choice,n2,result);


	return 0;
}
