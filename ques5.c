#include<stdio.h>
int main(){
int r;
float pi=3.14;
printf("Enter the radius:");
scanf("%d",&r);
float circumference=2*pi*r;
float area=pi*r*r;
printf("The Circumference is:%f",circumference);
printf("\nThe Area is:%f",area);
return 0;
}
