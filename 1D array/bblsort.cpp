#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

// bubble sort

int main(){
  int i,j,n=5;
  int arr[]={5,4,3,2,1};
 
    for(i=0;i<n;i++){
      cout << arr[i] << " ";
    }
    cout << endl;

  for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){ // fixes the greatest element at the last.
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
   
   for(i=0;i<n;i++){
      cout << arr[i] << " ";
    }
    return 0;
}