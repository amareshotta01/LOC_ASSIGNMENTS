#include<stdio.h>
int main(){
 int a,b;
    int c;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d",&c);
    switch(c)
    {
    case 1	:{
        int sum=a+b;
        printf("%d",sum);
        break;
        }
    case 2	:{
        int sub=a-b;
        printf("%d",sub);
        break;
    }
    case 3	:
     {
        int multiply=a*b;
        printf("%d",multiply);
        break;
     }
    case 4	:{
        int division=a/b;
        printf("%d",division);
        break;
    }
    default	:{
        break;
        }
    }
    return 0;
}
