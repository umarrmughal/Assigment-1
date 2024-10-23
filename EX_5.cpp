#include <iostream>;
using namespace std;

class Average{
	public:
	void calculateAverage(int a,int b, int c){
		float cal = (a+b+c)/3.0;
		cout<<"the average of "<<a<<","<<b<<","<<c<<" is "<<cal<<".";
	}
};

int main(){
	int num1 , num2 , num3;
	
	Average avg;
	
	cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

	
	avg.calculateAverage(num1,num2,num3);
	
}
