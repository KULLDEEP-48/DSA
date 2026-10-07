#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void merge(int *a,int *b,int *c,int s,int e){
    int mid = (s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    // merging two arrays by comparing their values.
    while(i<=mid and j<=e){
        if(b[i] <=c[j]){
            a[k++] = b[i++];
        }
        else {
            a[k++]=c[j++];
        }
    }

        while(i<=mid){
            a[k++]=b[i++];
        }

        while(j<=e){
            a[k++] = c[j++];
        }
}
void mergeSort(int *a,int s,int e){
    // base case.
    if(s>=e){
        return;
    }
    // recurrence relation.
    int b[100],c[100];
    int mid=(s+e)/2;
    // 1.Divide
    for(int i=s;i<=mid;i++){
        b[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=a[i];
    }
    // 2.Sort
    mergeSort(b,s,mid);
    mergeSort(c,mid+1,e);
    // 3.Merge
    merge(a,b,c,s,e);
   }
int main(){
    int a[]={9,0,6,7,19,69};
    int n = sizeof(a)/sizeof(int);
    int s=0,e=n-1;
    cout << "Before sorting:" << endl;
    for(int i=0;i<n;i++){
    cout << a[i] << " "; 
   }
   cout << endl;
    mergeSort(a,s,e);

    cout << "after sorting:" << endl;

    for(int i=0;i<n;i++){
    cout << a[i] << " "; 
   }
   cout << endl;
    return 0;
}