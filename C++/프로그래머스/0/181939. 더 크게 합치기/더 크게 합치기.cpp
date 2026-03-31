#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {

    string s1 = to_string(a);
    string s2 = to_string(b);
    
    string s  = s1 + s2;
    string ss = s2 + s1;
    
    int i1 = stoi(s);
    int i2 = stoi(ss);
    
    return i1 >= i2 ? i1 : i2;
}