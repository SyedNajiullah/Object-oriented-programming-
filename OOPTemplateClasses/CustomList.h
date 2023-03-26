#pragma once
#include "List.h"
template<class T>
class CustomList :public List<T>
{
public:
	CustomList() = default;
	CustomList(int s);
	CustomList(const CustomList & obj);
	CustomList & operator=(const CustomList & obj);
	~CustomList();


	void addElementAtFirstIndex(T number);
	void addElementAtLastIndex(T number);
	T removeElementFromEnd();
	T removeElementFromStart();
	void display() const;

	bool empty() const;
	bool full() const;
	int size() const;  // to return current size
	T last() const;// returns last element of mylist
	bool insertAt(int index, T value); // inserts a value at 'index'
	bool search(T variable);  // Returns true if the searched value is present in the list else returns false
	
	T sumOfPrime() const; // Sum of all prime numbers present in a list
	T secondMaxEven() const; // returns second maximum even number persent in a list
	T secondMinOdd() const;// returns second minumum odd number
	void printDublicates() const; //displays all duplicate numbers which occour more then once
	void rotateClockWise(int r); // It divides the list into two parts (halves the list), and rotate both parts “r” times in clockwise direction
	void rotateAntiClockWise(int r); //It divides the list into two parts (halves the list), and rotate both parts “rt” times in the anti-clockwise direction
};
template<class T>
T CustomList<T>::sumOfPrime() const // Sum of all prime numbers present in a list
{
	T Sum = 0;
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		int count = 0;
		for (int j = 1; j <= List<T>::arr[i]; j++)
		{
			if (List<T>::arr[i] % j== 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			Sum += arr[i];
		}
	}
	return Sum;
}
template<class T>
T CustomList<T>::secondMaxEven() const
{
	// returns second maximum even number persent in a list
	T max = List<T>::arr[0];
	int count = 0;
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		if (List<T>::arr[i] % 2 == 0)  //number is even
		{
			if (max < List<T>::arr[i])
			{
				max = List<T>::arr[i];
			}
			count++;
		}
	}
	if (count == 0)  // means ther is no even number
	{
		return 0;
	}
	if (count == 1)
	{
		return max;
	}
	else
	{
		bool flag = false;
		while (-1)
		{
			max = max - 2;
			for (int j = 0; j < List<T>::currentSize; j++)
			{
				if (List<T>::arr[j] == max)
				{
					flag = true;
					break;
				}
			}
			if (flag == true)
			{
				break;
			}
		}
		return max;
	}
}
template<class T>
T CustomList<T>::secondMinOdd() const// returns second minumum odd number
{
	T min = List<T>::arr[0];
	int count = 0;
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		if (List<T>::arr[i] % 2 == 1)  //number is odd
		{
			if (min > List<T>::arr[i])
			{
				min = List<T>::arr[i];
			}
			count++;
		}
	}
	if (count == 0)   // means there is no odd number
	{
		return 0;
	}
	if (count == 1)
	{
		return min;
	}
	else
	{
		bool flag = false;
		while (-1)
		{
			min = min + 2;
			for (int j = 0; j < List<T>::currentSize; j++)
			{
				if (List<T>::arr[j] == min)
				{
					flag = true;
					break;
				}
			}
			if (flag == true)
			{
				break;
			}
		}
		return min;
	}
}
template<class T>
void CustomList<T>::printDublicates() const //displays all duplicate numbers which occour more then once
{
	bool flag = false;
	int count = 0;
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		count = 0;
		for (int j = i; j < List<T>::currentSize; j++)   // j i se chale ga
		{
			if (List<T>::arr[i] == List<T>::arr[j])
			{
				count++;
			}
		}
		if (count >= 2)
		{
			flag = true;
			std::cout << List<T>::arr[i] << "  ";
		}
	}
	if (!flag)
	{
		std::cout << 0 << std::endl;
	}
}
template<class T>
void CustomList<T>::rotateClockWise(int r) // It divides the list into two parts (halves the list), and rotate both parts “r” times in clockwise direction
{
	std::cout << "::: Before array is :::" << std::endl;
	display();
	if (List<T>::currentSize % 2 == 0)
	{
		for (int count = 0; count < r; count++)
		{
			T temp1 = List<T>::arr[(List<T>::currentSize / 2) - 1];
			for (int i = (List<T>::currentSize / 2) - 1; i > 0; i--)
			{
				List<T>::arr[i] = List<T>::arr[i - 1];
			}
			List<T>::arr[0] = temp1;

			T temp2 = List<T>::arr[List<T>::currentSize - 1];
			for (int i = List<T>::currentSize - 1; i > List<T>::currentSize / 2; i--)
			{
				List<T>::arr[i] = List<T>::arr[i - 1];
			}
			List<T>::arr[List<T>::currentSize / 2] = temp2;
		}
	}
	else
	{
		for (int count = 0; count < r; count++)
		{
			T temp1 = List<T>::arr[(List<T>::currentSize / 2) - 1];
			for (int i = (List<T>::currentSize / 2) - 1; i > 0; i--)
			{
				List<T>::arr[i] = List<T>::arr[i - 1];
			}
			List<T>::arr[0] = temp1;

			T temp2 = List<T>::arr[List<T>::currentSize - 1];
			for (int i = List<T>::currentSize - 1; i > (List<T>::currentSize / 2) + 1; i--)
			{
				List<T>::arr[i] = List<T>::arr[i - 1];
			}
			List<T>::arr[(List<T>::currentSize / 2) + 1] = temp2;
		}
	}
	std::cout << std::endl;
	std::cout << "After reversing array " << r << " times" << std::endl;
	std::cout << std::endl;
	std::cout << "::: After array is :::" << std::endl;
	display();
}
template<class T>
void CustomList<T>::rotateAntiClockWise(int r) //It divides the list into two parts (halves the list), and rotate both parts “r” times in the anti-clockwise direction
{
	std::cout << "::: Before array is :::" << std::endl;
	display();
	if (List<T>::currentSize % 2 == 0)   // Elements are even
	{
		for (int i = 0; i < r; i++)
		{
			T temp = List<T>::arr[0];
			for (int i = 0; i < (List<T>::currentSize / 2) - 1; i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}
			List<T>::arr[(List<T>::currentSize / 2) - 1] = temp;

			T temp2 = List<T>::arr[List<T>::currentSize / 2];
			for (int i = List<T>::currentSize / 2; i < (List<T>::currentSize - 1); i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}
			List<T>::arr[(List<T>::currentSize - 1)] = temp2;
		}
	}
	else
	{
		for (int i = 0; i < r; i++)
		{
			T temp = List<T>::arr[0];
			for (int i = 0; i < (List<T>::currentSize / 2) - 1; i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}
			List<T>::arr[(List<T>::currentSize / 2) - 1] = temp;

			T temp2 = List<T>::arr[(List<T>::currentSize / 2) + 1];
			for (int i = (List<T>::currentSize / 2 ) + 1; i < (List<T>::currentSize - 1); i++)
			{
				List<T>::arr[i] = List<T>::arr[i + 1];
			}
			List<T>::arr[(List<T>::currentSize - 1)] = temp2;
		}
	}
	std::cout << std::endl;
	std::cout << "After reversing array " << r << " times" << std::endl;
	std::cout << std::endl;
	std::cout << "::: After array is :::" << std::endl;
	display();
}
template<class T>
CustomList<T>::CustomList(int s) :List<T>(s)
{

}
template<class T>
CustomList<T> ::CustomList(const CustomList & obj) : List<T>(obj)
{

}
template<class T>
CustomList<T> & CustomList<T>::operator=(const CustomList & obj)
{
	List<T>::operator=(obj);
}

template<class T>
CustomList<T>::~CustomList()
{

}

template<class T>
void CustomList<T> ::addElementAtFirstIndex(T number)
{
	if (empty() && !full())
	{
		for (int i = List<T>::currentSize - 1; i >= 0; i--)
		{
			List<T>::arr[i + 1] = List<T>::arr[i];
		}
		List<T>::currentSize++;
		List<T>::arr[0] = number;
	}
	else
	{
		std::cout << "Array is full cannot add another variable" << std::endl;
	}
}
template<class T>
void CustomList<T>::addElementAtLastIndex(T number)
{
	if (empty() && !full())
	{
		List<T>::arr[List<T>::currentSize++] = number;
	}
	else
	{
		std::cout << "Array is full cannot add another variable" << std::endl;
	}
}
template<class T>
T CustomList<T> ::removeElementFromEnd()
{
	if (List<T>::currentSize == 0)
	{
		std::cout << "Array is empty cannot remove a variable" << std::endl;
	}
	else
		return List<T>::arr[List<T>::currentSize--];
}
template<class T>
T CustomList<T> ::removeElementFromStart()
{
	if (List<T>::currentSize == 0)
	{
		std::cout << "Array is empty cannot remove a variable" << std::endl;
	}
	else
	{
		T var;
		var = List<T>::arr[0];
		for (int i = 0; i < List<T>::currentSize; i++)
		{
			List<T>::arr[i] = List<T>::arr[i + 1];
		}
		List<T>::currentSize--;
		return var;
	}
}
template<class T>
bool CustomList<T> ::empty() const
{
	if (List<T>::currentSize != List<T>::maxSize)
	{
		return true;
	}
	else
		return false;
}
template<class T>
bool CustomList<T> ::full() const
{
	if (List<T>::currentSize == List<T>::maxSize)
	{
		return true;
	}
	else
		return false;

}
template<class T>
int CustomList<T> ::size() const  // to return current size
{
	return List<T>::currentSize;
}
template<class T>
T CustomList<T> ::last() const// returns last element of mylist
{
	return List<T>::arr[List<T>::currentSize - 1];
}
template<class T>
bool CustomList<T> ::insertAt(int index, T value) // inserts a value at 'index'
{
	if (index > List<T>::maxSize)  // if index is present
	{
		return false;
	}
	else
	{
		List<T>::arr[index] = value;
		std::cout << std::endl;
		std::cout << ": After inserting new array is :" << std::endl;
		display();
		return true;
	}
}
template<class T>
bool CustomList<T> ::search(T variable)  // Returns true if the searched value is present in the list else returns false
{
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		if (List<T>::arr[i] == variable)
		{
			return true;
		}
	}
	return false;
}
template<class T>
void CustomList<T> ::display() const
{
	if (List<T>::currentSize == 0)
	{
		std::cout << "Array is empty cannot display array" << std::endl;
	}
	else
	{
		std::cout << ": Array :" << std::endl;
		for (int i = 0; i < List<T>::currentSize; i++)
		{
			std::cout << i << ". " << List<T>::arr[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Max size is :" << List<T>::maxSize << std::endl;
		std::cout << "Current size is :" << List<T>::currentSize << std::endl;
	}
}