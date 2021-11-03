#include<iostream>
#include<string>
using namespace std;

bool kiemTraSoDX(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[s.size() - 1 - i])
		{
			return false;
		}
	}
		return true;
}


int main()
{
	long long n;
	cin >> n;
	string s = to_string(n);
	if (kiemTraSoDX(s))
	{
		cout << n << " la so doi xung" << endl;
	}
	else
	{
		cout << n << " khong la so doi xung" << endl;
	}
	return 0;
}