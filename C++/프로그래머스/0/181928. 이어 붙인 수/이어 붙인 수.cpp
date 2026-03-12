#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string zzak = "";
    string hol = "";
    
    for(int i : num_list) {
        string c = to_string(i);
        (i % 2 == 0) ? zzak += c : hol += c;
    }
    int even = stoi(zzak);
    int odd = stoi(hol);
    answer = even + odd;
    return answer;
}