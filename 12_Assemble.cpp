#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,e,count = 0,sum = 0;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	cin >> e;
	sort(a,a+n);
	for(int i = n-1 ; i >= 0 ; i--){
		sum += a[i];
		count++;
		if(sum > e){
			cout << count;
			break;
		} 
	}
	if(sum <= e){
		cout << "YOU DIE";
	}	
}
//[-P][PP][-P][PP][PP][PP][-P][PP][PP][-P]
//[-P][PP][-P][PP][PP][PP][-P][PP][PP][--]
