#include<iostream>
#include<math.h>
using namespace std;

bool kiemTraSNT(long long n)
{
	if (n <= 1)
	{
		return false;
	}
	else if (n == 2)
	{
		return true;
	}
	else
	{
		for (long long i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int main()
{
	long long n;
	cin >> n;
	if (kiemTraSNT(n))
	{
		cout << n << " la so nguyen to." << endl;
	}
	else
	{
		cout << n << " khong la so nguyen to." << endl;

	}
}