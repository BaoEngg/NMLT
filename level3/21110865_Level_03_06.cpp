#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long uoc = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            uoc++;
        }
    }
    cout << uoc << endl;
    return 0;
}

