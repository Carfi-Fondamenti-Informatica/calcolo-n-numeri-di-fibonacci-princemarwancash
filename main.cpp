#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=1;
    int c=0;
    int d=0;
    int n=0;
    cin >> n;
    if (n<2){
        cout << "errore" << endl;
    } else if (n>=2) {
        for (d=0; d<=n;d++){
            c = a+b;
            cout << c << endl;
            a = b;
            b = c;
        }
    }
    return 0;
}
