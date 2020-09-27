#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Vvedite 3-h znachenie\n";
	cin >> a;
	b = trunc(a / 100);
	a = (a - b * 100) * 10 + b;
	cout << a;
}