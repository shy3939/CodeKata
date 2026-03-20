#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    if(n < 8) return 1;
    
    int mod = n / 7;
    int result  = n % 7;
    
    if(result == 0) return mod;
    else return mod+1;
}