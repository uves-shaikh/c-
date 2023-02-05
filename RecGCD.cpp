#include<bits\stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int n1 = 6;
    int n2 = 3;

    cout <<"GCD of given number is " << gcd(n1,n2);

    return 0;
}