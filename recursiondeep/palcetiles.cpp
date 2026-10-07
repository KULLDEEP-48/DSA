#include<bits/stdc++.h>
using namespace std;

int placetile(int n){
    // base case
    if(n<=3){
        return 1;   
    }
    // recurrence relation
    // 
    return placetile(n-1) + placetile(n-4);
}
int main(){
    int n;
    cin >> n;
    cout << placetile(n) << endl;

return 0;
}