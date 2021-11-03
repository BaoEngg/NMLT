#include<iostream>
#include<math.h>
using namespace std;

bool kiemTraSHH(long long n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n < 6)
		{
			return false;
		}
		else if (n == 6)
		{
			return true;
		}
		else
		{
			long long tong = 1;
			for (int i = 2; i <= n; i++)
			{
				if (n % i == 0)
				{
					tong = tong + i;
				}
			}
			if (tong == n)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	long long n;
	cin >> n;
	if (kiemTraSHH(n))
	{
		cout << n << " la so hoan hao" << endl;
	}
	else
	{
		cout << n << " khong la so hoan hao" << endl;
	}

	return 0;
}