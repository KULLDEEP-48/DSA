#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void rotatestring(char a[],int n){
    int len=strlen(a);
    // extend the string ahead by n times.
    int i = len-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    
    // cout << a << endl; 

    // copyig the last n elements at the front.
    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;
    }

    // remove extra elements.
    a[len]='\0';

    // cout << a << endl; 
}

int main(){
    char a[1000];
    int n;
    cin >> n;
    cin.get();
    cin.getline(a,1000);
    cout << "before rotating:" << a << endl;
    rotatestring(a,n);
    cout << "after rotating:" << a << endl;
    return 0;
}