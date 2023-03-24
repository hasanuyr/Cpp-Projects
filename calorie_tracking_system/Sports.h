#ifndef SPORTS_H
#define SPORTS_H
#include <string>
using namespace std;
class Basketball {
	friend ostream& operator<<(ostream&, const Basketball&); 
	
public:

	Basketball();
	Basketball(const Basketball&); //Copy ctor
	Basketball& operator=(Basketball&); //Assigment operator
	double operator+(const Basketball&);
	
	double calculateCalBurned(int);
	
private:
	int minute;
	double calBurned;
};
class Football {
	friend ostream& operator<<(ostream& , const Football&); 
private:
	int minute;
	double calBurned;
public:
	Football();
	Football(const Football& ); //Copy ctor
	Football& operator=(Football& ); //Assigment operator
	double operator+(const Football& );
	
	double calculateCalBurned(int);
};
class Tennis {
	friend ostream& operator<<(ostream& , const Tennis& );
public:
	Tennis();
	Tennis(const Tennis& ); //Copy ctor
	Tennis& operator=(Tennis& ); //Assigment operator
	double operator+(const Tennis& );
	
	double calculateCalBurned(int);
private:
	int minute;
	double calBurned;
};

class Swimming {
	friend ostream& operator<<(ostream&, const Swimming&); 

public:
	Swimming();
	Swimming(const Swimming&); //Copy ctor
	Swimming& operator=(Swimming&); //Assigment operator
	double operator+(const Swimming&);
	
	double calculateCalBurned(int);
	
private:
	int minute;
	double calBurned;
};
#endif#
