#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int max = 0;
    int now = 1;
    char cbuff[256] = {0};
    int buff[200000] = {0};

    if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
    {
        max = atoi(cbuff);
        for (int i = 0; i != max; i++)
        {
            memset(cbuff, 0, sizeof(cbuff));
            if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
            {
                buff[i] = atoi(cbuff);
            }
        }
    }

    qsort(buff, max, sizeof(int), comp);

    for (int i = 0; i != max; i++)
    {
        if (buff[i] != now)
        {
            for (int j = i+1; j != max; j++)
            {
                if(buff[j] != now)
                {
                    printf("%d %d\n",buff[j],i+1);
                    return 0;
                }
                now++;
            }
        }
        now++;
    }
    printf("Correct\n");
    return 0;
}
//20200731 X