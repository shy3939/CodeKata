#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<char>arr;
    string result = "";
    
    string str = to_string(n);
    
    for(char c : str){
        arr.push_back(c);
    }
    
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] <= arr[j]){
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(auto it = arr.begin(); it != arr.end(); it++){ 
        result+= *it; 
    }
    
    answer = stoll(result);
    
    return answer;
}