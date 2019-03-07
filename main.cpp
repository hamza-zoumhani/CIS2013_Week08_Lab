#include <iostream>
#include <string>
#include "dice.cpp"

/* int main(){
	cout << "Create the dice" << endl;
	dice d6;
	dice d8;
	d8.setNumberOfSides(8);
	cout << "Roll the dice" << endl;
	cout << "	The dice rolls a " << d6.roll() << endl;
	cout << "	The dice rolls a " << d8.roll() << endl;
	
	return 0;
} */










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
	cougar.size = 62;
	cougar.breed = "cougar";
	cougar.roar();
	
}

int main(){
	Cat c;
	newCat(c);
	
	c.roar();
	
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
	
	cout << "Create the dice" << endl;
	dice d6;
	dice d8;
	d8.setNumberOfSides(8);
	cout << "Roll the dice" << endl;
	cout << "	The dice rolls a " << d6.roll() << endl;
	cout << "	The dice rolls a " << d8.roll() << endl;
	
	return 0;
}