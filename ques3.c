#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
i=(n%2);
switch(i){
case 0:
    {
        printf("The number %d is even",n);
        break;
    }
case 1:
    {
        printf("The number %d is odd",n);
        break;
    }
}
}
