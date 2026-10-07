#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);

    // printArray(a,n);
    // rotate(a,a+3,a+n);  // rotate an array about a point.
    // printArray(a,n);

    printArray(a,n);
    reverse(a,a+n);  // reverse an array.
    printArray(a,n);

    return 0;
}