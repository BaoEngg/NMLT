#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long soNguoc = 0;
    while (n > 0)
    {
        int chuSo = n % 10;
        soNguoc = soNguoc * 10 + chuSo;
        n = n / 10;
    }
    cout << soNguoc << endl;
    return 0;
}
