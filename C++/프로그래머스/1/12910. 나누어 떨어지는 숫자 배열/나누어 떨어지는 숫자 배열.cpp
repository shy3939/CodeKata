#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int count = 0;
    
    for(auto it = arr.begin(); it != arr.end(); it++){
        if(*it % divisor == 0){
            answer.push_back(*it);
            count++;
        }
        else continue;
    }
    
    sort(answer.begin(), answer.end());
    
    if(count > 0){
        return answer;
    }
    else {
        answer = {-1};
        return answer;
    }
}