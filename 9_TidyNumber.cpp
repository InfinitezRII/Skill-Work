#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	long long T,number,digit,count,cnt;
	cin >> T;
	long long arr[T];
	for(int i = 0 ; i < T ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < T ; i++){
		while(true){
			cnt = 0;
			number = arr[i];
			count = 0;
			while(number > 0){
	   			digit = number%10;
	    		number /= 10;
	    		count += 1;
			}
			//cout << count << endl;
			long long arrt[count];
			number = arr[i];
			count = 0;
			while(number > 0){
	   			digit = number%10;
	    		number /= 10;
	    		arrt[count] = digit;
	    		count++;
			}
			for(int j = 0 ; j < count-1 ; j++){
				//cout << arrt[j];
				if(arrt[j] < arrt[j+1]){
					arr[i] -= 1;
					cnt += 1;
				}			
			}
			cout << arr[i] << endl;
			if(cnt == 0){
				break;
			}
		}
		cout << "Case #";
		cout << i + 1;
		cout << ": ";
		cout << arr[i] << endl;;
		}
}
