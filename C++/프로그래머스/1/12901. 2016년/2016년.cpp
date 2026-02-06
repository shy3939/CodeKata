#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int count = 0;
    switch(a){
        case 1:
            count = 0;
            break;
        case 2:
            count = 31;
            break;
        case 3:
            count = 60;
            break;
        case 4:
            count = 91;
            break;
        case 5:
            count = 121;
            break;
        case 6:
            count = 152;
            break;
        case 7:
            count = 182;
            break;
        case 8:
            count = 213;
            break;
        case 9:
            count = 244;
            break;
        case 10:
            count = 274;
            break;
        case 11:
            count = 305;
            break;
        case 12:
            count = 335;
            break;
    }
    
    count = count + b - 1;
    
    count = count % 7;
    
    switch(count) {
        case 0:
            answer = "FRI";
            break;
        case 1:
            answer = "SAT";
            break;
        case 2:
            answer = "SUN";
            break;
        case 3:
            answer = "MON";
            break;
        case 4:
            answer = "TUE";
            break;
        case 5:
            answer = "WED";
            break;
        case 6:
            answer = "THU";
            break;
    }
    
    return answer;
}