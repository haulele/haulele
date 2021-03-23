#include <iostream>

using namespace std;
int main() {
	int x;
	cin >> x;
	int a = 1, b = 1, count = 0, i = 2;
	while (i < x) {
		int dem = 0;
		int j = 2;
		while (j < i) {
			if (i % j == 0) dem++;
			j++;
		} if (dem == 0) {
			int tam;
			tam = a;
			a = i; 
			b = tam;
			if (a - b == 2) {
				cout << b << ", " << a << endl;
				count++;
			}
		}
		i++;
	}
		cout << "Tong: " << count << " cap sinh doi < " << x << endl;
	return 0;
}