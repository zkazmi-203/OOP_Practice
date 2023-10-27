#include<iostream>
using namespace std;

class English{
	public:
		string Greetings(){
			cout<<"Hello there!";
		}
};

class Chinese{
	public:
		string Greetings(){
			cout<<"Ni Hao!!!";
		}
};

class Tourist : public English , public Chinese{
	public:	
		void Greetings(){
			English :: Greetings();
		}
};


int main(){
	Tourist T1;
	T1.Greetings();
}
