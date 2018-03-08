#include <iostream>
using namespace std;

int calc (int);
	
int main(){
	
	int num=0;
	
	cout << "Enter a number in cents: ";
	cin >> num;
	calc (num);

	return 0;
}

int calc (int cents){
	
	int quarters=0;
	int dimes=0;
	int nickles=0;
	int pennies=0;
	
	cout<<cents<<" cents; ";
	quarters=cents/25;
	cents=cents%25;
	if (cents!=0){
	dimes=cents/10;
	cents=cents%10;
	if (cents!=0){
		nickles=cents/5;
		cents=cents%5;
	} 
	}
	if (quarters!=0){cout<<quarters<< " quarters";}
	if (dimes!=0){cout<<", "<<dimes<<" dimes";}
	if (nickles!=0){cout<<", "<<nickles<<" nickles";}
	if (cents!=0){cout<<", "<<cents<<" pennies";}
	}
