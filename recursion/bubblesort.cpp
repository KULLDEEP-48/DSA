#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void Bubblesort(int *a,int n,int i){
    // base case.
    if(i==n-1){
        return;
    }
    // recurrence relation.
    for(int j=0;j<n-1-i;j++){ // here i is used to reduce the last sorted element from upcoming sorting.
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    Bubblesort(a,n,i+1);
}

void Print(int *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int a[]={5,4,3,2,1,-1,-2};
    int i=0;
    int n= sizeof(a)/sizeof(int);
    Print(a,n);
    Bubblesort(a,n,i);
    Print(a,n);
    return 0;
}