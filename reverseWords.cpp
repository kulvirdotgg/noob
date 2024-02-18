#include <iostream>
#include <sstream>

void myOwnSwap(std::string& someStr, int left, int right) {
    char temp = someStr[left];
    someStr[left] = someStr[right];
    someStr[right] = temp;
}

void revWord(std::string& someStr) {
    int left = 0, right = someStr.length()-1;

    while(left <= right) {
        myOwnSwap(someStr, left, right);
        right--;
        left++;
    }
}

std::string reverseWords(const std::string& fckinString) {
    std::stringstream ss(fckinString);
    std::string word;
    std::string reversedString;

    while (ss >> word) {
        revWord(word);
        reversedString += word + " ";
    }

    // remove the last (' ') SPACE charater
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

std::string reverseSen(std::string sen){
    std::string ops="";
    std::string temp="";
    for(int i=sen.size()-1;i>=0;i--){
        if(sen[i]!=' '){
            temp+=sen[i];
        }
        else{
            ops = temp+' '+ops;
            temp="";
        }
        
    }
    ops=temp+' '+ops;
    return ops;
}
int main() {
    std::string inputString = "Hello World! C++ is awesome.";
    std::string result = reverseSen(inputString);
    std::cout << result << std::endl;

    return 0;
}
