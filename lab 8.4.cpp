#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Vvedite chislo \n";
	cin >> a;
	b = a % 10;
	a = (a - a % 10) / 10 + b * 10;
	cout << a;
}