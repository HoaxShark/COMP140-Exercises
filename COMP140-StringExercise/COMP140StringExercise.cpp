// COMP140StringExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "sstream"

class CharacterStats
{
public:
	CharacterStats()
	{
		Name = "Name";
		Age = 10;
		Health = 19;
		Score = 0;
	}
	~CharacterStats()
	{

	}
	void SetAge(int value) {
		Age = value;
	}
	int GetAge() {
		return Age;
	}
	void SetHealth(int value) {
		Health = value;
	}
	int GetHealth() {
		return Health;
	}
	void SetName(std::string value) {
		Name = value;
	}
	std::string GetName() {
		return Name;
	}
	void SetScore(int value) {
		Score = value;
	}
	int GetScore() {
		return Score;
	}
	std::ostringstream GetStringStream() {
		return stringStream;
	}
	void AppendString()

	//Everything public! Bad, make sure its private
	//and we use functions to access!
private:
	std::string Name;
	int Age;
	int Health;
	int Score;
	std::ostringstream stringStream;
};


int main()
{
	//Create an instance of CharacterStats
	CharacterStats stats;
	stats.SetAge(30);
	stats.SetName("Brian");
	stats.SetHealth(100);
	stats.SetScore(0);

	//Build a string to represent the character - to_string - http://www.cplusplus.com/reference/string/to_string/
	
	std::string characterString = "Name: " + stats.GetName() + " Age: " + std::to_string(stats.GetAge()) + " Health: " + std::to_string(stats.GetHealth()) + " Score: " + std::to_string(stats.GetScore());

	//Print out the string
	std::cout << "Character Details" << std::endl;
	std::cout << "=================" << std::endl;
	std::cout << characterString << std::endl;
    return 0;
}

