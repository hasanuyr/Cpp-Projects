#include <string>
#include "Sports.h"
#include <iostream>
using namespace std;


Football::Football(){
	minute = 0;
	calBurned = 0;
}
ostream& operator<<(ostream& output, const Football& other){
	output << "Time: " << other.minute << endl << "Burned Calories: " << other.calBurned << endl;
	return output;
}

Football& Football::operator=(Football& other){
	this->minute = other.minute;
	this->calBurned = other.calBurned;
	return *this;
}
double Football:: operator+(const Football& other){
	return (this->calBurned + other.calBurned);
}
Football::Football(const Football& other){
	calBurned = other.calBurned;
	minute = other.minute;
}
double Football::calculateCalBurned(int time){
	double calo = (double)time * 5;
	return calo;
}


Swimming::Swimming(){
	minute = 0;
	calBurned = 0;
}
ostream& operator<<(ostream& output, const Swimming& other){
	output << "Time: " << other.minute << endl << "Burned Calories: " << other.calBurned << endl;
	return output;
}

Swimming& Swimming::operator=(Swimming& other){
	this->minute = other.minute;
	this->calBurned = other.calBurned;
	return *this;
}
double Swimming:: operator+(const Swimming& other){
	return (this->calBurned + other.calBurned);
}
Swimming::Swimming(const Swimming& other){
	calBurned = other.calBurned;
	minute = other.minute;
}

double Swimming::calculateCalBurned(int time){
	double calo = (double)time * 7;
	return calo;
}

Basketball::Basketball(){
	minute = 0;
	calBurned = 0;
}
ostream& operator<<(ostream& output, const Basketball& other){
	output << "Portion: " << other.minute << endl << "Taken Calories: " << other.calBurned << endl;
	return output;
}

Basketball& Basketball::operator=(Basketball& other){
	this->minute = other.minute;
	this->calBurned = other.calBurned;
	return *this;
}
double Basketball:: operator+(const Basketball& other){
	return (this->calBurned + other.calBurned);
}
Basketball::Basketball(const Basketball& other){
	calBurned = other.calBurned;
	minute = other.minute;
}
double Basketball::calculateCalBurned(int time){
	double calo= (double)time*6;
	return calo;
}


Tennis::Tennis(){
	minute = 0;
	calBurned = 0;
}
ostream& operator<<(ostream& output, const Tennis& other){
	output << "Time: " << other.minute << endl << "Burned Calories: : " << other.calBurned << endl;
	return output;
}

Tennis& Tennis::operator=(Tennis& other){
	this->minute = other.minute;
	this->calBurned = other.calBurned;
	return *this;
}
double Tennis:: operator+(const Tennis& other){
	return (this->calBurned + other.calBurned);
}
Tennis::Tennis(const Tennis& other){
	calBurned = other.calBurned;
	minute = other.minute;
}

double Tennis::calculateCalBurned(int time){
	double calo = (double)time * 5;
	return calo;
}



