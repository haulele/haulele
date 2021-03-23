#include <iostream>
using namespace std;
int main()
{

	long long n, tong, S, i;
	cin >> n;
	i = 1; S = 1; tong = 0;
	while (i <= n)
	{

		S *= i;
		tong += S;
		i++;

	}
	cout << tong;

}