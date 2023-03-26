#include"BookPublication.h"
#include"MagazinePublication.h"
#include"NewspaperPublication.h"
#include"JournalPublication.h"
double Publication::totalPrice = 0.0;
int main()
{
	// Create an array of publications
	const int MAX_PUBLICATIONS = 4;
	Publication* publications[MAX_PUBLICATIONS]; //Publication is Abstract class
	// Add some publications to the array
	publications[0] = new BookPublication("The Lord of the Rings", 25.0);
	publications[1] = new MagazinePublication("National Geographic", 6.99);
	publications[2] = new NewspaperPublication("New York Times", 2.5);
	publications[3] = new JournalPublication("Nature", 10.0);
	// Display information for all publications in the array
	for (int i = 0; i < MAX_PUBLICATIONS; i++)
		publications[i]->display();
	// Display the total price of all publications
	cout << "Total price of all publications: $"
		<< Publication::getTotalPrice() << endl;
	// Delete the publications
	for (int i = 0; i < MAX_PUBLICATIONS; i++)
		delete publications[i];

	return 0;
}