#pragma once
#include "Player.h"
class Bowler : virtual public Player
{
protected:
	float bowlingAverage;
	char bowlerHandPeference;
public:
	Bowler();
	~Bowler();
	// Parameterize
	Bowler(float _bowlingAverage, char _bowlerHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper);
	// SETTERS
	void setBowlingAverage(float _blowlingAverage);
	void setBowlerHandPreference(char _bowlerHandPeference);
	// GETTERS
	float getBowlingAverage() const;
	char getBlowlerhandPreference() const;
	// DISPLAY
	void display() const;
};

