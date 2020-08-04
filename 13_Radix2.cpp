#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int x,y,z;
	cin >> x;
	int arr1[x];
	int arr2[x];
	for(int i = 0 ; i < x ; i++){
		cin >> arr1[i];
		cin >> arr2[i];
	}
	for(int i = 0 ; i < x ; i++){
		z = arr1[i];
		y = 1;
		while(z >= arr2[i]){
			z = z/arr2[i];
			y++;
		}
		int arr3[y];
		for(int j = 0 ; j < y ; j++){
			arr3[j] = arr1[i]%arr2[i];
			arr1[i] = arr1[i]/arr2[i];
		}
		for(int j = y-1 ; j >= 0 ; j--){
			cout << arr3[j];
		}
		cout << endl;
	}
}
