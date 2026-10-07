#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int LinearSearch(int *a,int n,int target,int low,int high){
    // base case.
    if(n==0){
        return -1;
    }
    // recurrence relation.
    if(low<=high){
        if(a[low]==target){
            return low;
        }
        else{
            return LinearSearch(a,n,target,low+1,high);
        }
    }
    return -1;
}
int main(){
    int a[]={2,4,5,6,8,9};
    int n=sizeof(a)/sizeof(int);
    int low=0;
    int high=n-1;
    int target;
    cin >> target;
    cout << "Target using linear search is at index:" << " ";
    cout  << LinearSearch(a,n,target,low,high) << endl;
    cout << "Kuldeep Singh" << endl;
    cout << "Roll No.: 2400321530111" << endl;
    return 0;
}