#include <iostream>
using namespace std;
int* nhap(int a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	a = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	return a;
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cout << a[i] << endl;
	}
}
int main() {
	int* a;
	int n;
	a = nhap(a, n);
	xuat(a, n);
	delete[] a;
	return 0;
}