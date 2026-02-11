#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n) {
    if(n <= 1) return false;
    else if(n == 2) return true;
    else if(n % 2 == 0) return false;
    
    for(int i = 3; i <=sqrt(n); i+=2) {
        if(n % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int size_i = nums.size()-2;
    int size_j = nums.size()-1;
    int size_k = nums.size();
    
    for(int i = 0; i < size_i; i++) {
        for(int j = i + 1; j < size_j; j++) {
            for(int k = j + 1; k < size_k; k++) {
                int number = nums[i] + nums[j] + nums[k];
                if(IsPrime(number)) {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}