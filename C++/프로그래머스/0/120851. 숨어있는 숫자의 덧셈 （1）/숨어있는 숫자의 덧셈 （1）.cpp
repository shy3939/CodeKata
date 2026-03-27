#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string sum = "";
    for(char c : my_string) {
        if(c >= '1' && c <= '9') sum += c;
    }
    for(char c : sum) {
        int a = c - '0';
        answer += a;
    }
    return answer;
}