#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    double result = sqrt(n);
    
    if(result == (int)result) return 1;
    else return 2;
}