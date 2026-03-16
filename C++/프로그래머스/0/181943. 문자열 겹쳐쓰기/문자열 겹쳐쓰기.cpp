#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int size = overwrite_string.size();
    int my_size = my_string.size();
    int count = 0;
    
    for(int i = 0; i < my_size; i++) {
        if(i >= s && count < size) {
            my_string[i] = overwrite_string[count];
            count++;
        }
    }
    answer = my_string;
    return answer;
}