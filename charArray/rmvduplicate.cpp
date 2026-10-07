#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void removeduplicate(char a[1000]){
    int i=0;
    int j=i+1;
    while(j<(strlen(a))){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }
        j++;
    }
    // after removing every duplicate add  null at last to prevent further element to appear.
    a[i+1] = '\0'; 
    cout << a << endl;
}

 int main(){
    char a[1000];
    cin.getline(a,1000);
    removeduplicate(a);
    return 0;
 }