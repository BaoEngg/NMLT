#include <iostream>
using namespace std;

int main()
{
    long long n, giaiThua = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        giaiThua = giaiThua * i;
    }
    cout << giaiThua << endl;
    return 0;
}

