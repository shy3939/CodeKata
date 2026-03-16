#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(char c : str) {
        if(c >= 'A' && c <= 'Z') {
            c = c + 32;
            cout << c;
        }
        else {
            c = c - 32;
            cout << c;
        }
    }
    return 0;
}