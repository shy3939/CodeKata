#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max_w = 0;
    int max_h = 0;
    int size = sizes.size();
    
    for(int i = 0; i < size; i++) {
        int w = sizes[i][0];
        int h = sizes[i][1];
        
        if(w < h) {
            int temp = w;
            w = h;
            h = temp;
        }
        
        if(w > max_w) {
            max_w = w;
        }
        if(h > max_h) {
            max_h = h;
        }
        answer = max_w * max_h;
    }
    
    return answer;
}