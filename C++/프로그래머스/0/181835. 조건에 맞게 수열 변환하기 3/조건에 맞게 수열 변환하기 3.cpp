#include <string>
#include <vector>

using namespace std;

bool IsEven(int n) {
    if(n & 1) return false;
    return true;
}

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    int size = arr.size();
    if(IsEven(k)) {
        for(int i = 0; i < size; i++) {
            answer.push_back(arr[i] + k);
        }
    }
    if(!IsEven(k)) {
        for(int i = 0; i < size; i++) {
            answer.push_back(arr[i] * k);
        }
    }
    
    return answer;
}