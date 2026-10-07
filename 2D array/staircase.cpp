#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void staircasesearch(int a[][4],int n,int m,int key){
    int i=0,j=m-1;
    bool isKeypresent = false;
    while(i<n and j>=0){
        if(a[i][j]==key){
            cout << "key found at:" << i << "," << j ;
            isKeypresent=true;
            break;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(isKeypresent==false){
        cout << "key not found" << endl;
    }
}

int main(){

    int a[4][4]={
        {1,4,8,10},
        {2,5,9,15},
        {6,16,18,20},
        {11,17,21,25}
    };
    int n=4,m=4;
    int key;
    cin >> key;
    staircasesearch(a,n,m,key);
    return 0;
}