#include<iostream>

using namespace std;

bool kiemTraSNT(int donVi)
{
	if (donVi <= 1)
	{
		return false;
	}
	else if (donVi == 2 || donVi==3 || donVi == 5 || donVi == 7)
	{
		return true;
	}
    else {
        return false;
    }
}

int main()
{
    long long n;
    cin >> n;
    int donVi, dem;
    while (n>0)
    {
        donVi = n % 10;
        n = n/10;
        if (kiemTraSNT(donVi))
        {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}