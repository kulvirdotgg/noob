#include <iostream>
#include <vector>
using namespace std;

void case_permutation(string ip, string op, vector<string>& res){
    if(ip.size()==0){
        res.push_back(op);
        return;
    }
    
    string op1 = op;
    string op2 = op;
    
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    
    case_permutation(ip, op1, res);
    case_permutation(ip, op2, res);
}

int main(){
    string ip = "abc";
    string op = "";
    
    vector<string> res;
    case_permutation(ip, op, res);
    
    for(string s: res) cout<<s<<" ";
    cout<<endl;
    return 0;
}
