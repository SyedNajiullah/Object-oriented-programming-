#include "AllRounder.h"
AllRounder::AllRounder() : Bowler(), Batsman()
{
	numberOfCatches = 0;
}
AllRounder::~AllRounder()
{
	numberOfCatches = 0;
}
// Parmeterze
AllRounder::AllRounder(int _numberOfCatches, float _battingAverage, char _batsmanHandPeference, float _bowlingAverage, char _bowlerHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper) : Batsman(_battingAverage, _batsmanHandPeference, _name, _runs, _wickets, _isWicketKeeper), Bowler(_battingAverage, _batsmanHandPeference, _name, _runs, _wickets, _isWicketKeeper), Player( _name, _runs, _wickets, _isWicketKeeper){
	numberOfCatches = _numberOfCatches;
}
// SETTERS
void AllRounder::setNumberOfCatches(int _numberOfCatches){
	numberOfCatches = _numberOfCatches;
}
// GETTERS
int AllRounder::getNumberOfCatches() const{
	return numberOfCatches;
}
// Display
void AllRounder::display() const {
	std::cout << "Name : " << name << std::endl;
	std::cout << "Runs :" << runs << std::endl;
	std::cout << "Number of Wickets :" << wickets << std::endl;
	if (isWicketKeeper){
		std::cout << "Wicket keeper : YES" << std::endl;
	}
	else{
		std::cout << "Wicket keeper : NO" << std::endl;
	}
	std::cout << "Bowling average :" << bowlingAverage << std::endl;
	std::cout << "Bowler hand preference :" << bowlerHandPeference << std::endl;
	std::cout << "Batting average : " << battingAverage << std::endl;
	std::cout << "Batsman hand preference : " << batsmanHandPeference << std::endl;
	std::cout << "Number of catches :" << numberOfCatches << std::endl;
}