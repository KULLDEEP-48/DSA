#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){

int i,j,n=5;
int arr[5]={2,5,1,6,3};

for(i=0;i<n;i++){
    cout << arr[i] << " ";
}
cout << endl;

for(i=1;i<n;i++){
    int puc=arr[i];
    for(j=i-1;j>=0 and puc<arr[j];j--){
            arr[j+1]=arr[j];
    }
    arr[j+1]=puc;
}

for(i=0;i<n;i++){
    cout << arr[i] << " ";
}
    return 0;
}