#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> remain;
    
    
    while(1) {
        if(n < 3) {
            remain.push_back(n);
            break;
        }
        remain.push_back(n % 3);
        n /= 3;
    }
    
    reverse(remain.begin(), remain.end());
    
    int size = remain.size();
    
    for(int i = 0; i < size; i++) {
        answer += (remain[i] * pow(3, i));
    }
    
    return answer;
}