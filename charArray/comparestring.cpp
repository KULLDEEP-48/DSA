#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool comparestring(char a[], char b[]){
    int i=0,j=0;
    int lena=strlen(a);
    int lenb=strlen(b);

    while(i < lena and j < lenb){
        if(a[i]!=b[j]){
            return false;
        }
        i++;
        j++;
    }
    if(a[i]!='\0' or b[j]!='\0' ){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    char a[1000];
    char b[2000];
    cin.getline(a,1000);
    cin.getline(b,2000);

    // if (strcmp(a,b)==0){
    //     cout << "match" << endl;
    // }
    // else{
    //     cout << "not a match" << endl;
    // }

    if(comparestring(a,b)==true){
        cout << "match" << endl;
    }
    else{
        cout << "not a match" << endl;
    }
    return 0;
}