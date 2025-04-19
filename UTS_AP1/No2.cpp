#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cin >> kalimat;

    int hasil = 0;
    int BitSekarang = 1;
    char digit;

    for (int i = kalimat.length() - 1; i >= 0; i--) {
        digit = kalimat[i];

        if (digit != '0' && digit != '1') {
            cout << "Pesan Rusak!" << endl;
            goto a;
        }

        if (digit == '1') {
            hasil += BitSekarang;
        }
        BitSekarang *= 2;
        
    }

    cout << "Angka desimal dari biner " << kalimat << " adalah = "<< hasil << endl;
    a:
    return 0;
}
