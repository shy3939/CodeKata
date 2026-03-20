#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    
    reverse(my_string.rbegin(), my_string.rend());
    
    return my_string;
}