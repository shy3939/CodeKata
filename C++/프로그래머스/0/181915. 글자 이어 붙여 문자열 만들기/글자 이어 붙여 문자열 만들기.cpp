#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    for(int i : index_list) {
        answer = answer + my_string[i];
    }
    return answer;
}