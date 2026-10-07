#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a < b;
    }
    else{
        return a.length() > b.length();
    }
    // return a > b;
}

int main(){
    string s[100];
    int n;
    cin >> n;
    cin.get();

    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    // sort.
    sort(s, s+n, compare);
    for(int i=0;i<n;i++){
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}