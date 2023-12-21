#include <iostream>
#include <vector>
using namespace std;

void subsets(string ip, vector<string>& res, string& curr, int idx){
    if(idx == ip.size()){
        res.push_back(curr);
        return;
    }
    
    subsets(ip, res, curr, idx+1);
    
    curr.push_back(ip[idx]);
    subsets(ip, res, curr, idx+1);
    curr.pop_back();
}

int main(){
    vector<string> res;
    string ip = "ab";
    string curr = "";
    
    subsets(ip, res, curr, 0);
    
    for(string subset: res) cout<<subset<<' ';
    cout<<'\n';
}
