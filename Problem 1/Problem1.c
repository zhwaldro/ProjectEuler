#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number=0;
    
    for(int i=0; i<1000; i++)
    {
        if(i%3 == 0 || i%5 == 0)
        number += i;
    }
    printf("%i\n", number);
}

/*
 * Original code elimiated values divisible by both 3 and 5 (15) after the fact. Using an if statement with 'for' eliminates the need for this.
 *
 *   int main (void)
 *  {
 *           int num3=0, num5=0, num15=0;
 *           for(int i=0; i<1000; i++)
 *           {
 *               if(i%3 == 0)
 *               {
 *                   num3 =num3+i;
 *               }
 *               if(i%5 == 0)
 *               {
 *                   num5=num5+i;
 *               }
 *               //Subtract values which are multiples of both 3 and 5
 *               if(i%15 == 0)
 *               {
 *                   num15=num15+i;
 *               }
 *           }
 *           
 *           int num = num3+num5-num15;
 *           printf("%i\n", num);
 *   }
 */

