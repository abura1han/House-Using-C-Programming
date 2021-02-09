//let make a house
#include <stdio.h>

int main()
{
    int limit = 20, wall_width = 0, wall_height = 1;
    for (int i = 0; i <= limit; i++)
    {
        //space
        for (int space = limit; space >= i; space--)
        {
            printf("  ");
        }

        //roof
        for (int h = 0; h <= i; h++)
        {
            printf("-   ");
        }

        //wall & door
        if (i == 20)
        {
            printf("\n");
            for (int wd = 0; wd <= (limit * 14) + 5; wd++)
            {
                wall_width++;
                if (wall_height >= 2 && wall_height <= 11 && wall_width >= 8 && wall_width <= 14)
                {
                    //door
                    printf("    ");
                }
                else if (wall_height == 1 || wall_height >= 12 && wall_width >= 8 && wall_width <= 14)
                {
                    printf("-   ");
                }
                else
                {
                    //wall
                    printf("|   ");
                }

                if (wall_width == 22)
                {
                    printf("\n");
                    wall_width = 0;
                    wall_height++;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
