#include <iostream>
#include <string>
using namespace std;


class Cat{
	public:
		
		int size=0;
		string breed= "house";
		
		void roar(){
			cout << "The " << size << " inch " << breed
			<< " cat says ... Roar!! " << endl;
		}
};

void newCat(Cat cougar){
	cougar.siee = 62;
	cougar.breed = "cougar";
	cougar.roar();
	
}

int main(){
	
	newCat();
	
	Cat tiger;
	Cat house;
	
	cout << "We have a cat" << endl;
	tiger.breed = "tiger";
	tiger.size = 45;
	tiger.roar();
	
	cout << "Cat 2 is created" << endl;
	house.breed = "house";
	house.size = 33;
	house.roar();
	
	return 0;
}