#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;


void spiralprint(int a[][100], int n, int m){
    int sr=0,sc=0,er=n-1,ec=m-1;
     while(sr<=er and sc<=ec){
        
    // 1. print sr from sc to ec and sr++.

    for(int col=sc;col<=ec;col++){
        cout << a[sr][col] << " ";
    }
    sr++;

    // 2. print ec from sr to er and ec--.

    for(int row=sr;row<=er;row++){
        cout << a[row][ec] << " ";
    }
    ec--;

    // 3. print er from ec to sc and er--.

    if(sr<er){   // no two same row should print.

    for(int col=ec;col>=sc;col--){
        cout << a[er][col] << " ";
    }
   er--; 
}
   
    // 4. print sc from er to sr and sc ++.

     if(sc<ec){  // no two same column should print.

    for(int row=er;row>=sr;row--){
        cout << a[row][sc] << " ";
    }
    sc++;
}
}

}

int main(){
    int a[100][100];
    int n,m;
    cin >> n >> m ;
    int val =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = val;
            val ++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    spiralprint(a,n,m);

    return 0;
}