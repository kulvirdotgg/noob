#include <iostream>
#include <vector>
using namespace std;

void josephus(vector<int>& persons, int k, int& idx, int& res) {
    if(persons.size()==1){
        res = persons[0];
        return;
    }
    
    idx = (idx+k)%persons.size();
    persons.erase(persons.begin()+idx);
    josephus(persons, k, idx, res);
}

int main(){
    int k=7;
    vector<int> persons;
    for(int i=0;i<40;i++) persons.push_back(i);
    
    int res;
    int idx=1;
    josephus(persons, k-1, idx, res);
    cout<<"last surviving person is : "<<res<<'\n';
    return 0;
}
