#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    int c = a*b;

    for(int i = 0; i < c; i++){
        if(i % a == 0 && i != 0) cout << "\n";
        cout << "*";
    }
 
    return 0;
}