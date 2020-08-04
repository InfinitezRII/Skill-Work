#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int x1,y1,z1,w1,l1,h1;
	int x2,y2,z2,w2,l2,h2;
	int ans1,ans2;
	cin >> x1 >> y1 >> z1 >> w1 >> l1 >> h1;
	cin >> x2 >> y2 >> z2 >> w2 >> l2 >> h2;
	
	ans1 = (w2-((x2+w2)-(x1+w1)))*(h2-((y2+h2)-(y1+h1)))*(l2-((z2+l2)-(z1+l1)));
	//ans2 = (w1-((x1+w1)-(x2+w2)))*(h1-((y1+h1)-(y2+h2)))*(l1-((z1+l1)-(z2+l2)));
	if(ans1 > 0 ){
		//if(ans1 > ans2)
			cout << ans1;
		//else
			//cout << ans2;
	}
	else
		cout << 0;
}
