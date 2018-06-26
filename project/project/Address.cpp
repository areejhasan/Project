#include"Address.h"
#include<iostream>
using namespace std;
void address::setH_no(int h_no_){
	h_no = h_no_;
}
int address::getH_no()const{
	return h_no;
}
void address::setStreetNo(int streetNo_){
	streetNo = streetNo_;
}
int address::getStreetNo()const{
	return streetNo;
}
void address::setArea(char* area_){
	int size = 0;
	size = strlen(area_);
	area = new char[size + 1];
	strcpy_s(area, size + 1, area_);
}
char *address::getArea()const{
	return area;
}
address::address(int h_no_, int streetNo_,char* area_){
	h_no = h_no_;
	streetNo = streetNo_;
	int size = 0;
	size = strlen(area_);
	area = new char[size + 1];
	strcpy_s(area, size + 1, area_);
}
address::address(const address&other){
	h_no = other.h_no;
	streetNo = other.streetNo;
}
void address:: operator=(const address&other){
	this->h_no = other.h_no;
	this->streetNo = other.streetNo;
}
address::~address(){}
void address::displayAddress(){
	cout << "Street number is: " << streetNo << endl;
	cout << "House number is: " << h_no << endl;
	cout << "Area is: " << area << endl;
}