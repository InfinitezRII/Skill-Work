#include<stdio.h>
#include<iostream>
using namespace std;

int main () 
{
	int x,first = 0,second = 0,third = 0,fourth = 0,s1 = 0,s2 = 0,s3 = 0,s4 = 0,win = 0,lose = 0,lose1 = 0,lose2 = 0 ,last1 = 0,last2 = 0;
	cin >> x;
	int arr[4*x];
	for(int i = 0 ; i < 4*x ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < x ; i++){
		if(s1 < arr[i]){
			first = i;
			s1 = arr[i];
		}
	}
	for(int i = x ; i < x*2 ; i++){
		if(s2 < arr[i]){
			second = i;
			s2 = arr[i];
		}
	}
	for(int i = x*2 ; i < x*3 ; i++){
		if(s3 < arr[i]){
			third = i;
			s3 = arr[i];
		}
	}
	for(int i = x*3 ; i < x*4 ; i++){
		if(s4 < arr[i]){
			fourth = i;
			s4 = arr[i];
		}
	}
	
	if(s1 < s2){
		lose1 = first + 1;
		last1 = second;
	}
	else{
		lose1 = second + 1;
		last1 = first;
	}
	
	if(s3 < s4){
		lose2 = third + 1;
		last2 = fourth;
	}
	else{
		lose2 = fourth + 1;
		last2 = third;
	}
	
	if(arr[last1] < arr[last2]){
		win = last2 + 1;
		lose = last1 + 1;
	}
	else{
		win = last1 + 1;
		lose = last2 + 1;
	}
	//cout << win,lose,lose1,lose2;
	//cout << arr[first]<< endl;
	//cout << arr[second]<< endl;
	//cout << arr[third]<< endl;
	//cout << arr[fourth]<< endl;
	cout << win << " " << lose << " " << lose1 << " " << lose2;
}
