#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int size = my_string.size();
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < n; j++) answer += my_string[i];
    }
    return answer;
}