#include<bits/stdc++.h>
using namespace std;

void replacepi(char *x,int i){
    // base case
    if(x[i]=='\0' or x[i+1]=='\0')
    return;

    // recurrence relation
    if(x[i] =='p' and x[i+1]=='i'){
        // when array starts with pi.
        // creating sapce by moving characters ahead by 2 not 4 bcz spacesa are already of PI
        int j=i+2;
        while(x[j]!='\0'){
            j++;
        }
        while(j>=i+2){
            // moving ahead.
            x[j+2]=x[j];
            j--;
        }
        // replacing pi with 3.14
        x[i]='3';
        x[i+1]='.';
        x[i+2]='1';
        x[i+3]='4';
        // check for other pi
        replacepi(x,i+4);
    }
    else{
        // if current one is not pi.
        replacepi(x,i+1);
    }
}
int main(){
char x[100];
cin >> x;
int i=0;
cout << "array before replace pi: " << x <<  endl;
replacepi(x,i);
    cout << "array after replacing pi: "<< x << endl;

}