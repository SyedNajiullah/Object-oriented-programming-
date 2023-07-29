#pragma once
#include "Player.h"
class Batsman : virtual public Player
{
protected:
	float battingAverage;
	char batsmanHandPeference;
public:
	Batsman();
	~Batsman();
	// Parameterize
	Batsman(float _battingAverage, char _batsmanHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper);
	// SETTERS
	void setBattingAverage(float _battingAverage);
	void setBatsmanHandPeference(char _batsmanHandPeference);
	// GETTERS
	float getBattingAverage() const;
	char getBatsmanHandPeference() const;
	// DISPLAY
	void display() const;
};

