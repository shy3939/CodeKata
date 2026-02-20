#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int count = 0;
    int zero_cnt = 0;
    
    for(int num : lottos) {
        if(num == 0) {
            zero_cnt++;
        }
        else {
            for(int i = 0; i < 6; i++) {
                if(num == win_nums[i]) count++;
            }
        }
    }
    
    int max_rank = (zero_cnt + count < 2) ? 6 : 7 - (zero_cnt + count);
    int min_rank = (count < 2) ? 6 : 7 - count;
    
    answer.push_back(max_rank);
    answer.push_back(min_rank);
    
    return answer;
}