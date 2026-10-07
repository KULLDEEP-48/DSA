#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,3,5,7,8,100};
    int n = sizeof(a)/sizeof(int);

    int key;
    cin >> key;
    bool present = binary_search(a,a+n,key);
    if(present==true){
        cout << "key found" << endl;
    }
    else{
        cout << "key not found" << endl;
    }
    return 0;
}