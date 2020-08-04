#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int num,someSwap,fst,snd,Swap;
	string x;
	char tmp;
	cin >> num;
	string ans[num];
	for(int i = 0 ; i < num ; i++){
		cin >> x;
		cin >> someSwap;
		for(int j = 0 ; j < someSwap ; j++){
			cin >> fst >> snd;
			Swap = ((snd - (fst-1))/2);
			for(int k = 0 ; k < Swap ; k++){
				tmp = x[fst-1+k];
				x[fst-1+k] = x[snd-1-k];
				x[snd-1-k] = tmp;
			}	
		}
		ans[i] = x;
	}
	for(int i = 0 ; i < num ; i++){
		cout << ans[i] << endl;
	}
}



