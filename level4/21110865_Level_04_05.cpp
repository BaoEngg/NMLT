#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	int max=0;
	int donVi;
	while (n > 0)
	{
		donVi = n % 10;
		n /= 10;
		if (donVi > max)
		{
			max = donVi;
		}
	
	}
	cout << max << " la chu so lon nhat" << endl;
	return 0;
}