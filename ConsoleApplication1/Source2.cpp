#include <iostream> 


using namespace std;
int main() {
	int a, i = 1, S = 0;
	cin >> a;
	while (a != 0)
		a / 10;
	S = S + (a % 10)*pow(1, i);
	i++;
	return 0;
}