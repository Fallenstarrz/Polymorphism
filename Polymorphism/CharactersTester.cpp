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



// An online repository for this program can be found at https://github.com/Fallenstarrz/OOP-Polymorphism
// Christopher Koon
// University of Advancing Technology
// CSC 275 - C++ Programming II

#include "stdafx.h"
#include "iostream"
#include "string"
#include "Characters.h"

using namespace std;

void main()
{
	string pause;
	// We do not comment endl; because we assume everyone should know what it means. We just use it to make the console output more readable.

	Character basePlayer; // Constructs a Character
	basePlayer.printInfo(); // Default Print Info that displays all attributes of basePlayer
	cout << endl;
	Character basePlayerWithAttributes = Character("Base", 100); // Constructs an object called basePlayerWithAttributes and sets its attributes to the passed in values.
	basePlayerWithAttributes.printInfo(); // Default print info that displays all attributes of basePlayerWithAttributes

	cout << endl;
	Mage baseMage; // Constructs a Mage using Character as Parent
	baseMage.printInfo(); // Default Print Info from Mage
	cout << endl;
	Mage baseMageWithAttributes = Mage("Jim the Mage", 115, 150, "Fireball"); // Constructs an object called baseMageWithAttributes and sets its attributes to the passed in values.
	baseMageWithAttributes.printInfo(); // Default print info that displays all attributes of baseMageWithAttributes

	cout << endl;
	Warrior baseWarrior; // Constructs a Warrior using Character as Parent
	baseWarrior.printInfo(); // Default Print Info from Warrior
	cout << endl;
	Warrior baseWarriorWithAttributes = Warrior("John the Warrior", 125, 75, "Battle Axe"); // Constructs an object called baseWarriorWithAttributes and sets its attributes to the passed in values.
	baseWarriorWithAttributes.printInfo(); // Default Print Info that displays all attributes of baseWarriorWithAttributes
	cout << endl;

	Mage staticPolyMage = Mage("Jack the Mage", 110, 150, "Blizzard"); // Constructs an object called staticPolyMage and sets its attributes to the passed in values.
	staticPolyMage.printInfo(false); // New Print Info function that accepts a boolean value to determine if we do what is inside the function
	cout << endl;
	Warrior staticPolyWarrior = Warrior("Jill the Warrior", 150, 50, "Great Sword"); // Constructs an object called staticPolyWarrior and sets its attributes to the passed in values.
	staticPolyWarrior.printInfo(true); // New Print Info function that accepts a boolean value to determine if we do what is inside the function
	cout << endl;

	cin >> pause; // This will pause the system, so we can view our output. We elected not to use system ("pause"), but that is another option we could have used.
}

