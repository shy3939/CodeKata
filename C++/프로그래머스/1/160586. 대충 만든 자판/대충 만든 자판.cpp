#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for (string s : targets) {
        int total_count = 0;
        bool possible = true;

        for (char t : s) {
            int min_dist = 101;

            for (string sk : keymap) {
                size_t pos = sk.find(t);
                
                if (pos != string::npos) {
                    min_dist = min(min_dist, (int)pos + 1);
                }
            }

            if (min_dist == 101) {
                possible = false;
                break;
            }
            total_count += min_dist;
        }

        if (possible) answer.push_back(total_count);
        else answer.push_back(-1);
    }
    return answer;
}