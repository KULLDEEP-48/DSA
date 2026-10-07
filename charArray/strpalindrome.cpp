#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

    bool strpal(char a[100]){
        int i=0,j=strlen(a)-1;
        while(i<j){
            if(a[i]!=a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
}

int main(){
    char a[100];
    cin.getline(a,100);
    if(strpal(a)==true){
        cout << "string is palondrome." << endl;
    }
    else {
        cout << "string is not palindrome." << endl;
    }
    return 0;
}