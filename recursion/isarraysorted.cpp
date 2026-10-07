#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

// bool isSorted(int *a,int n){
//     // base case.
//     if(n==0 or n==1){
//         return true;
//     }

//     // recurrence relation.
//     bool issmallerSorted=isSorted(a+1,n-1);
//     if(issmallerSorted and a[0]<=a[1]){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

bool isSorted(int *a,int n,int i){
    // base case.
    if(i==n-1){ 
    //i at the last index of the array.
    return true;
    }
    
    // recurrence relation.
    bool issmallerSorted = isSorted(a,n,i+1);
    if(issmallerSorted and a[i]<=a[i+1]){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a[]={1,4,6,8,9,10};
    int n= sizeof(a)/sizeof(int);
    int i=0;
    if(isSorted(a,n,i)==true){
        cout << "sorted" << endl;
    }
    else{
        cout << "unsorted" << endl;
    }
    return 0;
}