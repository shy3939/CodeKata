#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd;  // 최대 공약수
    int lcm;  // 최대 공배수
    int mult = n*m;
    int r = -1;
    
    
    // 최대 공약수
    if(n == m) {
        answer.push_back(n);
        answer.push_back(m);
    }
    else if(n < m) {
        while(1){
            r = m % n;
            if(r == 0) {
                gcd = n;
                break;
            }
            else {
                m = n;
                n = r;
            }
        }
        answer.push_back(gcd);
        lcm = mult/gcd;
        answer.push_back(lcm);
    }
    else {
        while(1) {
            r = n % m;
            if(r == 0) {
                gcd = m;
                break;
            }
            else {
                n = m;
                m = r;
            }
        }
        answer.push_back(gcd);
        lcm = mult/gcd;
        answer.push_back(lcm);
    }
    
    return answer;
}