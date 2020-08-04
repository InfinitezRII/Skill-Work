#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int num,cmp = 0,xl = 0,yl = 0,start;
	string x,y,a,b,ans,test1,test2;
	cin >> num;
	string lstans[num];
	for(int k = 0 ; k < num ; k++){
		cin >> a;
		cin >> b;
		
		if(a.length() >= b.length()){
			x = a;
			y = b;	
		}
		else{
			x = b;
			y = a;
		}
		
		xl = x.length();
		yl = y.length();
		//char arr[xl+yl];
		
		for(int i = 0 ; i < xl+yl ; i++){
			test1[i] = 'X';
			test2[i] = 'X';
		}
		
		
		for(int i = 0 ; i < xl ; i++){
			test1[i] = x[i];	
		}
		for(int i = 0 ; i < yl ; i++){
			test2[i] = y[i];	
		}
		
		for(int i = 0 ; i < xl+yl ; i++){
			if(test1[i] == y[0] or test1[i] == 'X'){
				cmp = 1;
				for(int j = 1 ; j < yl ; j++){
					if(y[j] == test1[i+j] or test1[i+j] == 'X'){
						cmp++;
					}
				}
			}
			if(cmp++ == yl){
				start = i;
				break;
			}
		}
		
		//if(start = 0){
		//	for(int i = 0 ; i < yl ; i++){
		//		test1[start+i] = y[i];
		//	}
		//}
		//else{
			for(int i = 0 ; i < yl ; i++){
				test1[start+i] = y[i];
			}
		//}
		
		for(int i = 0 ; i < yl+xl ; i++){
			if(test2[i] == x[0] or test2[i] == 'X'){
				cmp = 1;
				for(int j = 1 ; j < xl ; j++){
					if(x[j] == test2[i+j] or test2[i+j] == 'X'){
						cmp++;
					}
				}
			}
			if(cmp++ == xl){
				start = i;
				break;
			}
		}
		//if(start = 0){
		//	for(int i = 0 ; i < xl ; i++){
		//		test2[start+i] = x[i];
		//	}
		//}
		//else{
			for(int i = 0 ; i < xl ; i++){
				test2[start+i] = x[i];
			}
		//}	
		
		
		
//		if(cmp != 0 && cmp < yl && cmp != yl){
//			ans = x;
//			for(int i = cmp ; i < yl ; i++){
//				ans += y[i];
//			}
//			lstans[k] = ans;
//			cmp = 0;
//		}
//		else if(cmp == 0){
//			ans = x + y;
//			lstans[k] = ans;
//		}
//		else if(cmp == yl){
//			lstans[k] = x;
//		}
//		if(cmp == 0){
//			for(int i = 0 ; i << yl ; i++)
//		}
	//cout << cmp;
	//cout << yl;
	for(int i = 0 ; i < xl+yl ; i++){
		cout << test1[i];
		}
	cout << endl;
	for(int i = 0 ; i < xl+yl ; i++){
		cout << test2[i];
		}
	cout << endl;
	cout << endl;
	}
	
//	for(int i = 0 ; i < num ; i++){
//		cout << lstans[i] << endl;
//	}
}
