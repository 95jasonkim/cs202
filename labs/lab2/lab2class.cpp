/**/
#include "lab2class.hpp"

Lab::Lab()
{
	cout << "Called default constructor" << endl;
}

Lab::Lab(const Lab& L):_one(L._one), _two(L._two)
{
	cout << "Called copy constructor" << endl;
}

Lab::Lab(int a, int b):_one(a), _two(b)
{
	cout << "Called constructor with parameters" << endl;
}

Lab::~Lab()
{
	cout << "Called destructor" << endl;
}

void Lab::setOne(int a)
{
	cout << "one is now " << a<< endl;
	_one = a;
}

int Lab::getSum() const
{
	return _one+_two;
}

void Lab::setTwo(int abc)
{
	cout << "two is now " << abc << endl;
	_two = abc;
}

int Lab::getOne() const
{
	return _one;
}

int Lab::getTwo() const
{
	return _two;
}
