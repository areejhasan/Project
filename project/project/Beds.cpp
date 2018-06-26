#include"Beds.h"
#include<iostream>
using namespace std;
void bed::setBedNo(int bedNo_){
	bedNo = bedNo_;
}
int bed::getBedNo()const{
	return bedNo;
}
bed::bed(int bedNo_){
	bedNo = bedNo_;
	no_of_Beds++;
}
bed::~bed(){
	no_of_Beds--;
}
int bed::no_of_Beds = 0;
int bed::readBedCount(){
	return no_of_Beds;
}
void bed::displayBed(){
	cout << "Bed no is: " << bedNo << endl;
	cout << "Current number of beds are: " << no_of_Beds << endl;
}
