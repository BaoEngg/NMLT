#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n<1)
    {
        cout << 0 << endl;
    }
    else if (n==1)
    {
        cout << 1 << endl;
    }
    else 
    {
        long long hienTai;
        long long quaKhu1=1;
        long long quaKhu2=0;
        cout << 1 << " ";
        for ( int i=0; i<n-1; i++)
        {
            hienTai = quaKhu1 + quaKhu2;
            cout << hienTai << " ";
            quaKhu2 = quaKhu1;
            quaKhu1 = hienTai;
            
        }
    }
    return 0;
}
