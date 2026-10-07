#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    char a[1000];
    cin.getline(a,1000);

    int freq[26] = {0};
    for(int i=0;a[i]!='\0';i++){
        char ch = a[i];
        int index = ch-'a';  // mapping index with characters. i.e. a-->0,b-->1 and so on.
        freq[index]++; // at each occurence inc. freq.12
    }

    // for(int i=0;i<26;i++){
    //     cout << freq[i] << " ";
    // }
    // cout << endl;

    for(int i=0;i<26;i++){
        if(freq[i]>0){
            char x = i + 'a';  // mapping character with index.
        cout << "character " << x << "-->" << freq[i] << endl;
        }
    }
    return 0;
}