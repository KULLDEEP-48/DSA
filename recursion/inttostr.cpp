#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

string a[]={"zero" , "one", "two", "three" , "four" , "five", "six", "seven", "eight", "nine"};

void IntegertoString(int n){
    // base case.
    if(n==0){
        return;
    }
    // recurrence relation.
    int digit = n%10;
    IntegertoString(n/10);
    cout << a[digit] << " ";
}
int main(){
    int n;
    cin >> n;
    IntegertoString(n);
    return 0;
}