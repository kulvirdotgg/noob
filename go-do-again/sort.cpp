#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& arr, int num){
    if(arr.size()==0 || arr[arr.size()-1]<=num){
        arr.push_back(num);
        return;
    }
    
    int temp = arr[arr.size()-1];
    arr.pop_back();
    insert(arr, num);
    arr.push_back(temp);
}

void sort(vector<int>& arr){
    if(arr.size()==1) return;
    
    int temp = arr[arr.size() -1 ];
    arr.pop_back();
    sort(arr);
    insert(arr, temp);
}

int main(){
    vector<int> arr = {1,0,5,2};
    sort(arr);
    
    for(int num: arr) cout<<num<<' ';
    cout<<'\n';
    
    return 0;
}
