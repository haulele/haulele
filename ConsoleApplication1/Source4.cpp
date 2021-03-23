#include <iostream>
using namespace std;
int sum(int n) {
	int i = 0, S = 0;
	while (n != 0) {
		S = S + ((n % 10) * pow(10, i));
		n = n / 10;
		i++;
	}
		return S;
	}
	int main() {
		int n;
		cin >> n;
		if (sum(n) == n) cout << "true" << endl;
		else cout << "false" << endl;
		cout << n;
		return 0;
	}