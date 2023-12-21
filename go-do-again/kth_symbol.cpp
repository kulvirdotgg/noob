#include<iostream>
#include<math.h>
using namespace std;

int kth_symbol(int n, int k){
    if(n==1) return 0;
    
    int mid = pow(2, n-1)/2;
    if(k<=mid) return kth_symbol(n-1, k);
    else return !kth_symbol(n-1, k-mid);
}

int main(){
    int n = 4;
    int k = 6;
    
    cout<<kth_symbol(n, k)<<endl;
}
