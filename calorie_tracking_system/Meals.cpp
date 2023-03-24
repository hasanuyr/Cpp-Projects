#include <string>
#include "Meals.h"
#include <iostream>
using namespace std;

Breakfast::Breakfast() {
	namePortion = " ";
	calorie = 0;
}

Breakfast& Breakfast::operator=(Breakfast& other){
	this->calorie = other.calorie;
	this->namePortion = other.namePortion;
	return *this;
}
double Breakfast::operator+(const Breakfast& other){
	return (this->calorie + other.calorie);
}
Breakfast::Breakfast(const Breakfast& other){
	calorie =other.calorie;
	namePortion = other.namePortion;
}

ostream& operator<<(ostream& output, const Breakfast& other){
	output << "Portion: " <<other.namePortion << endl << "Taken calories: " <<other.calorie<<endl;
	return output;
}

double Breakfast::CalculateCalPerPortion(string porsiyon){

	if (porsiyon == "small"){
		this->calorie = 200;
		return this->calorie;
	}

	if (porsiyon == "medium"){
		this->calorie = 400;
		return this->calorie;
	}
	if (porsiyon == "large"){
		this->calorie = 600;
		return this->calorie;
	}
}

Lunch::Lunch(){
	namePortion = " ";
	calorie = 0;
}

ostream& operator<<(ostream& output, const Lunch& other){
	output << "Portion: " << other.namePortion << endl << "Taken Calories: " << other.calorie << endl;
	return output;
}

Lunch& Lunch::operator=(Lunch& other){
	this->calorie = other.calorie;
	this->namePortion = other.namePortion;
	return *this;
}
double Lunch:: operator+(const Lunch& other){
	return (this->calorie + other.calorie);
}
Lunch::Lunch(const Lunch& other){
	calorie = other.calorie;
	namePortion = other.namePortion;
}

double Lunch::CalculateCalPerPortion(string porsiyon){

	if (porsiyon == "small"){
		this->calorie = 400;
		return this->calorie;
	}

	if (porsiyon == "medium"){
		this->calorie = 600;
		return this->calorie;
	}
	if (porsiyon == "large"){
		this->calorie = 800;
		return this->calorie;
	}
}
Dinner::Dinner(){
	namePortion = "";
	calorie = 0;
}

ostream& operator<<(ostream& output, const Dinner& other){
	output << "Portion: " << other.namePortion << endl << "Taken Calories: " << other.calorie << endl;
	return output;
}

Dinner& Dinner::operator=(Dinner& other){
	this->calorie = other.calorie;
	this->namePortion = other.namePortion;
	return *this;
}
double Dinner:: operator+(const Dinner& other){
	return (this->calorie + other.calorie);
}
Dinner::Dinner(const Dinner& other){
	calorie = other.calorie;
	namePortion = other.namePortion;
}

double Dinner::CalculateCalPerPortion(string porsiyon){

	if (porsiyon == "small"){
		this->calorie = 400;
		return this->calorie;
	}

	if (porsiyon == "medium"){
		this->calorie = 600;
		return this->calorie;
	}
	if (porsiyon == "large"){
		this->calorie = 800;
		return this->calorie;
	}
}
