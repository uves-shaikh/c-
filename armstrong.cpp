#include<bits\stdc++.h>

using namespace std;

bool armstrong(int n)
{
    int number = n;
    int count = 0;
    int temp = n;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while(n!=0)
    {
        int digit = n % 10;
        sumofpower += pow(digit,count);
        n /= 10;
    }
    return (sumofpower == number);
}

int main()
{
    int num = 153;

    if(armstrong(num))
    {
        cout << "Yes it is Armstrong numer";
    }
    else
    {
        cout << "Not armstrong number";
    }
    return 0;
}