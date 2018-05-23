/*
Project Description:

Create a base class of a character.You need 2 attributes, methods to access and update these attributes, 2 constructors,
and a printInfo() method that prints the attributes.For the update of the attributes, one must have verification
(for example, health cannot be a negative number).

Next, create 2 classes that inherit from the character class.  (for example, zombie and goblin).
Each class must have 2 additional attributes, methods to access and update these attributes, 2 constructors, and a
printInfo() method that prints the attributes.The print method should use the character base method.One of the constructors
should use the base class constructor to set these values as well.

Next, you need to have an additional print method using polymorphism.The second print method would only print a subset
of the attributes.Use a boolean value as the parameter that determines which printInfo() method is called.

Finally, write a Main() program that creates instances of all 3 classes and calls both print methods.*/


#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "string"

using namespace std;

class Character
{
public:
	Character(); // default constructor
	Character(string baseName, int baseHealth); // my constructor
	string getName(); // declare a function called getName that returns a string
	int getHealth(); // declare a function called getHealth that returns an int
	void setName(string baseName); // declare a function called setname that returns nothing and takes a string as the parameter
	void setHealth(int baseHealth); // declare a function called setHealth that returns nothing and takes an int as the parameter
	void printInfo(); // declare a function called printInfo that returns nothing
protected:
	string name = "No Name"; // attribute of class Character called name, set default to "No Name"
	int health = 1; // attribute of class Character called health, set default to "1"
};


class Mage : public Character // Create a new class called Mage that uses Character as its parent
{
public:
	Mage(); // default constructor for child class called Mage
	Mage(string mageName, int mageHealth, int mageMana, string mageSpell); // My constructor for child class Mage, that accepts values to set all the attribute values when constructed
	int getMana(); // declare a function called getMana that returns an int
	string getSpell(); // declare a function called getMana that returns an string
	void setMana(int mageMana); // delcare a function called setMana that returns nothing and accepts an int as the parameter
	void setSpell(string mageSpell); // delcare a function called setSpell that returns nothing and accepts a string as the parameter
	void printInfo(); // delcare a function called printInfo that returns nothing
	void printInfo(bool print); // delcare a function called setMana that returns nothing and accepts a boolean as the parameter
private:
	int mana = 0; // attribute of class Mage called mana, set default to 0
	string spell = "No Spell"; // attribute of class Mage, set default to "No Spell"
};

class Warrior : public Character // Create a new class called Warrior that uses Character as its parent
{
public:
	Warrior(); // default constructor for child class called Warrior
	Warrior(string warriorName, int warriorHealth, int warriorStamina, string warriorWeapon); // My constructor for child class Warrior, that accepts values to set all the attribute values when constructed
	int getStamina(); // declare a function called getStamina that returns an int
	string getWeapon(); // declare a function called getWeapon that returns a string
	void setStamina(int warriorWeapon); // declare a function called setStamina that returns nothing and accepts an int as the parameter
	void setWeapon(string warriorWeapon); // declare a function called setWeapon that returns nothing and accepts a string as the parameter
	void printInfo(); // declare a function called printInfo that returns nothing
	void printInfo(bool print); // declare a function called printInfo that returns nothing and accepts a boolean as the parameter
private:
	int stamina = 0; // attribute of class Warrior, set default to 0
	string weapon = "No Weapon"; // attribute of class Warrior, set default to "No Weapon"
};

#endif
