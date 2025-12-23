#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    
    int count_p = 0;
    int count_y = 0;
    
    for(char c : s){
        if(c == 'p' || c == 'P') count_p++;
        if(c == 'y' || c == 'Y') count_y++;
    }
    if(count_p == count_y) answer = true;
    else if(count_p == 0 && count_y == 0) answer = true;
    else answer = false;

    return answer;
}