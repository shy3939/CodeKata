#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    
    int pos = my_string.find(target);
    
    return pos!=string::npos ? 1 : 0;
}