#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={10,20,40,40,40,50,100};
    int n= sizeof(a)/sizeof(int);
    int key;
    cin >> key;

    //lower bound gives the 1st occurence of the key.
    int *ans = lower_bound(a,a+n,key);  // >=key. 

    cout << "value: " << *ans << endl;
    cout << "first occurence: " << ans -a << endl;


    //upper bound gives the last occurence of the key.
    int *x = upper_bound(a,a+n,key);  // >key. 
    cout << "value: " << *x << endl;
    cout << "last occurence: " << x - a -1 << endl; // gives the index 1 before the upper bound.


    // total occurences is ub-lb.
    cout << "number of occurences of " << key  << " is: "<< x - ans << endl;
    return 0;
}