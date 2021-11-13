#include <iostream>
using namespace std;
int main(){
    int a=0, b=1, c, d, n=0;
    cout << "Inserisci un numero maggiore/uguale a 2: " << endl;
    cin >> n;
    if (n<2){
        cout << "Errore! Inserire un numero maggiore/uguale a 2!" << endl;
    } else if (n>=2) {
        cout << "Di seguito al numero che hai scelto: " << n << ", ecco i primi numeri della serie:" << endl;
        cout << 1 << endl;
        for (d=0; d<=n;d++){
            c = a+b;
            cout << c << endl;
            a = b;
            b = c;
        }
    }
    return 0;
}
