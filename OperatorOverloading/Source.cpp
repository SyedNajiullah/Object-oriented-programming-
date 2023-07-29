#include"OperatorOverloading.h"

int main(){

	OperatorOverloading obj1("Naji", 5); // parameterize
	OperatorOverloading obj2(obj1); // copy

	OperatorOverloading obj3;
	obj3 = obj1; // assignment operator

	std::cout << obj1[0] << std::endl; // indexing operator
	// pre increment
	std::cout << ++obj1 << std::endl;
	std::cout << --obj1 << std::endl;
	 // post increment
	std::cout << obj1++ << std::endl;
	std::cout << obj1-- << std::endl;
	std::cout << obj1 << std::endl;
	// Multiply
	std::cout << obj1 * obj2 << std::endl;
	// Divide 
	std::cout << obj1 / obj2 << std::endl;
	// plus 
	std::cout << obj1 + obj2 << std::endl;
	// minus
	std::cout << obj1 - obj2 << std::endl;
	//operator<
	if (obj1 < obj2){
		std::cout << " obj1 < obj2 " << std::endl;
	}
	//operator>
	if (obj1 > obj2){
		std::cout << " obj1 > obj2 " << std::endl;
	}
	//operator<=
	if (obj1 <= obj2){
		std::cout << " obj1 <= obj2 " << std::endl;
	}
	//operator>=
	if (obj1 >= obj2){
		std::cout << " obj1 >= obj2 " << std::endl;
	}
	//operator==
	if (obj1 == obj2){
		std::cout << " obj1 == obj2 " << std::endl;
	}
	//operator+(uniary operator+)
	std::cout << +obj1 << std::endl;
	//operator+(uniary operator-)
	std::cout << -obj1 << std::endl;

	OperatorOverloading obj4;
	std::cin >> obj4; // stream insertion

	// stream exsertion
	std::cout << obj4 << std::endl; 

	return 0;
}