#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    int inner = 0;
    int size = a.size();
    
    for(int i = 0; i < size; i++){
        inner = a[i]*b[i];
        answer += inner;
    }
    
    return answer;
}