#pragma once
#include <iostream>
#include <string>

using namespace std;

class Humanoid {
	string race; //human, orc, elf, demon ect ect
	string name;
	string eyeColour;
	string hairColour;
	char gender;
	float weight;
	int age;
public:
	//creates the Humanoid object
	Humanoid();
	//create the Humanoid object passing multiple values
	Humanoid(string _race, string _name, string _eyeColour, string _hairColour, char _gender, float _weight, int _age);

	//sets variables into the Humanoid object
	void setRace(string r);
	void setName(string n);
	void setEyeColour(string ec);
	void setHairColour(string hc);
	void setGender(char g);
	void setWeight(float w);
	void setAge(int a);

	//gets the variables loaded into the Humanoid object
	string getRace();
	string getName();
	string getEyeColour();
	string getHairColour();
	char getGender();
	float getWeight();
	int getAge();

	//
	void display() const;
};
