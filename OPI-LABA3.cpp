#include <iostream>
#include <Math.h>

using namespace std;
double sumOfSeries(int, int);
int factorial(int);

int main() {
	int N = 0; double x = 0;
	cout << "Enter the number N: " << endl;
	cin >> N;
	cout << "Enter the value x:" << endl;
	cin >> x;
	cout << sumOfSeries(N, x);
	return 0;
}

double sumOfSeries(int N, int x) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += (pow(-1,i-1) * pow(x,2*i-1)) / factorial(2*i-1);
	}
	return sum;
}


int factorial(int N) {
	int fact = 1;
	for (int i = 1; i <= N; i++) {
		fact *= i;
	}
	return fact;
}
