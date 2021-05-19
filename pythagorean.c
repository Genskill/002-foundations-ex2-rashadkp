#include <stdio.h>
#include <cs50.h>

int main(void){
float high,low,lowest;
float side1=get_int("side 1 : ");
float side2=get_int("side 2 : ");
float side3=get_int("side 3 : ");
if (side1>side2){
	high=side1;
	low=side2;}
	else {high=side2;
	      low=side1;}
		if (side3>high){
		lowest=high;
	high=side3;
	}
	else {lowest=side3;}
if (high*high==  low*low +  lowest*lowest){
	printf("Yes");}
	else {printf("No");}
}       
