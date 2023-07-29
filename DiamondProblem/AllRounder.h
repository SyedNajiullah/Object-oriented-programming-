#pragma once
#include "Bowler.h"
#include"Batsman.h"
class AllRounder :public Bowler, public Batsman
{
private:
	int numberOfCatches;
public:
	AllRounder();
	~AllRounder();
	// Parmeterze
	AllRounder(int _numberOfCatches, float _battingAverage, char _batsmanHandPeference, float _bowlingAverage, char _bowlerHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper);
	// SETTERS
	void setNumberOfCatches(int _numberOfCatches);
	// GETTERS
	int getNumberOfCatches() const;
	// DISPLAY
	void display() const;
};

