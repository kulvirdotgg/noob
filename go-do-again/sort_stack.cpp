#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int>& st, int num){
    if(st.size()==0 || st.top()<=num){
        st.push(num);
        return;
    }
    
    int temp = st.top();
    st.pop();
    insert(st, num);
    st.push(temp);
}

void sort(stack<int>& st){
    if(st.size()==1) return;
    
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st, temp);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(0);
    st.push(5);
    st.push(2);
    
    
    sort(st);
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<'\n';
    
    return 0;
}
