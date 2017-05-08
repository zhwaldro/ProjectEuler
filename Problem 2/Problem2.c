#include <stdio.h>

//Find the sum of the even numbers in the Fibonacci sequence whose values do not exceed four million

int main(void)
{
    int i, a=0, b=1, next;
    
    for(i=0; i<35; i++)
        {
        if(i<=1)
            next = i;
        else
        {
            next=a+b;
            a=b;
            b=next;
        }    
        
        if(next%2 == 0)
            {
                int value =+ next;
            }
        }

    printf("%i\n", value);
}