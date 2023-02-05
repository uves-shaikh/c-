#include<bits\stdc++.h>

using namespace std;

int main()
{
    int num = 50;

    for(int i=1;i<num/2;i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}