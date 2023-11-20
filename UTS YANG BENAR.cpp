// UTS(23104410068).cpp : This file contains the 'main' function. Program execution begins and ends there.
// SOAL UTS  GENAP
#include <iostream>
using namespace std;
int main() {
	int mobil;
	int motor;
	int ja;
	int jb;
	int ta;
	int tb;
	int jk;
	int tj;

	cout << "DATA PARKIR UNISBA" << endl;
	cout << "Masukkan jumlah motor :";
	cin >> motor;
	cout << "Masukkan jumlah mobil :";
	cin >> mobil;
	cout << "Input jam masuk (format 24 jam) :";
	cin >> ja;
	cout << "Input jam keluar (format 24 jam) :";
	cin >> jb;

	tj = ja + jb;
	ta = (motor * tj) * 2000;
	tb = (mobil * tj) * 5000;
	jk = (ta + tb);

	cout << "Total biaya parkir : Rp " << jk << "(23 jam)";
}