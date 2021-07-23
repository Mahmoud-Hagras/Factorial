#include<iostream>
using namespace std;
void factorial(long long n)
{
    long long fact = 1;
    for (long long i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << "\n";
}
int main()
{
    long long n;
    short T;
    cin >> T;
    for (long long i = 1; i <= T; i++)
    {
        cin >> n;
        factorial(n);
    }
    return 0;
}
