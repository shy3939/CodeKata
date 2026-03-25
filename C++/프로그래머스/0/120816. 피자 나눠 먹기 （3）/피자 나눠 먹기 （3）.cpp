#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    if(slice >= n) return 1;
    
    int result = n % slice;
    if(result == 0) return n/slice;
    
    int mod = n / slice;
    answer = mod + 1;
    
    return answer;
}