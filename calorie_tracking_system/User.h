#ifndef USER_H
#define USER_H
#include <iostream>
#include "Meals.h"
#include "Sports.h"
#include <string>
using namespace std;
class User {
	friend ostream& operator<<(ostream& output, const User& otherUser); //<< ctor
	
public:
	User(int Id,string n, string sn, int age, double user_weight,int perWeek);
	User();
	User(const User& otherUser); //Copy ctor
	User& operator=(User& otherUser); //Assigment operator
	double operator+(User& otherUser); //+ ctor.
	
	double getCalTaken();
	double getCalburned();
	void addMeal(const User& otherUser,string mealName,string namePortion);
	void addSport(const User& otherUser,string sportName, int minute);
	
	int returnBreakfastNum();
	int returnLunchNum();
	int returnDinnerNum();
	int returnBasketballNum();
	int returnFootballNum();
	int returnTennisNum();
	int returnSwimmingNum();
	
	
	void getBreakfast(const User& otherUser);
	void  getLunch(const User& otherUser);
	void  getDinner(const User& otherUser);
	void  getBasketball(const User& otherUser);
	void  getFootball(const User& otherUser);
	void  getTennis(const User& otherUser);
	void  getSwimming(const User& otherUser);

	
	double sumBreakfast(const User& otherUser);
	double  sumLunch(const User& otherUser);
	double  sumDinner(const User& otherUser);
	double sumBasketball(const User& otherUser);
	double  sumFootball(const User& otherUser);
	double sumTennis(const User& otherUser);
	double  sumSwimming(const User& otherUser);
	
	void showAllFood();
	void showAllSports();
	
	
private:
	int ID;
	int age;
	string name ; 
	string surname;
	double weight;
	int week;
	
	Breakfast userBreakfast[7];     //seven days a week    
	Lunch userLunch[7];				   
	Dinner userDinner[7];			  
	Basketball userBasketball[7];	 
	Football userFootball[7];		
	Tennis userTennis[7];		  
	Swimming userSwimming[7];
	
	double sumofTakenCal;
	double sumofGivenCal;
	
	int countBreakfast;
	int countLunch;
	int countDinner;
	int countBasketball;
	int countFootball;
	int countTennis;
	int countSwimming;
		  
};
#endif#
