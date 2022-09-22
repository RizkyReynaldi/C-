#include <iostream>

using namespace std;

int main(){
	start:
	system("cls");	
	cout << "==================================" << endl;
	cout << "Program Hitung Total Gaji Karyawan" << endl;
	cout << "==================================" << endl << endl;

	unsigned int total_gaji;
	unsigned short jumlah_anak;
	string nama;
	cout << "Masukkan Nama Penerima Gaji = ";
	getline(cin,nama);
	cout << endl;
	cout << "Masukkan Jumlah Anak Penerima Gaji = "; cin >> jumlah_anak;
	cout << endl;
	cout << "Masukkan Total Gaji Pokok Karyawan = "; cin >> total_gaji;
	cout << endl;

	if (jumlah_anak > 1 && jumlah_anak <= 2)
	{
		total_gaji += 250000;
	} else if (jumlah_anak > 2 && jumlah_anak <= 3)
	{
		total_gaji += 350000;
	} else if (jumlah_anak > 3)
	{
		total_gaji += 500000;
	}

	cout << "Total Gaji Yang Diterima Oleh " << nama << " Adalah Sebesar " << total_gaji;
	
	cout << endl << endl;

	char option_ulang;
	cout << "Ingin Input Ulang [ y / t ] ? "; cin >> option_ulang;

	if (option_ulang == 'y' || option_ulang == 'Y')
	{
		goto start;
	} else if (option_ulang == 't' || option_ulang == 'T')
	{
		exit(0);
	}

	return 0;
}