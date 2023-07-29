#include"AllRounder.h"

int main(){

	std::string playerName = "Syed Najiullah";
	int runs = 2000;
	int numberOfWickets = 10;
	bool wicketKeeper = false;
	float bowlingAverage = 25;
	char bowlingHandPreference = 'R';
	float battingAverage = 40;
	char battingHandPreference = 'R';
	int numberOfCatches = 100;

	AllRounder allrounder(numberOfCatches, battingAverage, battingHandPreference, bowlingAverage, bowlingHandPreference, playerName, runs, numberOfWickets, wicketKeeper);

	allrounder.display();
	return 0;
}