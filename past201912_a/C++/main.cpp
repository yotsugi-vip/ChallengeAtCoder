#include<iostream>

int main(void)
{
    std::string S;
    int ans = 0;

    std::cin >> S;

    for(int i=0; i<3; i++)
    {
        if(S[i]>='0' && S[i]<='9')
        {
            ans *= 10;
            ans += 2*(S[i]-'0');
        }
        else
        {
            std::cout << "error" << std::endl;
            return 0;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

//g++ main.cpp -o main