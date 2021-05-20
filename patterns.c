#include <stdio.h>
#include <cs50.h>

int main(){

	int a,b ;
	a=get_int("Enter type of pattern(1 or 2) : ");
	b=get_int("Number of rows ? ");
	printf("\n");

		if (a==1){
			for (int i=b;i>0;i--){
			for (int k=i;k>0;k--){
			printf("#");}
			printf("\n");
			}}
			else if(a==2){
				for (int i=1;i<=b;i++){
			for (int j=(b-i-1);j>=0;j--){
				printf(" ");}
				for (int k=1;k<=i;k++){
					printf("#");}
						printf("\n");}
			}
				}
