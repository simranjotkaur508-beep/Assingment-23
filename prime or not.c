#include<stdio.h>
int checkPrimeNot(int a, int b)
{
    for(a=2;a<=100;a++)
    for(b=2;b<=100;b++)
    {
        if(a%b==0)
        {
            return 0;
        }

        if(a==b)
        {
            return 1;
        }
    }
}

int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    if (checkPrimeNot(x,y==1))
        printf("prime");
    else
    printf("not prime");
    
    return 0;

}