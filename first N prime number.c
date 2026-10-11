#include <stdio.h>

void prime()
{
    int i, j, count;

    for(i = 2; count < 10; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    prime();
    return 0;
}