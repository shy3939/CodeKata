#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int count = 0;
    
    for(long long x = 1; x < 70000000; x++){
        if(n == x*x) {
            answer = (x+1)*(x+1);
            count = 1;
        }
    }
    if(count == 0) return -1;
    else return answer;
}