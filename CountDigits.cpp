#include<bits/stdc++.h>

using namespace std;

int count_digits(int n)
{
    int x = n;
    int count = 0;

    while(x != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int num = 12345;
    //cout << "Total digit in " << num <<  << total(num);
    cout<< "Number of digits in "<<num<<" is "<< count_digits(num);

    return 0;
}