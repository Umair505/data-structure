#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Prime Number");
    }
    else{
        printf("Not Prime Number");
        
    }
    return 0;
}