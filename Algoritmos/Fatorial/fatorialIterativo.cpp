#include <iostream>
using namespace std;

int fatorial(int n) {
	int fat = 1;
	
	for (int i = 1; i <= n; i++)
		fat *= i;
	return fat;
}

int main(void) {
	cout << "1*2 = " << fatorial(2) << endl;
	cout << "1*2*3 = 6 = " << fatorial(3) << endl;
	cout << "1*2*3*4 = 24 = " << fatorial(4) << endl;
	cout << "1*2*3*4*5 = 120 = " << fatorial(5) << endl;
	cout << "1*2*3*4*5*6 = 720 = " << fatorial(6) << endl;
	
	return 0;
}
