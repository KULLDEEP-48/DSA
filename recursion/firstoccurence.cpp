#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

// without iterator.
int Firstoccurence(int *a,int n,int key){
    // base case.
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }

    // recurrence relation.
    int i=Firstoccurence(a+1,n-1,key);
    if(i==-1){
        // invalid index.
        return -1;
    }else{
        return i+1;
    }
}

// with using an iterator.
int FirstoccurenceIterator(int *a,int n,int i,int key){
    // base case.
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    // recurrence relation.
    return FirstoccurenceIterator(a,n,i+1,key);
}

int main(){
    int a[]={1,2,5,4,5,6};
    int n=sizeof(a)/sizeof(int);
    int key;
    int i=0;
    cin >> key;
    cout << Firstoccurence(a,n,key) << endl;
    cout << FirstoccurenceIterator(a,n,i,key) << endl;
    return 0;
}