#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    int pos = str2.find(str1);
    return pos != string::npos ? 1 : 0; 
}