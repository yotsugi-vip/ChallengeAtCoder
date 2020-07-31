#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int day = 0;
    int sales = 0;
    int buff = -1;
    char cbuff[256] = {0};

    if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
    {
        day = atoi(cbuff);
        for (int i = 0; i < day; i++)
        {
            if (buff < 0)
            {
                memset(cbuff, 0, sizeof(cbuff));
                if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
                {
                    buff = atoi(cbuff);
                }
            }
            else
            {
                memset(cbuff, 0, sizeof(cbuff));
                if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
                {
                    sales = atoi(cbuff);

                    if (sales == buff)
                    {
                        printf("stay\n");
                    }
                    else if (sales > buff)
                    {
                        printf("up %d\n", sales - buff);
                    }
                    else
                    {
                        printf("down %d\n", buff - sales);
                    }
                    buff = sales;
                }
            }
        }
    }
}