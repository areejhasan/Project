#include<iostream>
#include"date.h"
using namespace std;
void date::setMonth(int month_){
	month = month_;
}
void date::setDay(int day_){
	day = day_;
}
void date::setYear(int year_){
	year = year_;
}
int date::getMonth()const{
	return month;
}
int date::getDay()const{
	return day;
}
int date::getYear()const{
	return year;
}
date::~date(){}
date::date(int day_, int month_, int year_){
	month = month_;
	day = day_;
	year = year_;
}
date::date(const date&other){
	month = other.month;
	day = other.day;
	year = other.year;
}
void date::operator=(const date &other){
	this->month = other.month;
	this->day = other.day;
	this->year = other.year;
}
bool date::is_valid_date(){
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