//Nhap a, b. Tinh cong, tru, nhan, chia hai so a, b :v
#include <iostream>
using namespace std;

int main()
{
	double a, b;
	double s, sb, m, d;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhap so b: ";
	cin >> b;
	s = a + b;
	sb = a - b;
	m = a * b;
	d = a / b;
	cout << "a + b = " << s << endl;
	cout << "\na - b = " << sb << endl;
	cout << "\na x b = " << m << endl;
	cout << "\na : b = " << d << endl;
	return 0;
}
