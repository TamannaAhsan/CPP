#include <iostream>
using namespace std;

double sum(int n) {
	double value = 0;
	if(n==1) {
		return n;
	}
	else if (n%2 == 0) {
		value = 1.0/n + sum(n-1);
		return value;
	}
	else {
		value = 1.0/n - sum(n-1);
		return value;
	}
	return value;
}

int main() {
	cout << sum(10) << endl;
}
