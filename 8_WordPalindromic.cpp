#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int len,hlen;
	string word;
	cin >> word;
	len = word.length();
	hlen = word.length()/2;
	for(int i = 0 ; i <= len-1 ; i++){
		if(word[i] >= 65 && word[i] <= 92){
			word[i] = word[i]+32;
		}
	}
	for(int i = 0 ; i <= hlen ; i++){
		if(word[i] != word[--len]){
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";
	exit(0);
}
