#include <iostream>

using namespace std;

int main(){
    system("cls");
    string name;
    float nilai;
    cout << "Masukkan Nama Lengkap Anda = "; getline(cin,name);
    system("cls");

    cout << "Hai, Selamat Datang " << name << endl;
labelinput:
    cout << "\nSilahkan Masukkan Nilai Rata-Rata Yang Anda Peroleh = "; cin >> nilai;

    if (nilai >= 75.40){
        cout << "\nSelamat " << name << " Anda Memenuhi Syarat Kelulusan Dengan Memperoleh Nilai Rata-Rata Sebanyak " << nilai << endl;
    }
    else if (nilai < 75.40){
        cout << "\nMaaf " << name << " Anda Belum Memenuhi Syarat Kelulusan Dikarenakan Nilai Anda Belum Memenuhi Syarat Kelulusan." << endl;
    }
    else{
        system("cls");
        cout << "Maaf, Input Yang Anda Masukkan Salah. Silahkan Masukkan Pilihan Anda Kembali" << endl;
        goto labelinput;
    }
    
    cin.get();   
    return 0;
}
