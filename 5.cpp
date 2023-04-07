/*Tinh tuoi bang cch nhap nam sinh, neu nhap lon hon nam hien tai, chu
thi bao loi*/
#include <iostream>

using namespace std;

int main()
{
	int namsinh, namnay, tuoi;
	cout << "Nhap vao so nam sinh cua ban: ";
	cin >> namsinh;
	cout << "Nhap vao so nam hien tai: ";
	cin >> namnay;
	if(cin.fail())
	//Kiem tra xem co nhap chu hay khong
	{
		cout << "Loi: Ban phai nhap so, khong duoc nhap chu, \ntoi se khong the tinh tuoi cua ban neu ban nhap chu dau huhu =((" << endl;
		return 0;
	}
	if(namsinh > namnay)
	//Kiem tra xem co nhap nam sinh lon hon nam hien tai hay khong
	{
		cout << "Loi: Ban da nhap nam sinh sau nam hien tai, toi khong the tinh tuoi cho nguoi den tu tuong lai duoc, \nban da lam toi so hai day =((" << endl;
		return 0;
	}
	tuoi = namnay - namsinh;
	cout << "Tuoi cua ban la: " << tuoi << "\nCam on ban da su dung chuong trinh cua toi =3" << endl;
    return 0;
}
