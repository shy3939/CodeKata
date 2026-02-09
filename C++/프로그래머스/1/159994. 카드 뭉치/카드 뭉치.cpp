#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int count1 = 0;
    int count2 = 0;
    bool Possible = true;
    
    
    for(string s : goal) {
        if(s == cards1[count1]) {
            count1++;
            continue;
        }
        if(s == cards2[count2]) {
            count2++;
            continue;
        }
        answer = "No";
    }
    
    return answer;
}