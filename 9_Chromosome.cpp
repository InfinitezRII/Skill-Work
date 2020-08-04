#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int num,cmp = 0;
	string x,y,a,b,ans;
	cin >> num;
	string lstans[num];
	for(int k = 0 ; k < num ; k++){
		cin >> a;
		cin >> b;
		if(a.length() > b.length()){
			x = a;
			y = b;
		}
		else{
			x = b;
			y = a;
		}
		
		for(int i = 0 ; i < x.length() ; i++){
			if(x[i] == y[0]){
				cmp++;
				for(int j = 1 ; j < y.length() ; j++){
					if(y[j] == x[i+j]){
						cmp++;
					}
					else{
						cmp = 0;
					}
				}
			}	
		}
		if(cmp == y.length()){
			lstans[k] == x;
		}
	}
}
