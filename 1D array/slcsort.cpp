#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
int i,j,n=7;
int arr[]={5,3,4,1,2,7,0};

for (i=0;i<n;i++){
    cout << arr[i] << " " ;
}
cout << endl;

for(i=0;i<n-1;i++){
    for(j=i+1;j<=n-1;j++){
        if(arr[j]<arr[i]){
            swap(arr[j],arr[i]);
        }
    }
}

for(i=0;i<n;i++){
    cout << arr[i] << " ";
}

return 0;
}

