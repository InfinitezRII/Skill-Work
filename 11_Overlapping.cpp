#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int X1,X2,Y1,Y2,W1,W2,H1,H2,OverlapX,OverlapY;
	cin >> X1 >> Y1 >> W1 >> H1;
	cin >> X2 >> Y2 >> W2 >> H2;
	
	OverlapX = max(0,(min(X1+ W1,X2 + W2) - max(X1,X2)));
	OverlapY = max(0,(min(Y1+ H1,Y2 + H2) - max(Y1,Y2)));
	
	cout << OverlapX*OverlapY;
	
}
