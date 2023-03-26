#pragma once
#include<iostream>
template<class Type>
class List
{
protected:
	Type * arr;
	int maxSize;
	int currentSize;
public:
	List() = default;
	List(int _maxSize);
	List(const List & obj);
	List & operator=(const List & obj);
	~List();


	virtual void addElementAtFirstIndex(Type number) = 0;
	virtual void addElementAtLastIndex(Type number) = 0;
	virtual Type removeElementFromEnd() = 0;
	virtual Type removeElementFromStart() = 0;

	virtual void display() const = 0;
};

template<class Type>
List<Type>::List(const List & obj)
{
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
	arr = new Type[obj.maxSize];
	for (int i = 0; i < obj.maxSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

template<class Type>
List<Type> & List<Type>::operator=(const List & obj)
{
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
	arr = new Type[obj.maxSize];
	for (int i = 0; i < obj.maxSize; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

template<class Type>
List<Type>::List(int _maxSize)
{
	maxSize = _maxSize;
	currentSize = 0;
	arr = new Type[maxSize];
}

template<class Type>
List<Type>::~List()
{
	delete[]arr;
	arr = nullptr;
	maxSize = 0;
	currentSize = 0;
}