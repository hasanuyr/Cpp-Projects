#include <iostream>
#include "User.h"
#include <string>
using namespace std;

User::User(){
	ID =0;
	name  ="";
	surname = "";
	age =0;
	weight =0;
	week =0;
	sumofTakenCal = 0;
	sumofGivenCal = 0;
	countBreakfast = 0;
	countLunch = 0;
	countDinner = 0;
	countBasketball = 0;
	countFootball = 0;
	countTennis = 0;
	countSwimming = 0;
}

User::User(int Id, string n, string sn, int user_age, double user_weight, int perWeek){
	ID = Id;
	name  = n;
	surname = sn;
	age = user_age;
	weight = user_weight;
	week = perWeek;
	sumofTakenCal=0;
	sumofGivenCal=0;
	countBreakfast=0;
	countLunch=0;
	countDinner=0;
	countBasketball=0;
	countFootball=0;
	countTennis=0;
	countSwimming=0;

}


User& User::operator=(User& otherUser){
	this->ID = otherUser.ID;
	this->name  = otherUser.name ;
	this->surname = otherUser.surname;
	this->age = otherUser.age;
	this->weight = otherUser.weight;
	this->week = otherUser.week;
	this->sumofTakenCal = otherUser.sumofTakenCal;
	this->sumofGivenCal = otherUser.sumofGivenCal;
	this->countBreakfast = otherUser.countBreakfast;
	this->countLunch = otherUser.countLunch;
	this->countDinner = otherUser.countDinner;
	this->countBasketball = otherUser.countBasketball;
	this->countFootball = otherUser.countFootball;
	this->countTennis = otherUser.countTennis;
	this->countSwimming = otherUser.countSwimming;
	for (int i = 0; i < 7; i++)
	{ 
		this->userBreakfast[i] = otherUser.userBreakfast[i];
		this->userLunch[i] = otherUser.userLunch[i];
		this->userDinner[i] = otherUser.userDinner[i];
		this->userBasketball[i] = otherUser.userBasketball[i];
		this->userFootball[i] = otherUser.userFootball[i];
		this->userTennis[i] = otherUser.userTennis[i];
		this->userSwimming[i] = otherUser.userSwimming[i];
	}
	return *this;
}
double User:: operator+(User& otherUser){
	return (this->getCalTaken()- this->getCalburned());
}

ostream& operator<<(ostream& output, const User& otherUser){
	output << "ID: " << otherUser.ID << endl<<"Name: "<<otherUser.name  <<endl<<"Surname: " << otherUser.surname <<endl<<"Yas: "<<otherUser.age<<endl<<"Weight: " << otherUser.weight<<endl<<"Week: "<<otherUser.week<<endl;
	return output;
}


User::User(const User& otherUser){
	ID =otherUser.ID;
	name  = otherUser.name ;
	surname =otherUser.surname;
	age =otherUser.age;
	weight =otherUser.weight;
	week = otherUser.week;
	sumofTakenCal =otherUser.sumofTakenCal;
	sumofGivenCal =otherUser.sumofGivenCal;
	countBreakfast =otherUser.countBreakfast;
	countLunch =otherUser.countLunch;
	countDinner = otherUser.countDinner;
	countBasketball = otherUser.countBasketball;
	countFootball = otherUser.countFootball;
	countTennis = otherUser.countTennis;
	countSwimming = otherUser.countSwimming;
	for (int i = 0; i < 7; i++)
	{
		Breakfast userBreakfastt=otherUser.userBreakfast[i];
		Lunch userLunchh=otherUser.userLunch[i];
		Dinner userDinnerr=otherUser.userDinner[i];
		Basketball userBasketballl=otherUser.userBasketball[i];
		Football userFootballl=otherUser.userFootball[i];
		Tennis userTenniss=otherUser.userTennis[i];
		Swimming userSwimmingg=otherUser.userSwimming[i];
		this->userBreakfast[i] = userBreakfastt;
		this->userLunch[i] = userLunchh;
		this->userDinner[i] = userDinnerr;
		this->userBasketball[i] = userBasketballl;
		this->userFootball[i] = userFootballl;
		this->userTennis[i] = userTenniss;
		this->userSwimming[i] = userSwimmingg;
	}


}

void User::addMeal(const User& otherUser,string mealName, string namePortion)
{
	if (mealName == "breakfast"){
		if (countBreakfast >=7)
		cout<<"Reached limit of add meal per week "<<endl;
		else{
			countBreakfast++;
			sumofTakenCal = sumofTakenCal + userBreakfast[countBreakfast].CalculateCalPerPortion(namePortion);
		}
	}
	if (mealName == "lunch"){
		if (countLunch >=7)
		cout<<"Reached limit of add meal per week "<<endl;
		else{
			countLunch++;
			sumofTakenCal = sumofTakenCal + userLunch[countLunch].CalculateCalPerPortion(namePortion);
		}
	}
	if (mealName == "dinner"){
		if (countDinner>=7)
		cout<<"Reached limit of add meal per week "<<endl;
		else{
			countDinner++;
			sumofTakenCal = sumofTakenCal + userDinner[countDinner].CalculateCalPerPortion(namePortion);
		}
	}
}
void User::addSport(const User& otherUser, string sportName, int minute){
	if (sportName == "basketball"){
		if (countBasketball >= 7)
			cout<<"Reached limit of add sports per week "<<endl;
		else{
			countBasketball++;
			sumofGivenCal = sumofGivenCal + userBasketball[countBasketball].calculateCalBurned(minute);
		}
	}
	if (sportName == "football"){
		if (countFootball >= 7)
			cout<<"Reached limit of add sports per week "<<endl;
		else{
			countFootball++;
			sumofGivenCal = sumofGivenCal + userFootball[countFootball].calculateCalBurned(minute);
		}
	}
	if (sportName == "tennis")
	{
		if (countTennis >= 7)
			cout<<"Reached limit of add sports per week "<<endl;
		else{
			countTennis++;
			sumofGivenCal = sumofGivenCal + userTennis[countTennis].calculateCalBurned(minute);
		}
	}
	if (sportName == "swimming"){
		if (countSwimming >= 7)
			cout<<"Reached limit of add sports per week "<<endl;
		else{

			countSwimming++;
			sumofGivenCal = sumofGivenCal + userSwimming[countSwimming].calculateCalBurned(minute);
		}
	}
}
double User::getCalTaken()
{
	return sumofTakenCal;
}
double User::getCalburned(){
	return sumofGivenCal;
}

int User::returnBreakfastNum(){
	return countBreakfast;
}
int User::returnFootballNum()
{
	return countFootball;
}
int User::returnTennisNum()
{
	return countTennis;
}

int User::returnLunchNum(){
	return countLunch;
}
int User::returnBasketballNum(){
	return countBasketball;
}

int User::returnSwimmingNum()
{
	return countSwimming;
}

int User::returnDinnerNum(){
	return countDinner;
}

void User::getBasketball(const User& otherUser){
	
	for (int i = 0; i < 7; i++)
		cout << otherUser.userBasketball[i];
}
void User::getFootball(const User& otherUser){

	for (int i = 0; i < 7; i++)
		cout << otherUser.userFootball[i];
}
void User::getTennis(const User& otherUser){

	for (int i = 0; i < 7; i++)
		cout << otherUser.userTennis[i];
}
void User::getSwimming(const User& otherUser){
	
	for (int i = 0; i < 7; i++)
		cout << otherUser.userSwimming[i];
}



void User::getBreakfast(const User& otherUser ){
	
	for (int i = 0; i < 7; i++)
		cout << otherUser.userBreakfast[i];
}
void User::getLunch(const User& otherUser){
	
	for (int i = 0; i < 7; i++)
		cout << otherUser.userLunch[i];
}
void User::getDinner(const User& otherUser){
	
	for (int i = 0; i < 7; i++)
		cout << otherUser.userDinner[i];
}

double User::sumFootball(const User& otherUser){
	return (this->userFootball[0] + (otherUser.userFootball[0]));
}
double User::sumTennis(const User& otherUser){
	return (this->userTennis[0] + (otherUser.userTennis[0]));
}
double User::sumSwimming(const User& otherUser){
	return (this->userSwimming[0] + (otherUser.userSwimming[0]));
}

double User::sumBreakfast(const  User& otherUser){
	return (this->userBreakfast[0]+(otherUser.userBreakfast[0]));
}
double User::sumLunch(const User& otherUser){
	return (this->userLunch[0] + (otherUser.userLunch[0]));
}
double User::sumDinner(const User& otherUser){
	return (this->userDinner[0] + (otherUser.userDinner[0]));
}
double User::sumBasketball(const User& otherUser){
	return (this->userBasketball[0] + (otherUser.userBasketball[0]));
}


void User::showAllFood()
{
	cout << "-----------------MEAL------------------" << endl;
	cout << "Number of breakfasts per a week:" << returnBreakfastNum() << endl;
	cout << "Number of lunch per a week     :" << returnLunchNum() << endl;
	cout << "Number of breakfasts per a week:" << returnDinnerNum()<<endl;
	cout << "---------------------------------------" << endl;
}

void User::showAllSports(){
	cout << "-----------------SPORT---------------------" << endl;
	cout << "Number of playing Basketball per a week:" << returnBasketballNum() << endl;
	cout << "Number of playing Footbaall per a week :" << returnFootballNum() << endl;
	cout << "Number of playing Swimming per a week  :" << returnSwimmingNum() << endl;
	cout << "Number of playing Tennis per a week    :" << returnTennisNum() << endl;
	cout << "-------------------------------------------" << endl;
}
