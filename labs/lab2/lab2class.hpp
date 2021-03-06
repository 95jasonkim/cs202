#ifndef LABTWO_HPP
#define LABTWO_HPP
#include<iostream>
using std::cout;
using std::endl;


class Lab
{
public:
	Lab();
	Lab(const Lab& L);
	Lab(int a, int b);
	~Lab();

	void setOne(int a);
	void setTwo(int abc);
	int getSum() const;
	int getOne() const;
	int getTwo() const;
private:
	int _one = 0;
	int _two = 0;
};


#endif 