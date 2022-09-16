#include <iostream>
using namespace std;

void pertambahan(){
    double num1, num2, result;
    cout << "=====================" << endl;
    cout << "|    PENJUMLAHAN    |" << endl;
    cout << "=====================" << endl;
    cout << "Masukan Angka Pertama: ";
    cin >> num1;
    cout << "Masukan Angka Kedua: ";
    cin >> num2;

    result = num1 + num2;
    cout << "\nPenjumlahan dari " << num1 << " + " << num2 << " = " << result << endl;
}

void pengurangan(){
    double num1, num2, result;
    cout << "=====================" << endl;
    cout << "|    PENGURANGAN    |" << endl;
    cout << "=====================" << endl;
    cout << "Masukan Angka Pertama: ";
    cin >> num1;
    cout << "Masukan Angka Kedua: ";
    cin >> num2;

    result = num1 - num2;
    cout << "\nPengurangan dari " << num1 << " - " << num2 << " = " << result << endl;
}

void perkalian(){
    double num1, num2, result;
    cout << "=====================" << endl;
    cout << "|     PERKALIAN     |" << endl;
    cout << "=====================" << endl;
    cout << "Masukan Angka Pertama: ";
    cin >> num1;
    cout << "Masukan Angka Kedua: ";
    cin >> num2;

    result = num1 * num2;
    cout << "\nPerkalian dari " << num1 << " x " << num2 << " = " << result << endl;
}

void pembagian(){
    double num1, num2, result;
    cout << "=====================" << endl;
    cout << "|     PEMBAGIAN     |" << endl;
    cout << "=====================" << endl;
    cout << "Masukan Angka Pertama: ";
    cin >> num1;
    cout << "Masukan Angka Kedua: ";
    cin >> num2;

    result = num1 / num2;
    cout << "\nPembagian dari " << num1 << " + " << num2 << " = " << result << endl;
}

int main() {
    while(true){

        double input;
        char pilihan;

        cout << "==============================" << endl;
        cout << "|                            |" << endl;
        cout << "|    Kalkulator Sederhana    |" << endl;
        cout << "|                            |" << endl;
        cout << "==============================" << endl;

        cout << "Pilih metode perhitungan" << endl;
        cout << "1. Pertambahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian\n";

        cout << "Masukan pilihan (masukan angka): ";
        cin >> input;

        if(input == 1){
            system("cls");
            pertambahan();
        } else if(input == 2){
            system("cls");
            pengurangan();
        } else if(input == 3){
            system("cls");
            perkalian();
        } else if(input == 4){
            system("cls");
            pembagian();
        }

        cout << "Ingin melakukan perhitungan kembali? (y/n): ";
        cin >> pilihan;
        
        if(pilihan == 'y'){
            system("cls");
            continue;
        } else{
            system("cls");
            cout << "===== SELESAI =====" << endl;
            break;
        }

    }

}
