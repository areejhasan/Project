#include"DischargeDate.h"
#include"Date.h"
#include<iostream>
using namespace std;
discharge::discharge(int day_, int month_, int year_) :date(day_, month_, year_){}
discharge::~discharge(){}
void discharge::displayDate(){
	cout << "The discharge date is: " << getDay() << " " << getMonth() << " " << getYear() << endl;
}
bool discharge::is_valid_discharge(){
	bool flag = true;
	if (getDay() > 31 && getDay() <= 0 && getMonth()>12 && getMonth() <= 0 && getYear() <= 0){
		flag = false;
		return flag;
	}
	else{
		flag = true;
		return flag;
	}
}