#include <iostream>
#include "User.h"
#include <string>
#include<stdlib.h> 
using namespace std;

void baslik();
string toLower(string str);

int main(){
	
	
	baslik();
	modeMenu:
    int mode=0;
    int choice1=0,choice2=0;
    string n, sn,anykey;
    double user_weight;
    int id = 0,user_age, week;
    
    cout<<"1-User Mode"<<endl;
    cout<<"2-Developer Mode"<<endl;
    cout<<"3-Exit"<<endl;
    cout<<"Your choice: ";
    cin>>mode;
    if(mode>3||mode<0){
    		cout<<endl<<"!!Invalid enter!!"<<endl;
    		cout<<"!!Try Again!!"<<endl<<endl;
    		goto modeMenu;
	}
    
    if(mode==1){
    	
    	baslik();
    	int sportTime;
        string mealName, namePortion, sportName; 
    	
    	cout<<"Name:";
    	cin>>n;
    	cout<<endl;
    	cout<<"Surname:";
    	cin>>sn;
    	cout<<endl;
    	cout<<"Age:";
    	cin>>user_age;
    	cout<<endl;
    	cout<<"Weight:";
    	cin>>user_weight;
    	cout<<endl;
    	cout<<"Week you want to enter calorie information(like 1): ";
    	cin>>week;
    	cout<<endl;
    	
    	id++;
    	
    	User usernew(id, n,sn,user_age,user_weight, week);
    	userMenu:
    	baslik();
    	cout<<"Welcome "<<n<<endl<<endl;
    	oneone:
    	cout<<"1-Add meal"<<endl;
    	cout<<"2-Add Sport"<<endl;
    	cout<<"3-Show weekly meal counts"<<endl;
    	cout<<"4-Show weekly sports counts"<<endl;
    	cout<<"5-Show weekly total intaked calories"<<endl;
    	cout<<"6-Show weekly total burned calories "<<endl;
    	cout<<"7-Show all calories"<<endl;
    	cout<<"8-Exit"<<endl;
    	cout<<"Your choice:";
    	cin>>choice1;
    	if(choice1>8||choice1<0){
    		cout<<endl<<"!!Invalid enter!!"<<endl;
    		cout<<"!!Try Again!!"<<endl<<endl;
    		goto oneone;
		}
    	
    	switch(choice1){
    		case 1:{
    			baslik();
    			cout<<"Meal name (breakfast,lunch,dinner):";
    			cin >> mealName;
    			cout<<endl;
    			cout << "Portion name(small,medium,large):";
                cin >> namePortion;
                cout<<endl;
                cout << "\nMeal information saved successfully" << endl;
                
                mealName = toLower(mealName);
                namePortion = toLower(namePortion);
                usernew.addMeal(usernew, mealName, namePortion);
                
                cout<<"\nPress any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
				break;
			}
			case 2:{
				baslik();
				cout << "Sport Name(football,swimming,tennis,basketball): :";
                cin >> sportName;
                cout << "Sport Time(minute):";
                cin >> sportTime;
                sportName = toLower(sportName);
                usernew.addSport(usernew,sportName,sportTime);
                cout << "\nSport information saved successfully" << endl;
                
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
				
				break;
			}
			case 3:{
				baslik();
				usernew.showAllFood();
				cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
                break;
			}
			case 4:{
				baslik();
				usernew.showAllSports();
				cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                
                goto userMenu;
                
				break;
				
			}
			case 5:{
				baslik();
				cout <<"All calories taken :"<< usernew.getCalTaken()<<endl;
				cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
				break;
			}
			case 6:{
				baslik();
				cout << "All calories burned:"<<usernew.getCalburned() << endl;
				cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
				break;
			}
			case 7:{
				baslik();
				cout << "All calories:" << usernew+(usernew)<< endl;
				cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto userMenu;
                
				break;
			}
			case 8:{
				return 0;
				break;
			}
			
		}	
	}
	
	if(mode==2){
		
		baslik();
		developerHata:
		cout<<"<Developer Mode>";
        int sporTtime;
        string mealName, namePortion, sportName;
        cout<<endl<<"Three user was created automatically to check program functions"<<endl;
        User user1(34, "Darth","Vader", 45, 95, 1);
        User user2(99, "Mark","Ross", 23, 65, 2);
        User user3;
        developerMenu:
        cout<<endl;
       	cout << "1-Testing of Copy ctor"<<endl;
        cout << "2-Testing of Assigment operator =" << endl;
		cout << "3-Testing of ostream& operator<< | show user infos " << endl;
        cout << "4:Testing of + operator for meals" << endl;
        cout << "5:Testing of + operator for sports" << endl;
		cout << "6-Testing of adding meal" << endl;
        cout << "7-Testing of adding sport" << endl;
        cout << "8-Testing of showing meal count  weekly" << endl;
        cout << "9-Testing of showing sport count  weekly" << endl;
        cout << "10-Testing of showing all calories taken  weekly" << endl;
        cout << "11-Testing of showing all calories burned weekly" << endl;
        cout << "12-Testing of showing sum all calories" << endl;
        cout << "13-Exit" << endl;
        cout << "Your choice:";
    	cin >> choice2;
    	if(choice2>16||choice2<0){
    		cout<<endl<<"!!Invalid enter!!"<<endl;
    		cout<<"!!Try Again!!"<<endl<<endl;
    		goto developerHata;
		}
    	
    	switch(choice2){
    		case 1:{
    			baslik();
    			cout << "User1" << endl;
                cout << user1<<endl;
                
                cout << "User3" << endl;
                cout << user3;
                
                cout<<endl<<"After Copy ctor";
                
    			User user3(user1);
                cout << "User3:" << endl;
                cout << user3<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
    			
				break;
			}
			case 2:{
				baslik();
				cout << "User1" << endl;
                cout << user1<<endl;
                
                cout << "User3" << endl;
                cout << user3;
                
                cout<<endl<<"After Assigment operator =";
				
				User user3 = user1;
                cout << "User3:" << endl;
                cout << user3;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
                    
                
				break;
			}
			case 3:{
    			baslik();
    			cout << "User1" << endl;
                cout << user1<<endl;
                cout << "User2 " << endl;
                cout << user2<<endl;
                cout << "User3" << endl;
                cout << user3;
                cout<<endl;
				cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
                    
				break;
			}
			
			case 4:{
				baslik();
				
				cout<<"using + operator with meals "<<endl;
				cout<<"\nSum of first day breakfast calories:"<<user1.sumBreakfast(user1);
                cout << "\nSum of first day launch calories:" << user1.sumLunch(user1);
                cout << "\nSum of first day dinner calories:" << user1.sumDinner(user1);
                cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;    
				break;
			
			}
			case 5:{
				baslik();
				
				cout<<"using + operator with sport activities \n "<<endl;
				cout << "Basketball Total Calories Burned on the first day:" << user1.sumBasketball(user1)<<endl;
                cout << "\nFootball Total Calories Burned on the first day:" << user1.sumFootball(user1)<<endl;
                cout << "\nTennis Total Calories Burned on the first day:" << user1.sumTennis(user1)<<endl;
                cout << "\nSwimming Total Calories Burned on the first day:" << user1.sumSwimming(user1)<<endl;
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu; 
				break;
			}
			case 6:{
				baslik();
				
				cout << "Enter Meal(breakfast,lunch,dinner):";
                cin >> mealName;
                cout << "Enter Portion :(small,medium,large)";
                cin >> namePortion;
                mealName = toLower(mealName);
                namePortion = toLower(namePortion);
                user1.addMeal(user1, mealName, namePortion);
                    
				cout<<endl;
				cout << "Meal information saved successfully\n" << endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu; 
				
				break;
			}
			
			case 7:{
				
				baslik();
				int sporTime;
			
				cout << "Enter sports name(swimming,basketball,tennis,,football) :";
                cin >> sportName;
                cout << "Enter minute:";
                cin >> sporTime;
                sportName = toLower(sportName);
                user1.addSport(user1, sportName, sporTime);
                cout << "\nSport information saved successfully" << endl;
                cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu; 
                
				break;
			}
			
			case 8:{
				baslik();
				user1.showAllFood();
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
				
				break;
			}
			case 9:{
				baslik();
				user1.showAllSports();
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
				break;
			}
			case 10:{
				baslik();
				cout << "Total taken calories:" << user1.getCalTaken() << endl;
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
				break;
			}
			case 11:{
				baslik();
				cout << "Total burned calories:" << user1.getCalburned() << endl;
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
				
				break;
			}
			case 12:{
				baslik();
				cout << "Sum of calories :" << user1 + (user1) << endl;
				cout<<endl;
                cout<<"Press any key to go to menu"<<endl;
                cin>>anykey;
                goto developerMenu;
				
				break;
			}
			case 13:{
				return 0;
				break;
			}
    		
		}
        
	}
    
	
	
	return 0;
}

void baslik(){
	system("CLS");
	cout<<"--------CALORIE TRACKING SYSTEM--------"<<endl<<endl;
	
	
}

string toLower(string str) {
    for (int i = 0; i < str.length(); i++){
        
		str[i] = tolower(str[i]);
    }
    return str;
}

