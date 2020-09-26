#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    int line = 0;
    int column = 0;

     

    while (height <= 0 || height > 8)
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    printf("\n");
     

    for ( line = 1 ; line <= height ; line++ )
    {
        for ( column = 1 ; column <= height ; column++ )
        {
            if ( column >= height + 1 - line )
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }         
        }
                     
        printf("\n");
    }

}