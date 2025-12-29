#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long MaxNum(int a, int b){
    if(a < b) return b;
    else return a;
}

long long MinNum(int a, int b){
    if(a < b) return a;
    else return b;
}

long long solution(int a, int b) {
    long long answer = 0;
    int arr[20000000];
    
    int SubNum = MaxNum(a, b) - MinNum(a, b);
    int min = MinNum(a, b);
    
    for(int i = 0; i < SubNum; i++){
        arr[i] = min;
        min++;
        answer += arr[i];
    }
    
    answer = answer + MaxNum(a, b);
    return answer;
}