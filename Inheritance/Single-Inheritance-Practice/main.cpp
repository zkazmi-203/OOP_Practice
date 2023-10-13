#include <iostream>
using namespace std;
/* Single Inheritance */

class Numbers{
	int number2;
	int number1;
	public:
		
		void setNumber1(int num1){
			number1 = num1;
		}
		
		void setNumber2(int num2){
			number2 = num2;
		}
		
		int getNumber1(){
			return number1;
		}
		
		int getNumber2(){
			return number2;
		}
	
};

class Sum : public Numbers{
	int result;
	public:
		void setResult(){
			result = getNumber1() + getNumber2();	
				}
			void  getResult(){
					cout<<"Results are : "<<result<<endl;
				
				}
				void displayInformation(){
		cout<<"Number 1 is : "<<getNumber1()<<" & "<<"Number 2 is : "<<getNumber2()<<endl;		
		}
				
				
			};



int main(int argc, char** argv) {
	
	Sum firstCase;
	firstCase.setNumber1(200);
	firstCase.setNumber2(320);
	firstCase.setResult();
	firstCase.displayInformation();
	firstCase.getResult();

	
	
	
	return 0;
}
