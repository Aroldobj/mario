#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
     int i = get_positive_int();
     for (int l = 0; l <= i; l++)
     {
        for(int c = i; c > l; c--)
        {
            printf(" ");
        }
            for (int h = 0; h < l; h++)
            {
                printf("#");
            }
         printf("  ");
            for (int h = 0; h < l; h++)
            {
                printf("");
                printf("#");
            }
     printf("\n");
     }
}


int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int("Digite o numero da altura: ");
     }
     while (n < 1 || n > 8);
     return n;
}