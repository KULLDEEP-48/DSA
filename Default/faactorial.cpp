#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
	int i;
	int fact=1;
	for (i=n;n>=1;n--){
		fact *= n;
	}

	return fact;
}

int nCr(int n,int r){
	int a = factorial(n);
	int b = factorial(r);
	int c = factorial(n-r);
	
	int ans = a/(b*c);
	return ans;

}

int main(){
	int n,r;
	cin >> n >> r;
	cout << nCr(n,r);
	cout << endl;
}