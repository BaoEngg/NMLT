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
    int donVi, nS;
    bool check =true;
    nS = n;
    while (n>0)
    {
        donVi = n % 10;
        n = n/10;
        if (donVi % 2 == 1)
        {
            check = false;
            break;
        }
    }
    if (check == false)
    {
        cout << nS << " khong phai so toan chu so chan" << endl;
    }
    else    
    {
        cout << nS << " la so toan chu so chan" << endl;
    }     
    return 0;
}