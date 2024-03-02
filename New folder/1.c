#include<stdio.h>
int main()
{
    int num1,num2,r,n1,n2;
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        n1 = num1;
        n2 = num2;
    }
    else
    {
        n1 = num2;
        n2 = num1;
    }
    while (1)
    {
        r = n1 % n2;
        if(r==0)
        {
            printf("%d",n2);
            break;
        }
        else
        {
            n1 = n2;
            n2 = r;
        }
    }
    
    return 0;
}
