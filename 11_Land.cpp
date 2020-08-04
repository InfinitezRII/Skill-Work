#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x,y,x1,y1,x2,y2,s1,s2,s3,s4;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	
	s1 = (x-x1)*(y-y2);
	s2 = (x-x2)*(y-y1);
	s3 = x*(y-(y1+y2));
	s4 = y*(x-(x1+x2));
	
	if(s1 >= s2 and s1 >= s3 and s1 >= s4){
		cout << s1;
	}
	else if(s2 >= s1 and s2 >= s3 and s1 >= s4){
		cout << s2;
	}
	else if(s3 >= s2 and s3 >= s1 and s3 >= s4){
		cout << s3;
	}
	else if(s4 >= s2 and s4 >= s3 and s4 >= s1){
		cout << s4;
	}

}
