#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    vector<int> array(n, 1);
    
    for(int i : lost) {
        array[i-1]--;
    }
    
    for(int i : reserve) {
        array[i-1]++;
    }
    
    for(int i = 0; i < n; i++) {
        if(array[i] == 0) {
            if(i > 0 && array[i-1] == 2) {
                array[i-1]--;
                array[i]++;
            }
            else if(i < n-1 && array[i+1] == 2) {
                array[i+1]--;
                array[i]++;
            }
        }
    }
    
    for(int i : array) {
        if(i == 0) answer -= 1;
    }
    
    
    return answer;
}