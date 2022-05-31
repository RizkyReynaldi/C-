#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
void Penjumlahan();
void Pengurangan();
void Perkalian();
void Pembagian();
void Perpangkatan();
void Akar();

int main(){
    system("cls");
    int option1;
    char optioncontinue;
    cout << "===============================" << endl;
    cout << "     KALKULATOR SEDERHANA" << endl;
    cout << "===============================" << endl;
    option2:
    cout << "1.Penjumlahan" << endl;
    cout << "2.Pengurangan" << endl;
    cout << "3.Perkalian" << endl;
    cout << "4.Pembagian" << endl;
    cout << "5.Perpangkatan" << endl;
    cout << "6.Akar" << endl;
    cout << "7.Keluar" << endl;
    cout << "\nMasukkan Pilihan Anda [1 - 7] = "; cin >> option1;

    switch (option1)
    {
    case 1:
        Penjumlahan();
        break;
    case 2:
        Pengurangan();
        break;
    case 3:
        Perkalian();
        break;
    case 4:
        Pembagian();
        break;
    case 5:
        Perpangkatan();
        break;
    case 6:
        Akar();
        break;
    case 7:
        exit(0);                    
    default:
        system("cls");
        cout << "Input Yang Anda Masukkan Salah Mohon Masukkan Ulang" << endl;
        goto option2;
        break;
    }

   
    cout << endl;
    optionexit: 
    cout << "Ingin Menjalankan Program Lagi[Y / T] = "; cin >> optioncontinue;

    if (optioncontinue == 'y' || optioncontinue == 'Y'){
        system("cls");
        goto option2;
    }
    else if (optioncontinue == 't' || optioncontinue == 'T'){
        exit(0);
    }
    else{
        system("cls");
        cout << "INPUT YANG ANDA MASUKKAN SALAH, MOHON MASUKKAN INPUT DENGAN BENAR\n" << endl;
        goto optionexit;
    }
    
    
    return 0;
}

void Penjumlahan(){
    float a,b,c;
    cout << "Masukkan Bilangan A = "; cin >> a;
    cout << "Masukkan Bilangan B = "; cin >> b;
    c = a+b;
    cout << "\nHasil Penjumlahan Dari " << a << " Ditambah Dengan " << b << " Adalah " << c << endl;
}
void Pengurangan(){
    float a,b,c;
    cout << "Masukkan Bilangan A = "; cin >> a;
    cout << "Masukkan Bilangan B = "; cin >> b;
    c = a-b;
    cout << "\nHasil Pengurangan Dari " << a << " Dikurang Dengan " << b << " Adalah " << c << endl;
}
void Perkalian(){
    float a,b,c;
    cout << "Masukkan Bilangan A = "; cin >> a;
    cout << "Masukkan Bilangan B = "; cin >> b;
    c = a*b;
    cout << "\nHasil Perkalian Dari " << a << " Dikali Dengan " << b << " Adalah " << c << endl;
}
void Pembagian(){
    float a,b,c;
    cout << "Masukkan Bilangan A = "; cin >> a;
    cout << "Masukkan Bilangan B = "; cin >> b;
    c = a/b;
    cout << "\nHasil Pembagian Dari " << a << " Dibagi Dengan " << b << " Adalah " << c << endl;
}
void Perpangkatan(){
    float a,b,c;
    cout << "Masukkan Bilangan Yang Ingin Dipangkatkan = "; cin >> b;
    cout << "Masukkan Pangkat = "; cin >> a;
    c = pow(b,a);
    cout << "\nHasil Perpangkatan Dari " << b << " Dipangkatkan Dengan " << a << " Adalah " << c << endl;
}
void Akar(){
    float a,c;
    cout << "Masukkan Bilangan Yang Ingin Diakarkan = "; cin >> a;
    c = sqrt(a);
    cout << "\nHasil Bilangan Yang Sudah Diakarkan Dari " << a << " Adalah " << c << endl;
}
