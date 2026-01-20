#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long factorial(int number) {
    long long result = 1;
    for(int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

int solution(vector<int> number) {
    int answer = 0;
    int size = number.size();
    int fac = size-3;
    long long a = factorial(size);
    long long b = factorial(3);
    long long c = factorial(fac);
    int x = a/(b*c);
    // answer = x;
    
    for(int i = 0; i < size; i++) {
        for(int j = 1 + i; j < size; j++) {
            for(int k = 1 + j; k < size; k++) {
                if(number[i] + number[j] + number[k] == 0) answer += 1;
            }
        }
    }
    
    return answer;
}