#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int *a,int n,int s,int e,int target){

    // base case.
    if(s>e){
        return -1;
    }
    // recurrence relation.
        int mid=(s+e)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
           return BinarySearch(a,n,s,mid-1,target);
        }
        else if(a[mid]<target){
            return BinarySearch(a,n,mid+1,e,target);
        }
    return -1;
}
int main(){
    int a[]={1,2,3,4,5,8,69};
    int n=sizeof(a)/sizeof(int);
    int s=0;
    int e=n-1;
    int target;
    cin >> target;
    cout << "Target using binary search is at index:" << " ";
    cout  << BinarySearch(a,n,s,e,target) << endl;
    return 0;
}