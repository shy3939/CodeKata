#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int size = my_string.size() - n;
    int max = my_string.size();
    
    for(int i = size; i < max; i++) {
        answer += my_string[i];
    }
    return answer;
}