#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void Update(int *a){
    *a +=1;
    cout << *a << endl;
}

int main(){
   int x=10;
   Update(&x);
   cout << x << endl;
    return 0;
}