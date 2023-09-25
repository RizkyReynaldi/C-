#include <iostream>
const int panjang_array = 6;

using namespace std;

void push1(int arr[],int t1){
	int index = t1 + 1;
	int nilai;
	cout << "Masukkan Nilai Ke Dalam Array Dengan Index [" << index << "] :";
	cin >> nilai;
	arr[index] = nilai;
	cout << arr[index] << endl;
}

void push2(int arr[],int t2){
	int index = t2 - 1;
	int nilai;
	cout << "Masukkan Nilai Ke Dalam Array Dengan Index [" << index << "] :";
	cin >> nilai;
	arr[index] = nilai;
	cout << arr[index] << endl;
}

void pop1(int arr[],int t1){
	int index = t1;
	arr[index] = {};
}

void pop2(int arr[],int t2){
	int index = t2;
	arr[index] = {};
}

int main(int argc, char const *argv[])
{
	// variabel top
	int t1,t2;
	// contoh array
	int cth_arr[panjang_array];
	// setting default top
	t1 = -1; // -1
	t2 = panjang_array;
	// setting menu
	int pilihan_menu_utama;
	int pilihan_menu_push;
	int pilihan_menu_pop;
	menu_utama:
	system("clear");
	cout << "Program Double Stack - Struktur Data" << endl;
	cout << "1.Push" << endl;
	cout << "2.Pop" << endl;
	cout << "3.Cetak Array" << endl;
	cout << "4.Exit" << endl;
	cout << "Masukkan Pilihan Anda [1-4] : ";
	cin >> pilihan_menu_utama;

	if (pilihan_menu_utama == 1)
	{
		system("clear");
		cout << "Masukkan Pilihan Anda (push)" << endl;
		cout << "1.Push T1" << endl;
		cout << "2.Push T2" << endl;
		cout << "3.Menu Utama" << endl;
		cout << "Masukkan Pilihan Anda [1-3] : ";
		cin >> pilihan_menu_push;

		if (pilihan_menu_push == 1)
		{
			int kondisi_stack = t2 - t1;
			//cek kondisi stack
			if (kondisi_stack == 1)
			{
				system("clear");
				cout << "Warning : Tidak Bisa Melanjutkan Push 1 Karena Kondisi Stack Penuh" << endl;
				goto menu_utama;
			}else if (kondisi_stack > 1)
			{
				push1(cth_arr,t1);
				t1 = t1 + 1;
				cout << "Bisa Melanjutkan Push 1 Karena Kondisi Stack Tidak Penuh" << endl;
				goto menu_utama;
			}else{
				goto menu_utama;
			}
		}else if (pilihan_menu_push == 2)
		{
			int kondisi_stack = t2 - t1;
			//cek kondisi stack
			if (kondisi_stack == 1)
			{
			}else if (kondisi_stack > 1)
			{
				push2(cth_arr,t2);
				t2 = t2 - 1;
				goto menu_utama;
			}
		}else if (pilihan_menu_push == 3)
		{
			goto menu_utama;
		}
	}else if (pilihan_menu_utama == 2)
	{
		system("clear");
		cout << "Masukkan Pilihan Anda (pop)" << endl;
		cout << "1.Pop T1" << endl;
		cout << "2.Pop T2" << endl;
		cout << "3.Menu Utama" << endl;
		cout << "Masukkan Pilihan Anda [1-3] : ";
		cin >> pilihan_menu_pop;

		if (pilihan_menu_pop == 1)
		{
			// cek kondisi stack - pop 1
			if (t1 == -1)
			{
				cout << "Tidak Bisa Melanjutkan Pop 1 Karena Kondisi Stack Kosong" << endl;
				goto menu_utama;
			}else{
				pop1(cth_arr, t1);
				t1 = t1 - 1;
				goto menu_utama;
			}
		}else if (pilihan_menu_pop == 2)
		{
			// cek kondisi stack - pop 1
			if (t2 == panjang_array)
			{
				cout << "Tidak Bisa Melanjutkan Pop 2 Karena Kondisi Stack Kosong" << endl;
				goto menu_utama;
			}else{
				pop2(cth_arr, t2);
				t2 = t2 + 1;
				goto menu_utama;
			}
		}else{
			goto menu_utama;
		}
	}else if (pilihan_menu_utama == 3)
	{	
			cout << "index :\t|0|\t|1|\t|2|\t|3|\t|4|\t|5|" << endl;
			cout << "Isi   :\t";
		for (int i = 0; i < panjang_array; i++)
		{
			cout << "|" << cth_arr[i] << "|\t"; 
		}
	}else if (pilihan_menu_utama == 4)
	{
		return 0;
	}
}