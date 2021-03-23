#include <iostream>
using namespace std;
int main()
{
	int n, l, r;
	int c = 0;
	cin >> n >> l >> r;
	for (int i = l; i <= (n - i); i++)
	{
		if (n - i <= r) c++;
	}
	cout << c;
	return 0;
}