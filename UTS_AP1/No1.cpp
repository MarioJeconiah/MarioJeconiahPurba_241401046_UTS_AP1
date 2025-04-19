#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0){
        cout << "bukan" << endl;
        goto a;
    }
    while (n % 2 == 0){
        n = n/2;
    }

    if (n == 1){
        cout << "ya" << endl;
    }

    else {
        cout << "bukan" << endl;
    }
   
    a:
    return 0;
}
 