#include<iostream>
using namespace std;

class Level1{
	int level1Data;
	public:
		Level1(int data){
			level1Data = data;
			cout<<"Level 1 Constructor is Hereeeeee!!!!!!!"<<endl;
		}
		
		int displayLevel1(){
			cout<<"Data of Level 1 is: "<<level1Data<<endl;
		}
};

class Level2{
	int level2Data;
	public:
		Level2(int data){
			level2Data = data;
			cout<<"Level 2 Constructor is Hereeeeee!!!!!!!"<<endl;
		}
		
		int displayLevel2(){
			cout<<"Data of Level 2 is: "<<level2Data<<endl;
		}
};

class BossLevel: public Level1 , public Level2{
	int data;
	public:
		BossLevel(int a,int b,int c): Level1(a),Level2(b){
			data = c;
			cout<<"!!!!!!!!Boss Level Constructor is Hereeeeee!!!!!!!"<<endl;
		}
		
		int displayBossLevel(){
			cout<<"Data of Boss Level is: "<<data<<endl;
		}
};


int main(){
	
	BossLevel B1(2,4,8);
	B1.displayLevel1();
	B1.displayLevel2();
	B1.displayBossLevel();
	
	return 0;
}
