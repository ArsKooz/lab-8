#include <iostream>
using namespace std;

int main()
{
	int  b;
	double a;
	cout << "Vvedite znachenie razmera fila v baitah\n";
	cin >> a;
	b = ceil(a/1024);
	cout << b;


}