#include "Player.h"
Player::Player()
{
	name = "\0";
	runs = 0;
	wickets = 0;
	isWicketKeeper = false;
}
Player::~Player()
{
	name = "\0";
	runs = 0;
	wickets = 0;
	isWicketKeeper = false;
}
// PARAMETERIZE
Player::Player(std::string _name, int _runs, int _wickets, bool _isWicketKeeper){
	name = _name;
	runs = _runs;
	wickets = _wickets;
	isWicketKeeper = _isWicketKeeper;
}
// SETTERS
void Player::setName(std::string _name){
	name = _name;
}
void Player::setRuns(int _runs){
	runs = _runs;
}
void Player::setWickets(int _wickets){
	wickets = _wickets;
}
void Player::setIsWicketKeeper(bool _isWicketKeeper){
	isWicketKeeper = _isWicketKeeper;
}
// GETTERS
std::string Player::getName() const{
	return name;
}
int Player::getRuns() const{
	return runs;
}
int Player::getWickets() const{
	return wickets;
}
bool Player::getIsWicketKeeper() const{
	return isWicketKeeper;
}
// DISPLAY
void Player::display() const{
	std::cout << "Name : " << name << std::endl;
	std::cout << "Runs :" << runs << std::endl;
	std::cout << "Wickets :" << wickets << std::endl;
	if (isWicketKeeper){
		std::cout << "Wicket keeper : YES" << std::endl;
	}
	else{
		std::cout << "Wicket keeper : NO" << std::endl;
	}
}