#include <stdio.h>
#include <cs50.h>

int main(){

	int a,b ;
	a=get_int("");
	b=get_int("");

		if (a==1){
			for (int i=b;i>0;i--){
				for (int k=i;k>0;k--){
						printf("#");}
				printf("\n");}
						}
			else if(a==2){
				for (int i=1;i<=b;i++){
			for (int j=(b-i-1);j>=0;j--){
				printf(" ");}
				for (int k=1;k<=i;k++){
					printf("#");}
						printf("\n");}
			}
				}
