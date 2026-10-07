#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void Waveprint(int a[3][3],int r, int c){

    cin >> r >> c;
for(int col=0;col<c;col++){
        // column is even.
        if(col%2==0){
            for(int row=0;row<r;row++){
                cout << a[row][col] << " ";
            }
            // cout << endl;
        }

        // column is odd.
        else{
            for(int row=r-1;row>=0;row--){
                cout << a[row][col] << " ";
            }
            // cout << endl;
        }
    }
}
 int main(){
    int r,c;
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
     };
     Waveprint(a,r,c);
    return 0;
 }