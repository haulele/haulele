#include <iostream>
using namespace std;
int main()
{
	double pi = 1;
	int n, i = 3, t = 1;
	cin >> n;
	while (i <= (3*n)) {
		pi = pi + 1 / (pow(-1, t) * float(i));
		i += 2;
		t += 1;
	} cout << 4*pi << endl;
	return 0;
}