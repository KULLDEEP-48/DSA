#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void rotateimage(int a[][100],int n){
    // reverse of the rows.
    for(int rows=0;rows<n;rows++){
        int x=0,y=n-1;
        while(x < y){
            swap(a[rows][x],a[rows][y]);
        x++;
        y--;
        }   
    }

    //for transpose of the 2D.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
            swap(a[i][j],a[j][i]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout <<  a[i][j] << " ";
         }
         cout << endl;
     }

}

int main(){
    int a[100][100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    rotateimage(a,n);

return 0;
}