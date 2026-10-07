#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    char a[1000];
    char largest[1000];
    int largest_len=0;
     int n;
     cin >> n;
     cin.get();
     for(int i=0;i<n;i++){
        cin.getline(a,1000);
        if(strlen(a)>largest_len){
            largest_len=strlen(a);
            strcpy(largest,a);
        }
     }

     cout << largest << endl;
     cout << "largest length is: " << largest_len << endl;
    return 0;
}