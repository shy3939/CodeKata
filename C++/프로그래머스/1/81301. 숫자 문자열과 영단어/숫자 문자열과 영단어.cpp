#include <string>
#include <vector>

using namespace std;

struct Numwords {
    string zero = "zero";
    string one = "one";
    string two = "two";
    string three = "three";
    string four = "four";
    string five = "five";
    string six = "six";
    string seven = "seven";
    string eight = "eight";
    string nine = "nine";
};

int solution(string s) {
    Numwords num;
    int answer = 0;
    string result = "";
    string words = "";
    
    for(char c : s) {
        if(c > 47 && c < 58) result += c;
        else {
            words += c;
            if(words == num.zero) { 
                result += "0";
                words = "";
            }
            
            else if(words == num.one) { 
                result += "1";
                words = "";
            }
            else if(words == num.two) { 
                result += "2";
                words = "";
            }
            else if(words == num.three) { 
                result += "3";
                words = "";
            }
            else if(words == num.four) { 
                result += "4";
                words = "";
            }
            else if(words == num.five) { 
                result += "5";
                words = "";
            }
            else if(words == num.six) { 
                result += "6";
                words = "";
            }
            else if(words == num.seven) { 
                result += "7";
                words = "";
            }
            else if(words == num.eight) { 
                result += "8";
                words = "";
            }
            else if(words == num.nine) { 
                result += "9";
                words = "";
            }
        }
    }
    answer = stoi(result);
    
    return answer;
}