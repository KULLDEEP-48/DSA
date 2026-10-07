#include<stdio.h>
#include<iostream>
// #include<algorithm>
#include<string>
using namespace std;

int main(){
    //initialising method 1.
    string s= "hello";
    cout << s << endl;
    
    //method 2.
    for(int i=0;i<s.length();i++){
        cout << s[i]  << " ";
    }
    cout << endl;

    //updatation.
    s= "updated string";
    cout << s << endl;

    // concatination of string.
    string a="hello";
    string b="learning stage";
    string x = a + " " + b;
    cout << x << endl;

    // finding the index of a particular word in the stiring.
    s = "i am currently at learning stage" ;
    cout << s << endl;
    string word ="currently";
    int index = s.find(word);
    cout << "currently is present at:" << index << endl;

    // removal of a word from the string.
    s.erase(index,word.length() + 1);
    cout << s << endl; 
    return 0;
}