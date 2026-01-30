#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    
    for(int i = 0; i < size; i++) {
        
        for(int j = 1+i; j < size; j++) {
            int count = 0;
            int sum = numbers[i] + numbers[j];
            cout << sum << " ";
                
            for(int i : answer) {
                if(i == sum) count++;
            }
            
            if(count == 0) answer.push_back(sum);
        }
        sort(answer.begin(), answer.end());
    }
    return answer;
}