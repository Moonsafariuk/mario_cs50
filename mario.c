#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int userHeight = 0;
    int pyramidHeight = 0;
    int row = 0;
    int spaces;
    int hashes;


    do
    {
        printf("Please enter half the pyramid's height.. you can choose from 1 to 23\n");

        userHeight = GetInt();

    }

    while(userHeight < 1 || userHeight > 23);

    pyramidHeight = userHeight * 2 ;


    printf("Total height: %d\n", pyramidHeight);


    for (row = 1 ; row <= pyramidHeight ; row ++)
    {

         for (spaces=0; spaces <= pyramidHeight-row-1; spaces++ )
        {
           printf(" ");
        }

         for (hashes=0; hashes <= row; hashes++ )
        {
           printf("#");
        }

        printf("\n");

    }

}
