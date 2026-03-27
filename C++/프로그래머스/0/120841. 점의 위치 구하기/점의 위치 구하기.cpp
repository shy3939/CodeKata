#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int mult = dot[0] * dot[1];
    
    if(mult > 0) {
        if(dot[0] > 0) return 1;
        else return 3;
    }
    else {
        if(dot[0] > dot[1]) return 4;
        else return 2;
    }

}