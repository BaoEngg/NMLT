#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long tong =0;
    for (long long i = 1; i <= n; i++)
    {
        tong = tong + i;
    }
    cout << tong << endl;
    return 0;
}