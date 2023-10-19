#include<iostream>
using namespace std;
/* Multilevel Inheritance */
/* Table:
				Public Derivation			Private Derivation 				Protected Derivation
Private			Private						Private							Private
Protected		Protected					Private							Protected
Public			Public						Private							Protected
*/

class grandFather{
	string hairColor;
	string eyesColor;
	int gMoney;
	public:
		void setHair(string hairCol){
			hairColor = hairCol;
		}
		
		string getHair(){
			return hairColor;

		}
		
		void setEyesColor(string eyesCol){
			eyesColor = eyesCol;
		}
		
		string getEyesColor(){
			return eyesColor;
		}
		
		int getMoney(){
			int gMoney = 20000;
			return gMoney;
		}
				
};

class Father : public grandFather{
	string fatherHair;
	string fatherEyesColor;
	int fMoney;
	public:
		void setFatherEyesColor(string fEyesColor){
			fatherEyesColor = fEyesColor;
		}
		
		string getFatherEyesColor(){
			return fatherEyesColor;
		}
		
		
		string getFatherHair(){
			fatherHair = getHair();
			return fatherHair;
		}
		
		int getFatherMoney(){
			int fatherMoney;
			int fMoney = 30000;
			fatherMoney = getMoney() + fMoney;
			return fatherMoney;
		}
		
	
	
	
};


class Child : public Father{
	int childMoney;
	string childEyes;
	string childHair;
	public:
		
		string getChildHair(){
			childHair =  getFatherHair(); 
			return childHair;
		}
		
		
		string getChildEyesColor(){
			childEyes = getFatherEyesColor();
			return childEyes;
		}
		
		int getChildMoney(){
			childMoney = 10000;
			int totalChildMoney = getFatherMoney() + childMoney;
			return totalChildMoney;
			
		}
};

int main(){
	grandFather G1;
	G1.setHair("Brown");
	G1.setEyesColor("Blue");
	cout<<"Eyes Color are : "<<G1.getEyesColor()<<endl;
	cout<<"Hair Color are : "<<G1.getHair()<<endl;
	cout<<"GrandFather has "<<G1.getMoney()<<endl;
	
	Father F1;
	F1.setHair(G1.getHair());
	F1.setFatherEyesColor("Hazel");
	cout<<"Father hair is "<<F1.getFatherHair()<<endl;
	cout<<"Father eyes color is "<<F1.getFatherEyesColor()<<endl;
	cout<<"Father has "<<F1.getFatherMoney()<<endl;
	
	Child C1;
	C1.setHair(F1.getFatherHair());
	C1.setFatherEyesColor(F1.getFatherEyesColor());
	cout<<"Child Hair is : "<<C1.getChildHair()<<endl;
	cout<<"Child eyes color is : "<<C1.getChildEyesColor()<<endl;
	cout<<"Child Hair is : "<<C1.getChildMoney()<<endl;
	
}
