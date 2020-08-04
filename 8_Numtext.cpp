#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int T,a,b,c,d;
	string Fst,Snd,Trd,Fth,TrdFth;
	cin >> T;
	int arr[T];
	string ans[T];
	for(int i = 0 ; i < T ; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < T ; i++){
		a = arr[i]/1000;
		b = (arr[i]%1000)/100;
		c = ((arr[i]%1000)%100)/10;
		d = ((arr[i]%1000)%100)%10;
		
		if(a == 1){
			Fst = "one thousand ";
		}
		else if(a == 2){
			Fst = "two thousand ";
		}
		else if(a == 3){
			Fst = "three thousand ";
		}
		else if(a == 4){
			Fst = "four thousand ";
		}
		else if(a == 5){
			Fst = "five thousand ";
		}
		else if(a == 6){
			Fst = "six thousand ";
		}
		else if(a == 7){
			Fst = "seven thousand ";
		}
		else if(a == 8){
			Fst = "eight thousand ";
		}
		else if(a == 9){
			Fst = "nine thousand ";
		}
		else if(a == 10){
			Fst = "ten thousand ";
		}
		
		if(b == 1){
			Snd = "one hundred ";
		}
		else if(b == 2){
			Snd = "two hundred ";
		}
		else if(b == 3){
			Snd = "three hundred ";
		}
		else if(b == 4){
			Snd = "four hundred ";
		}
		else if(b == 5){
			Snd = "five hundred ";
		}
		else if(b == 6){
			Snd = "six hundred ";
		}
		else if(b == 7){
			Snd = "seven hundred ";
		}
		else if(b == 8){
			Snd = "eight hundred ";
		}
		else if(b == 9){
			Snd = "nine hundred ";
		}
		
		if(c == 1){
			if(d == 0){
				TrdFth = "ten";
			}
			else if(d == 1){
				TrdFth = "eleven";
			}
			else if(d == 2){
				TrdFth = "twelve";
			}
			else if(d == 3){
				TrdFth = "thirteen";
			}
			else if(d == 4){
				TrdFth = "fourteen";
			}
			else if(d == 5){
				TrdFth = "fifteen";
			}
			else if(d == 6){
				TrdFth = "sixteen";
			}
			else if(d == 7){
				TrdFth = "seventeen";
			}
			else if(d == 8){
				TrdFth = "eighteen";
			}
			else if(d == 9){
				TrdFth = "nineteen";
			}
		}
		else{
			if(c == 2){
				Trd = "twenty";
			}
			else if(c == 3){
				Trd = "thirty";
			}
			else if(c == 4){
				Trd = "fourty";
			}
			else if(c == 5){
				Trd = "fifty";
			}
			else if(c == 6){
				Trd = "sixty";
			}
			else if(c == 7){
				Trd = "seventy";
			}
			else if(c == 8){
				Trd = "eighty";
			}
			else if(c == 9){
				Trd = "ninety";
			}
			
			if(d == 1){
				Fth = "one";
			}
			else if(d == 2){
				Fth = "two";
			}
			else if(d == 3){
				Fth = "three";
			}
			else if(d == 4){
				Fth = "four";
			}
			else if(d == 5){
				Fth = "five";
			}
			else if(d == 6){
				Fth = "six";
			}
			else if(d == 7){
				Fth = "seven";
			}
			else if(d == 8){
				Fth = "eight";
			}
			else if(d == 9){
				Fth = "nine";
			}
		}
		
		if(a != 0){
			ans[i] += Fst;
		}
		if(b != 0){
			ans[i] += Snd;
		}
		if(c == 1){
			ans[i] += TrdFth;
		}
		if(c != 0 && c != 1){
			ans[i] += Trd;
		}
		if(c != 0 && d != 0 && c != 1){
			ans[i] += "-";
		}
		if(d != 0 && c != 1){
			ans[i] += Fth;
		}		
	}
	for(int i = 0 ; i < T ; i++){
	cout << ans[i] << endl;
	}	
}
