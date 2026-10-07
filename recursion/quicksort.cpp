#include<bits/stdc++.h>
using namespace std;
int Partition(int *a,int s,int e){
    int i=s-1;
    int j;
    for(j=s;j<e;j++){
        // creates the sector 1.
        if(a[j]<a[e]){
            i++;
            swap(a[j],a[i]);
        }
    }
    // doing nothing will create the sector 2.

    swap(a[i+1],a[j]);  // take the pivot to the middle.
    return i+1; // i+1 denotes the pivot.
}

void QuickSort(int *a,int s,int e){
    // base case.
    if(s>=e){
        return;
    }
    // recurrence relation.
    int index = Partition(a,s,e);
    QuickSort(a,s,index-1);
    QuickSort(a,index+1,e);
}
int main(){
    int a[]={0,6,8,4,9,56};
    int n = sizeof(a)/sizeof(int);
    int s=0,e=n-1;

    cout << "Before sorting:" << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "After sorting:" << endl;
    QuickSort(a,s,e);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}