#include<stdio.h>
int main()/*perfect number*/
{
    int num,res,sum=0,i;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=(num-1);i++)
    {
        res=num%i;
    
        if(res==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum == num)
        printf("number is a perfect number");
    else
        printf("number is not a prime number");
    return 0;
}
