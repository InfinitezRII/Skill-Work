#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int temp,a,b,len;
	string str;
	cin >> a;
	for(int i = 0 ; i < a ; i++){
		temp = 0;
		cin >> b;
		cin >> str;
		len = str.length();
		for(int j = 0 ; j <= len-1 ; j++){
			int x = str[j] - 48;
			temp =  temp + (x*pow(b,len-(j+1)));
		}
		cout << temp << endl;
	}
}
