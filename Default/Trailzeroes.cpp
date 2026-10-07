#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;


int TrailZeroes(int N){
    int D; // no. of 5 in N!.
    int ans=0;
    for(D=5;N/D>=1;D*=5){
        ans +=N/D;
    }
    return ans;
}

int main(){
  int N;
  cin >> N;
  cout <<  "no. of trailing zeroes:" << TrailZeroes(N);
  return 0;
}