#include<stdio.h>

int main(void)
{
    char S[4];
    int ans = 0;
  
	if(NULL != fgets(S, 4, stdin))
    {
        for(int i=0; i<3; i++)
        {
            if(S[i] >= '0' && S[i] <= '9')
            {
                ans *= 10;
                ans += 2 * ( S[i] - '0' );
            }
            else
            {
                printf("error\n");
                return 0;
            }
        }
    }
    else
    {
        printf("error\n");
        return 0;
    }

    printf("%d\n",ans);
    return 0;
}

/*
 gcc main.c -o main

 ASCII CODE
 10|   16| word
 --+-----+------
 48| 0x30| 0
 49| 0x31| 1
 50| 0x32| 2
 51| 0x33| 3
 52| 0x34| 4
 53| 0x35| 5
 54| 0x36| 6
 55| 0x37| 7
 56| 0x38| 8
 57| 0x39| 9
*/
