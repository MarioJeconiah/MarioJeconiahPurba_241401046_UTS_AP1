#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    int jumlah_vokal = 0;
    int i = 0;

    cout << "Masukkan mantra: ";
    getline(cin, kalimat);

    if (kalimat.length() > 0) {
        do {
            char huruf = (kalimat[i]);
            if (huruf == 'a' || huruf == 'A' || huruf == 'i' || huruf == 'I' || huruf == 'u' || huruf == 'U' || huruf == 'e' || huruf == 'E' || huruf == 'o' || huruf == 'O') {
                jumlah_vokal++;
            }
            i++;
        } while (i < kalimat.length());
    }

    if (jumlah_vokal <= 0){
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
        goto a;
    }

    cout << "Kekuatan mantra: " << jumlah_vokal << " vokal" << endl;
    a:
    return 0;
}
