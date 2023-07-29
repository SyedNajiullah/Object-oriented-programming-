#include "Batsman.h"
Batsman::Batsman()
{
	battingAverage = 0;
	batsmanHandPeference = '\0';
}
Batsman::~Batsman()
{
	battingAverage = 0;
	batsmanHandPeference = '\0';
}
// Parameterize
Batsman::Batsman(float _battingAverage, char _batsmanHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper) : Player(_name, _runs, _wickets, _isWicketKeeper){
	battingAverage = _battingAverage;
	batsmanHandPeference = _batsmanHandPeference;
}
// SETTERS
void Batsman::setBattingAverage(float _battingAverage){
	battingAverage = _battingAverage;
}
void Batsman::setBatsmanHandPeference(char _batsmanHandPeference){
	batsmanHandPeference = _batsmanHandPeference;
}
// GETTERS
float Batsman::getBattingAverage() const{
	return battingAverage;
}
char Batsman::getBatsmanHandPeference() const{
	return batsmanHandPeference;
}
// DISPLAY
void Batsman::display() const{
	std::cout << "Name : " << name << std::endl;
	std::cout << "Runs :" << runs << std::endl;
	std::cout << "Wickets :" << wickets << std::endl;
	if (isWicketKeeper){
		std::cout << "Wicket keeper : YES" << std::endl;
	}
	else{
		std::cout << "Wicket keeper : NO" << std::endl;
	}
	std::cout << "Batting average : " << battingAverage << std::endl;
	std::cout << "Batsman hand preference : " << batsmanHandPeference << std::endl;
}