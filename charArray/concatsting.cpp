#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

//functioning of concat funciton.
// void concat(char a[],char b[]){
//     int i=strlen(a);
//     for(int j=0;j<=strlen(b);j++){
//     a[i]=b[j];
//     i++;
//     }
//     cout << a << endl;
// }

int main(){
    char a[1000];
    char b[2000];
    cin.getline(a,1000);
    cin.getline(b,2000);

    // concat(a,b);

    strcat(a,b);
    cout << a << endl;
    return 0;
}