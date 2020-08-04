#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int a,b;
	cin >> a;
	for(int i = 0 ; i < a ; i++){
		cin >> b;
		int arr1[b];
		int arr2[b];
		int arr3[b];
		for(int j = 0 ; j < b ; j++){
			cin >> arr1[j];
		}
		for(int j = 0 ; j < b ; j++){
			cin >> arr2[j];
		}
		int k = 1;
		while(1){
			int test = 0;
			for(int j = 0 ; j < b ; j++){
				if((k*arr1[j])%arr2[j] != 0){
					k++;
					test++;
					break;
				}
			}
			if(test == 0){
				break;
			}
		}
		for(int j = 0 ; j < b ; j++){
			arr3[j] = (k*arr1[j])/arr2[j];
		}
		cout << k << endl;
		for(int j = 0 ; j < b ; j++){
			cout << arr3[j] << " ";
		}
		cout << endl;
	}
}
