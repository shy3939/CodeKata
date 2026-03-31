#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;

string solution(string myString) {
    string answer = "";
    for(char c : myString) {
        answer += (char)toupper(c);
    }
    return answer;
}