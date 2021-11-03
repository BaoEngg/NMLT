#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int donVi, temp;
    bool check = true;
    temp = n %10;
    while (n>0)
    {
        donVi = n%10;
        n = n/10;
        if (temp > donVi) 
        {
            check = false;
            break;
        }
        else
        {
            temp = donVi;
        }
    }
    if (check)
    {
        cout << "Phai la so giam" <<endl;
    }
    else
    {
        cout << "Khong phai la so giam" <<endl;
    }   
    return 0;
}