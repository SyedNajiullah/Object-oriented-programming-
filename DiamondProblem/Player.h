#pragma once
#include<iostream>
#include<string>
class Player
{
protected:
	std::string name;
	int runs;
	int wickets;
	bool isWicketKeeper;
public:
	Player();
	~Player();
	// PARAMETERIZE
	Player(std::string _name, int _runs, int _wickets, bool _isWicketKeeper);
	// SETTERS
	void setName(std::string _name);
	void setRuns(int _runs);
	void setWickets(int _wickets);
	void setIsWicketKeeper(bool _isWicketKeeper);
	// GETTERS
	std::string getName() const;
	int getRuns() const;
	int getWickets() const;
	bool getIsWicketKeeper() const;
	// DISPLAY
	void display() const;

};
