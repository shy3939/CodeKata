#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    
    for(char c : s){
        if(c == 32) {
            count = -1;
            c=c;
        }
        
        if(count % 2 == 0 && count != -1) {
            if(c >= 'a' && c <= 'z') c = c -32;
            else if(c >= 'A' && c <= 'Z') c = c;
            else c = c;
        }
        
        if(count % 2 != 0 && count != -1) {
            if(c >= 'a' && c <= 'z') c = c;
            else if(c >= 'A' && c <= 'Z') c = c + 32;
            else c = c;
        }
        
        answer.push_back(c);
        count++;
    }
    cout << answer << endl;
    return answer;
}