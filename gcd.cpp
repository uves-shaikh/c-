#include<iostream>

using namespace std;

int main()
{
    int num1 = 3;
    int num2 = 6;
    int res = 0;
    for(int i = 0; i <= min(num1,num2); i++)
    {
        if(num1%i == 0 && num2%i == 0)
        res = i;
    }

    cout << "GCD of" << num1 << " and " << num2 << "is" << res; 

}