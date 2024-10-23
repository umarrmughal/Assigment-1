#include <iostream>;
using namespace std;

int main(){
	int C,F;
	
	cout<<"enter the temperature in C: ";
	cin>>C;
	
	F = C * (9/5) + 32;
	
	cout<< "The temperature in F -- "<<F<<" and in C -- "<<C;
}