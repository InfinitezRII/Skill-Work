#include<stdio.h>
#include<iostream>
#include <algorithm>

using namespace std;

int main(){
	int x,y,z;
	cin >> x >> y >> z;
	int arr[x][y];
	int arrt[x+2][y+2];
	int mask1[z+1];
	for(int i = 0 ; i < x+2 ; i++){
		for(int j = 0 ; j < y+2 ; j++){
			arrt[i][j] = 0;
		}
	}
	
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){
			cin >> arr[i][j];
			arrt[i+1][j+1] = arr[i][j];
		}
	}
	
	if(z == 4){
		for(int i = 0 ; i < x ; i++){
			for(int j = 0 ; j < y ; j++){
				mask1[0] = arrt[i][j+1];
				mask1[1] = arrt[i+1][j];
				mask1[2] = arrt[i+1][j+1];
				mask1[3] = arrt[i+1][j+2];
				mask1[4] = arrt[i+2][j+1];
				std::sort(mask1, mask1+z+1);
//				for(int k = 0 ; k < z+1 ; k++){
//					std::cout << mask1[k] << " " << endl;
//				}
				arr[i][j] = mask1[2];
			}
		}
	}
	else if(z == 8){
		for(int i = 0 ; i < x ; i++){
			for(int j = 0 ; j < y ; j++){
				mask1[0] = arrt[i][j];
				mask1[1] = arrt[i][j+1];
				mask1[2] = arrt[i][j+2];
				mask1[3] = arrt[i+1][j];
				mask1[4] = arrt[i+1][j+1];
				mask1[5] = arrt[i+1][j+2];
				mask1[6] = arrt[i+2][j];
				mask1[7] = arrt[i+2][j+1];
				mask1[8] = arrt[i+2][j+2];
				std::sort(mask1, mask1+z+1);
//				for(int k = 0 ; k < z+1 ; k++){
//					std::cout << mask1[k] << " " << endl;
//				}
				arr[i][j] = mask1[4];
			}
		}
	}
	
	for(int i = 0 ; i < x ; i++){
		for(int j = 0 ; j < y ; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	
}
