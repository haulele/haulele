#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 1;
	float tong = 0;
	while (i <= n) {
		tong = tong + 1.0 / i;
		i++;
	} 
	cout << "tong la: " << setprecision(2) << fixed << tong << endl;
	return 0;
}