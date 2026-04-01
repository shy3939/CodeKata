#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    int size = players.size();
    unordered_map<string, int> player_index;
    for(int i = 0; i < size; i++) {
        player_index[players[i]] = i+1;
    }
    
    for(string s : callings) {
        int rank = player_index[s]-1;
        player_index[s] -= 1;
        string ss = players[rank-1];
        players[rank-1] = players[rank];
        players[rank] = ss;
        player_index[ss] += 1;
    }
    return players;
}