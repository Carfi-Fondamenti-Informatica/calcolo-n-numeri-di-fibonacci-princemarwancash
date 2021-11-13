#include <iostream>
using namespace std;
int main(){
    int a=0, b=1, c, d, n=0;
    cin >> n;
    if (n<2){
        cout << "errore" << endl;
    } else if (n>=2) {
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
