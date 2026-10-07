#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    pair<int,int> p(50,100); // 1.
    // initialisation-
    // 2.
    // p.first = 10;
    // p.second = 20;
    // 3.
    // p = make_pair(10,20);

    // cout << p.first  << endl;
    // cout << p.second << endl;

    pair< string , pair< float , int > > gadi; // to make multiple (3) pair at a time.
    gadi.first = "AUDI";
    gadi.second.first = 6.9;
    gadi.second.second = 12;
    
    cout << gadi.first << endl;
    cout << gadi.second.first << endl;
    cout << gadi.second.second << endl;
    return 0;
}