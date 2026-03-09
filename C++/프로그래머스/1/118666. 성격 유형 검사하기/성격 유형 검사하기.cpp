#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int size = survey.size();
    int RT = 0;
    int CF = 0;
    int JM = 0;
    int AN = 0;
    
    for(int i = 0; i < size; i++) {
        if(choices[i] == 1) choices[i] = 3;
        else if(choices[i] == 2) choices[i] = 2;
        else if(choices[i] == 3) choices[i] = 1;
        else if(choices[i] == 4) choices[i] = 0;
        else if(choices[i] == 5) choices[i] = -1;
        else if(choices[i] == 6) choices[i] = -2;
        else if(choices[i] == 7) choices[i] = -3;
    }
    
    for(int i = 0; i < size; i++) {
        if(survey[i] == "RT") RT += choices[i];
        else if(survey[i] == "CF") CF += choices[i];
        else if(survey[i] == "JM") JM += choices[i];
        else if(survey[i] == "AN") AN += choices[i];
        else if(survey[i] == "TR") RT -= choices[i];
        else if(survey[i] == "FC") CF -= choices[i];
        else if(survey[i] == "MJ") JM -= choices[i];
        else if(survey[i] == "NA") AN -= choices[i];
    }
    
    if(RT >= 0) answer.push_back('R');
    if(RT < 0) answer.push_back('T');
    if(CF >= 0) answer.push_back('C');
    if(CF < 0) answer.push_back('F');
    if(JM >= 0) answer.push_back('J');
    if(JM < 0) answer.push_back('M');
    if(AN >= 0) answer.push_back('A');
    if(AN < 0) answer.push_back('N');
     
    return answer;
}