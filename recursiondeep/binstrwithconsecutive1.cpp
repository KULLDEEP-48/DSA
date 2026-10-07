#include<bits/stdc++.h>
using namespace std;

int binstr(int n,int ld){
    // base case.
    
    // recurrence relation.
    if(ld==0){
       int smallans =  binstr(n-1,0) + binstr(n-1,1);
    }
    if(ld==1){
        int smallans = binstr(n-1,0);
    }
}
int main(){
    int n,ld;
    cin >> n >> ld;
    cout << binstr(n,ld);
    return 0;
}