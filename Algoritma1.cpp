#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    int pilihan, n;

    cout << "===== MENU FIBONACCI =====" << endl;
    cout << "1. Tampilkan Deret Fibonacci" << endl;
    cout << "2. Cari Nilai Fibonacci ke-n" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    if(pilihan == 1){
        cout << "Masukkan jumlah deret: ";
        cin >> n;

        cout << "Deret Fibonacci: ";
        for(int i = 0; i < n; i++){
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }

    else if(pilihan == 2){
        cout << "Masukkan nilai n: ";
        cin >> n;

        cout << "Nilai Fibonacci ke-" << n << " adalah: ";
        cout << fibonacci(n) << endl;
    }

    else{
        cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
