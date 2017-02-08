#include <iostream>
#include <string>
#include "Humanoid.h"

using namespace std;

int main() {

	//create and display default constructor
	Humanoid de;
	de.display();


	//creates a Humanoidoid object name "me" and sets the characteristics/variables
	Humanoid me;
	me.setRace("Human");
	me.setName("Jesse");
	me.setEyeColour("Hazel");
	me.setHairColour("Brown");
	me.setGender('M');
	me.setWeight(170);
	me.setAge(23);
	//display's the set object
	me.display();


	//create object with passed vaules then display
	Humanoid test("ogre", "shrek", "green", "none", 'M', 270, 100);
	test.display();

	//ends main
	return 0;
}