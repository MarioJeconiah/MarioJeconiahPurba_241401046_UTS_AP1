#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int nilaiAP, nilaiPDS, nilaiSisop;
    float mean;
    
    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM Mahasiswa: ";
    getline(cin, nim);

    cout << "Nilai Algoritma dan Pemrograman: ";
    cin >> nilaiAP;
    cout << "Nilai Probabilitas dan Statistika: ";
    cin >> nilaiPDS;
    cout << "Nilai Sistem Operasi: ";
    cin >> nilaiSisop;
    cout << endl;


    cout << "Algoritma dan Pemrograman: " << " " << (nilaiAP >= 60 ? "Lulus" : "Tidak Lulus") << endl;

    cout << "Probabilitas dan Statistika: " << " " << (nilaiPDS >= 60 ? "Lulus" : "Tidak Lulus") << endl;

    cout << "Sistem Operasi: " << " " << (nilaiSisop >= 60 ? "Lulus" : "Tidak Lulus") << endl;

    mean = (nilaiAP + nilaiPDS + nilaiSisop) / 3.0;

    cout << "Rata-rata Nilai Semester: " << mean << endl;

    return 0;
}
