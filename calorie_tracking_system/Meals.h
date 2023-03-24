#ifndef MEALS_H
#define MEALS_H
#include <string>
using namespace std;
class Breakfast {
	friend ostream& operator<<(ostream&, const Breakfast&); 

public:

	Breakfast();
	Breakfast(const Breakfast&); //Copy ctor
	Breakfast& operator=(Breakfast&); //Assigment operator
	double operator+(const Breakfast&);
	double CalculateCalPerPortion(string porsiyon);
	
private:
	double calorie;
	string namePortion;
	
};
class Lunch {
	friend ostream& operator<<(ostream& , const Lunch& ); 

public:
	Lunch();
	Lunch(const Lunch&); //Copy ctor
	Lunch& operator=(Lunch& ); //Assigment operator
	double operator+(const Lunch& );
	double CalculateCalPerPortion(string porsiyon);
	
private:
	double calorie;
	string namePortion;
};
class Dinner {
	friend ostream& operator<<(ostream& , const Dinner&); 

public:
	Dinner();
	Dinner(const Dinner&); //Copy ctor
	Dinner& operator=(Dinner&); //Assigment assigment
	double operator+(const Dinner&);
	double CalculateCalPerPortion(string porsiyon);
	
private:
	double calorie;
	string namePortion;
};
#endif
