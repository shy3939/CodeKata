#include <string>
#include <vector>
#include <iostream>

using namespace std;

int get_total_day(string date) {
    int y = stoi(date.substr(0,4));
    int m = stoi(date.substr(5,2));
    int d = stoi(date.substr(8,2));
    return (y * 12 * 28) + (m * 28) + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int size = privacies.size();
    int today_total = get_total_day(today);
    
    int term_map[26] = {0,};
    for(string s : terms) {
        term_map[s[0] - 'A'] = stoi(s.substr(2));
    }
    
    for(int i = 0; i < size; i++) {
        string collect_date = privacies[i].substr(0, 10);
        char type = privacies[i].back();
        
        int expire_days = get_total_day(collect_date) + (term_map[type - 'A'] * 28);
        
        if(today_total >= expire_days) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}