#include <iostream>
using namespace std;

int main() {
	unsigned int a, left, right;
	cin >> a >> left >> right;
	int count = 0;
	int b = left; 
	int c = right;
	while (b <= c) {
		if (left + right == a) {
			count = +1;
		} b++; 
		c--;
	} cout << count << endl;
}