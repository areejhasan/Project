#include"AdmittingDate.h"
#include"Date.h"
#include<iostream>
using namespace std;
void admit::displayDate(){
	cout << "The admitting date is: " <<getDay() << " " << getMonth() << " " << getYear() << endl;
}
bool admit::is_valid_admit(){
	bool flag =true;
	if (getDay() > 31 && getDay() <= 0 && getMonth()>12 && getMonth()<=0 && getYear()<=0){
		flag = false;
		return flag;
	}
	else{
		flag = true;
		return flag;
	}
}
admit::admit(int day_,int month_,int year_):date(day_,month_,year_){}
admit::~admit(){}