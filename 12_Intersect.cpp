#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int i = 0,j = 0,k = 0,n,count = 0;
	cin >> n;
	int a[n],b[n];
	for(k = 0 ; k < n ; k++){
		cin >> a[k];
	}
	for(k = 0 ; k < n ; k++){
		cin >> b[k];
	}
	sort(a,a+n);
	sort(b,b+n);
	
	while(i < n and j < n){
		if(a[i] == b[j]){
			i++;
			j++;
			count++;
		}
		else{
			if(a[i] < b[j]){
				i++;
			}
			else{
				j++;
			}
		}
	}
	cout << count << endl;
}
