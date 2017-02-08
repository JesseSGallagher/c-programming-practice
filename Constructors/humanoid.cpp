#include "Humanoid.h"
#include <iostream>
#include <string>

using namespace std;

//creates a Humanoid with unknown characteristics
Humanoid::Humanoid() {
	cout << "--> creating humanoid object:" << endl;
	race = "unknown";
	name = "unknown";
	eyeColour = "unknown";
	hairColour = "unknown";
	gender = 'U';
	weight = 0.0;
	age = 0;
}
Humanoid::Humanoid(string _race, string _name, string _eyeColour, string _hairColour, char _gender, float _weight, int _age) {
	cout << "--> object with passed values being created: " << endl;
	race = _race;
	name = _name;
	eyeColour = _eyeColour;
	hairColour = _hairColour;
	gender = _gender;
	weight = _weight;
	age = _age;
}
//passes the variables from main, and loads them into the Humanoid object
void Humanoid::setRace(string r) {
	race = r;
}
void Humanoid::setName(string n) {
	name = n;
}
void Humanoid::setEyeColour(string ec) {
	eyeColour = ec;
}
void Humanoid::setHairColour(string hc) {
	hairColour = hc;
}
void Humanoid::setGender(char g) {
	gender = g;
}
void Humanoid::setWeight(float w) {
	weight = w;
}
void Humanoid::setAge(int a) {
	age = a;
}
//calls back the variables to main to check what is set in the object, the variable type must come before function name
string Humanoid::getRace() {
	return race;
}
string Humanoid::getName() {
	return name;
}
string Humanoid::getEyeColour() {
	return eyeColour;
}
string Humanoid::getHairColour() {
	return hairColour;
}
char Humanoid::getGender() {
	return gender;
}
float Humanoid::getWeight() {
	return weight;
}
int Humanoid::getAge() {
	return age;
}
void  Humanoid::display() const {
	cout <<
		"Race: " << race << endl <<
		"Name: " << name << endl <<
		"Eye Colour: " << eyeColour << endl <<
		"Hair Colour: " << hairColour << endl <<
		"Gender: " << gender << endl <<
		"Weight: " << weight << endl <<
		"Age: " << age << endl;
	return;
}

Humanoid::~Humanoid()
{
	cout << "-->object being destroyed<--" << endl;
}
