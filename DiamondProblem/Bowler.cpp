#include "Bowler.h"
Bowler::Bowler()
{
	bowlingAverage = 0;
	bowlerHandPeference = '\0';
}
Bowler::~Bowler()
{
	bowlingAverage = 0;
	bowlerHandPeference = '\0';
}
// Parameterize
Bowler::Bowler(float _bowlingAverage, char _bowlerHandPeference, std::string _name, int _runs, int _wickets, bool _isWicketKeeper) : Player(_name, _runs, _wickets, _isWicketKeeper){
	bowlingAverage = _bowlingAverage;
	bowlerHandPeference = _bowlerHandPeference;
}
// SETTERS
void Bowler::setBowlingAverage(float _blowlingAverage){
	bowlingAverage = _blowlingAverage;
}
void Bowler::setBowlerHandPreference(char _bowlerHandPeference){
	bowlerHandPeference = _bowlerHandPeference;
}
// GETTERS
float Bowler::getBowlingAverage() const{
	return bowlingAverage;
}
char Bowler::getBlowlerhandPreference() const{
	return bowlerHandPeference;
}
// DISPLAY
void Bowler::display() const{
	std::cout << "Name : " << name << std::endl;
	std::cout << "Runs :" << runs << std::endl;
	std::cout << "Wickets :" << wickets << std::endl;
	if (isWicketKeeper){
		std::cout << "Wicket keeper : YES" << std::endl;
	}
	else{
		std::cout << "Wicket keeper : NO" << std::endl;
	}
	std::cout << "Bowling average :" << bowlingAverage << std::endl;
	std::cout << "Bowler hand preference :"<<bowlerHandPeference << std::endl;
}
