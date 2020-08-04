#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int x,y,count = 0;
	cin >> x >> y;
	int arr1[x],arr2[y];
	for(int i = 0 ; i < x ; i++){
		cin >> arr1[i];
	}
	for(int i = 0 ; i < y ; i++){
		cin >> arr2[i];
	}
	sort(arr1,arr1+x);
	sort(arr2,arr2+y);
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){
			if(arr1[i] >= arr2[j] and arr2[j] != 0){
				arr2[j] = 0;
				count++;
				break;
			}
		}
	}
	cout << count;
}
