#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void readline(char a[],char delimiter){
    int i=0;
    char ch = cin.get();
    while(ch!=delimiter){
        a[i]=ch;
        i++;
        ch = cin.get();
    }
    a[i]= '\0';
}

int main(){
    char a[10];
    readline(a,'8');

    // inbuilt to take line input.
    // cin.getline(a,'\n');
    
    cout << a ;
    return 0;
}