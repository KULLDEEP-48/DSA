#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int Lastoccurence(int *a,int n,int i,int key){
    // base case.
    if(i==n){
        return -1;
    }

    // recurrence relation.
    if(a[i]==key){
        int bi=Lastoccurence(a,n,i+1,key);
        if(bi!=-1){
            // not a invaid value --> any valid value.
            return bi;
        }
        else{
            return i;
        }
    }

    int j = Lastoccurence(a,n,i+1,key);
    return j;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    int i=0;
    int key;
    cin >> key;
    cout << Lastoccurence(a,n,i,key);
    return 0;
}