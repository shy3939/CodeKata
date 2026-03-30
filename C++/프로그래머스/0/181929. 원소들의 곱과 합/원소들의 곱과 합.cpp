#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {\
    
    int result = 0;
    int mult = 1;
    for(int i : num_list) result += i;
    for(int i : num_list) mult *= i;                
    int po = pow(result, 2);
                                    
    return mult >= po ? 0 : 1;
    

}