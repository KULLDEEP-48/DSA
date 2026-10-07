#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void printalloccurences(int *a,int n,int i,int key){
    // base case.
    if(i==n){
        return;
    }

    // recurrence relation.
    if(a[i]==key){
        cout << i << " ";
    }
    printalloccurences(a,n,i+1,key);
}
int main(){
    int a[]={1,2,3,2,4,2};
    int n=sizeof(a)/sizeof(int);
    int i=0;
    int key;
    cin >> key;
    printalloccurences(a,n,i,key);
    cout << endl;
    return 0;
}