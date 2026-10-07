#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

// void subarray(int a[],int n){
//     int i,j,k;
//     for(i=0;i<n;i++){
//         for(j=i;j<n;j++){
//             for(k=i;k<=j;k++){
//                 cout << a[k] << " ";
//             }
//             cout << endl; 
//         }
//     }
// }

void maxsubarray1(int a[], int n){
    int i,j,k;
    int mi,mj;

    int maxsum=INT_MIN;
     for(i=0;i<n;i++){
        for(j=i;j<n;j++){
             int sum=0;
            for(k=i;k<=j;k++){
                sum +=a[k];
            }
           if(maxsum<sum){
            maxsum=sum;
            mi=i;
            mj=j;
           }
        }
    }
    cout << "subarray with max sum" << endl;
    for(i=mi;i<=mj;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "maximum sum of subarray:" << maxsum << endl;
}

void maxsubarray2(int a[], int n){
    int i,j,k;
    int csum[1000]={0};

    //precomputaion of csum.
    for(i=1;i<n;i++){
        csum[i] += csum[i-1] + a[i];
    }
    int mi,mj;
    int maxsum=INT_MIN;
     for(i=0;i<n;i++){
        for(j=i;j<n;j++){
             int sum=0;
             sum = csum[j] - csum[i-1];
            // for(k=i;k<=j;k++){
            //     sum +=a[k];
            // }
           if(maxsum<sum){
            maxsum=sum;
            mi=i;
            mj=j;
           }
        }
    }
    cout << "subarray with max sum" << endl;
    for(i=mi;i<=mj;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "maximum sum of subarray-2:" << maxsum << endl;
}


int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(int);
    // subarray(a,n);
    maxsubarray1(a,n);
    maxsubarray2(a,n);
    return 0;
}