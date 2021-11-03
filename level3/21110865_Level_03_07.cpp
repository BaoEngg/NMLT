#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    while (n > 0)
    {
        int chuSo = n % 10;
        sum = sum + chuSo;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}
