#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	system("cls");	
	cout << "================================" << endl;
	cout << "||   Program Konversi Jarak   ||" << endl;
	cout << "================================" << endl;
	cout << endl << endl;
	unsigned long long int input;

	cout << "Masukkan Jarak Dalam Bentuk KM : "; cin >> input;
	cout << endl;
	cout << "================================" << endl;
	cout << "||    Hasil Konversi Jarak    ||" << endl;
	cout << "================================" << endl;
	cout << endl;
	cout << "KM to HM = " << input*10 << endl;
	cout << "KM to DAM = " << input*100 << endl;
	cout << "KM to M = " << input*1000 << endl;
	cout << "KM to DM = " << input*10000 << endl;
	cout << "KM to CM = " << input*100000 << endl;
	cout << "KM to MM = " << input*1000000 << endl;
	cout << endl << endl;
	return 0;
}