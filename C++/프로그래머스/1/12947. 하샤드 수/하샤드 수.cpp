#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int arr[4];
    int count = 0;
    int sum = 0;
    int result = x;
    
    while(x > 0){
        arr[count] = x % 10;
        x /= 10;
        count++;
    }
    
    for(int i = 0; i < count; i++){
        sum += arr[i];
    }
    
    if((result % sum) == 0){
        return true;
    }
    else {
        return false;
    }
}