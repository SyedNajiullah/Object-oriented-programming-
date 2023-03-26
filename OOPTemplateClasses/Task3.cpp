#include"CustomList.h"
int main()
{
	std::cout << "-------:::::::::::-------" << std::endl;
	std::cout << ":::::::FOR INTEGER:::::::" << std::endl;
	std::cout << "-------:::::::::::-------" << std::endl;
	std::cout << std::endl;
	CustomList<int> L1(5);
	L1.addElementAtLastIndex(1);
	L1.addElementAtLastIndex(2);
	L1.addElementAtLastIndex(2);
	L1.addElementAtLastIndex(4);
	L1.display();
	std::cout << "Current size of the array is -->" << L1.size() << std::endl;
	L1.addElementAtFirstIndex(0);
	std::cout << std::endl;
	L1.display();
	std::cout << std::endl;
	L1.addElementAtLastIndex(5);
	L1.removeElementFromEnd();
	std::cout << std::endl;
	L1.display();
	L1.removeElementFromStart();
	std::cout << std::endl;
	L1.display();
	std::cout << std::endl;
	std::cout << "Last element of array is -->" << L1.last() << std::endl;
	L1.insertAt(0, 10);
	if (L1.search(10))
		std::cout << "Variable found" << std::endl;
	else
		std::cout << "Variable not found" << std::endl;
	std::cout << "Sum of prime numbers in an array is :" << L1.sumOfPrime() << std::endl;
	std::cout << "Second maximum even number is :" << L1.secondMaxEven() << std::endl;
	std::cout << "Second minimum odd number is :" << L1.secondMinOdd() << std::endl;
	std::cout << "Duplicated numbers are :";
	L1.printDublicates();
	std::cout << std::endl;
	L1.addElementAtLastIndex(3);
	L1.addElementAtLastIndex(4);
	L1.rotateClockWise(3);
	std::cout << std::endl;
	L1.rotateAntiClockWise(3);

	std::cout << std::endl;
	std::cout << "\t\t-------:::::::::::::-------" << std::endl;
	std::cout << "\t\t:::::::FOR CHARACTER:::::::" << std::endl;
	std::cout << "\t\t-------:::::::::::::-------" << std::endl;
	std::cout << std::endl;
	CustomList<char> L2(5);
	L2.addElementAtLastIndex('B');
	L2.addElementAtLastIndex('C');
	L2.addElementAtLastIndex('D');
	L2.addElementAtLastIndex('E');
	L2.display();
	std::cout << "Current size of the array is -->" << L2.size() << std::endl;
	L2.addElementAtFirstIndex('A');
	std::cout << std::endl;
	L2.display();
	std::cout << std::endl;
	L2.addElementAtLastIndex('F');
	L2.removeElementFromEnd();
	std::cout << std::endl;
	L2.display();
	L2.removeElementFromStart();
	std::cout << std::endl;
	L2.display();
	std::cout << "Last element of array is -->" << L2.last() << std::endl;
	L2.insertAt(0, 'S');
	if (L2.search('S'))
		std::cout << "Variable found" << std::endl;
	else
		std::cout << "Variable not found" << std::endl;

	std::cout << std::endl;
	std::cout << "\t\t-------:::::::::-------" << std::endl;
	std::cout << "\t\t:::::::FOR FLOAT:::::::" << std::endl;
	std::cout << "\t\t-------:::::::::-------" << std::endl;
	std::cout << std::endl;
	CustomList<double> L3(5);
	L3.addElementAtLastIndex(1.1);
	L3.addElementAtLastIndex(2.2);
	L3.addElementAtLastIndex(3.3);
	L3.addElementAtLastIndex(4.4);
	L3.display();
	std::cout << "Current size of the array is -->" << L3.size() << std::endl;
	L3.addElementAtFirstIndex(0.0);
	std::cout << std::endl;
	L3.display();
	std::cout << std::endl;
	L3.addElementAtLastIndex(5.5);
	L3.removeElementFromEnd();
	std::cout << std::endl;
	L3.display();
	L3.removeElementFromStart();
	std::cout << std::endl;
	L3.display();
	std::cout << "Last element of array is -->" << L3.last() << std::endl;
	L3.insertAt(0, 10.10);
	if (L3.search(100.378))    // Just too check
		std::cout << "Variable is found" << std::endl;
	else
		std::cout << "Variable is not found" << std::endl;

	return 0;
}