#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> result;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int size = answers.size();
    
    for(int i = 0; i < size; i+=5) {
        if(answers[i] == 1) count1++;
        if(answers[i+1] == 2) count1++;
        if(answers[i+2] == 3) count1++;
        if(answers[i+3] == 4) count1++;
        if(answers[i+4] == 5) count1++;
    }
    for(int i = 0; i < size; i+=8) {
        if(answers[i] == 2) count2++;
        if(answers[i+1] == 1) count2++;
        if(answers[i+2] == 2) count2++;
        if(answers[i+3] == 3) count2++;
        if(answers[i+4] == 2) count2++;
        if(answers[i+5] == 4) count2++;
        if(answers[i+6] == 2) count2++;
        if(answers[i+7] == 5) count2++;
    }
     for(int i = 0; i < size; i+=10) {
        if(answers[i] == 3) count3++;
        if(answers[i+1] == 3) count3++;
        if(answers[i+2] == 1) count3++;
        if(answers[i+3] == 1) count3++;
        if(answers[i+4] == 2) count3++;
        if(answers[i+5] == 2) count3++;
        if(answers[i+6] == 4) count3++;
        if(answers[i+7] == 4) count3++;
        if(answers[i+8] == 5) count3++;
        if(answers[i+9] == 5) count3++;
    }
    
    if(count1 == count2 && count1 == count3 && count2 == count3) {
        result.push_back(1);
        result.push_back(2);
        result.push_back(3);
    }
    else if(count1 == count2 && count1 != count3) {
        if(count1 > count3) {
            result.push_back(1);
            result.push_back(2);
        }
        else
            result.push_back(3);
    }
    else if(count1 == count3 && count1 != count2) {
        if(count1 > count2) {
            result.push_back(1);
            result.push_back(3);
        }
        else 
            result.push_back(2);
    }
    else if(count2 == count3 && count2 != count1) {
        if(count2 > count1) {
            result.push_back(2);
            result.push_back(3);
        }
        else
            result.push_back(1);
    }
    else {
        int MaxNum = max({count1, count2, count3});
        
        if(MaxNum == count1) result.push_back(1);
        else if(MaxNum == count2) result.push_back(2);
        else result.push_back(3);
    }
    return result;
}