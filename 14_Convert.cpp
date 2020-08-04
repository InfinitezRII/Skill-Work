#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

int main(){
	string x;
	getline(cin,x);
	int ans[12],bitf[4],bitb[4],bits[4];
	int bit[8] = {0,0,0,0,0,0,0,0};
	for(int i = 0 ; i < x.length() ; i++){	
		int y = int(x[i]);
		for(int j = 7 ; j >= 0 ; j--){
			bit[j] = y%2;
			y = y/2;
		}
		for(int j = 0 ; j < 8 ; j++){
			ans[j] = bit[j];
			if(j < 4){
				bitf[j] = bit[j];
			}
			else{
				bitb[j-4] = bit[j];
			}
		}
		for(int j = 0 ; j < 4 ; j++){
			bits[j] = bitf[j]+bitb[j];	
		}
	}
}
