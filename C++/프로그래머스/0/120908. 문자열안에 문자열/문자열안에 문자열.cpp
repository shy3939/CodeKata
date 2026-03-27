#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) { 
    int pos = str1.find(str2);
    
    if(pos != string::npos) return 1;
    else return 2;
}