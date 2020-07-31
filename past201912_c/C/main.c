#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    char cbuff[256] = {0};
    int num[6] = {0};
    int num_cnt = 0;
    char *pc = cbuff;

    if (NULL != fgets(cbuff, sizeof(cbuff), stdin))
    {
        for (int i = 0; i < 256; i++)
        {
            if (cbuff[i] == ' ' || cbuff[i] == '\0')
            {
                cbuff[i] = '\0';
                num[num_cnt++] = atoi(pc);
                pc = &cbuff[i + 1];
                if (num_cnt == 6)
                    break;
            }
        }
    }
    qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare_int);
    printf("%d\n",num[3]);
}