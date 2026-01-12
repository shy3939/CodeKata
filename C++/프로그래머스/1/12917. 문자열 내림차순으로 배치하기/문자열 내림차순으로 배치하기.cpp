#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool desc(char a, char b){
    return a > b;
}

string solution(string s) {
    
    sort(s.begin(), s.end(), desc);
    return s;
}