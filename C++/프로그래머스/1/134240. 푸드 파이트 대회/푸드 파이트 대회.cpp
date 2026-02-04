#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string result = "";
    int count = 0;
    
    for(int num : food) {
        if(num % 2 == 0) {
            int share = num/2;
            for(int i = 0; i < share; i++) result += to_string(count);
        }
        else if(num % 2 != 0 && num != 1) {
            num -= 1;
            int share = num/2;
            for(int i = 0; i < share; i++) result += to_string(count);
        }
        count++;
    }
    answer += result;
    answer += '0';
    reverse(result.begin(), result.end());
    answer += result;
    
    return answer;
}