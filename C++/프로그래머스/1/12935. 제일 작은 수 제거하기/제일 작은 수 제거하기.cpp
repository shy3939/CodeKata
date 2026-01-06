#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int result = 0;
    
    if(arr.size() <= 1) return vector<int> {-1};
    
    int min = *min_element(arr.begin(), arr.end());
    
    for(int x : arr){
        if(x != min) answer.push_back(x);
    }
    
    return answer;
}