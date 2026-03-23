#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int t) {
    int answer = n;

    int result = pow(2, t);
    answer = answer * result;
    return answer;
}