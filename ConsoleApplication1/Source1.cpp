#include <iostream> 
#include <cmath>
using namespace std;
int main() {
	int a, b, c, d, e;
	int sonut;
	cout << "Nhap vao so xe cua ban: "; cin >> a >> b >> c >> d >> e;
	sonut = (a + b + c + d + e) % 10; cout << "so nut cua so xe ban la:" << sonut << endl;
	return 0;
} 