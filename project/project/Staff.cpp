#include"Date.h"
#include"Person.h"
#include"Staff.h"
#include<iostream>
using namespace std;
int staff::no_of_staff = 0;
int staff::readStaffCount(){
	return no_of_staff;
}
void staff::setStaffID(char* staffID_){
	int size = 0;
	size = strlen(staffID_);
	staffID = new char[size + 1];
	strcpy_s(staffID, size + 1, staffID_);
}
void staff::setDepartment(char* department_){
	int size = 0;
	size = strlen(department_);
	department= new char[size + 1];
	strcpy_s(department, size + 1, department_);
}
void staff::setEducation(char* education_){
	int size = 0;
	size = strlen(education_);
	education = new char[size + 1];
	strcpy_s(education, size + 1, education_);
}
void staff::setWorkingHours(char* Workinghours_){
	int size = 0;
	size = strlen(Workinghours_);
	Workinghours = new char[size + 1];
	strcpy_s(Workinghours, size + 1, Workinghours_);
}
void staff::setAreaOfExpertise(char* areaOfExpertise_){
	int size = 0;
	size = strlen(areaOfExpertise_);
	areaOfExpertise = new char[size + 1];
	strcpy_s(areaOfExpertise, size + 1, areaOfExpertise_);
}
void staff::setExperience(int experience_) {
	experience = experience_;
}
void staff::setSalary(int salary_){
	salary = salary_;
}
char *staff::getStaffID()const{
	return staffID;
}
char *staff::getDepartment()const{
	return department;
}
char *staff::getEducation()const{
	return education;
}
char *staff::getWorkingHours()const{
	return Workinghours;
}
char *staff::getAreaOfExpertise()const{
	return areaOfExpertise;
}
int staff::getExperience()const{
	return experience;
}
int staff::getSalary()const{
	return salary;
}
staff::~staff(){
	delete staffID;
	delete department;
	delete education;
	delete Workinghours;
	delete areaOfExpertise;
	no_of_staff--;
}
staff::staff(char* staffID_, char* department_, char* education_, char* Workinghours_, char* areaOfExpertise_, int experience_,int salary_, char* fullname_, char* nic_, int age_, char* gender_, char* bloodType_, char* phoneNumber_, int h_no_, int streetNo_, char* area_, int day_, int month_, int year_) :person(fullname_, nic_, age_, gender_, bloodType_, phoneNumber_, h_no_, streetNo_, area_), date(day_, month_, year_){
	no_of_staff++;
	salary = salary_;
	experience = experience_;
	int size = 0;
	size = strlen(staffID_);
	staffID = new char[size + 1];
	strcpy_s(staffID, size + 1, staffID_);

	size = 0;
	size = strlen(department_);
	department = new char[size + 1];
	strcpy_s(department, size + 1, department_);

	size = 0;
	size = strlen(education_);
	education = new char[size + 1];
	strcpy_s(education, size + 1, education_);

	size = 0;
	size = strlen(Workinghours_);
	Workinghours = new char[size + 1];
	strcpy_s(Workinghours, size + 1, Workinghours_);

	size = 0;
	size = strlen(areaOfExpertise_);
	areaOfExpertise = new char[size + 1];
	strcpy_s(areaOfExpertise, size + 1, areaOfExpertise_);
}
void staff::displayDate(){
	cout << "Date of joining: " << getDay() << " " << getMonth() << " " << getYear() << endl;
}
void staff::displayStaff(){
	cout << "**Staff Data**" << endl;
	displayPerson();
	displayDate();
	cout << "Staff ID is: " << staffID << endl;
	cout << "Department is: " << department << endl;
	cout << "Education is: " << education << endl;
	cout << "Working hours are: " << Workinghours << endl;
	cout << "Area of expertise is: " << areaOfExpertise << endl;
	cout << "Salary is: " << salary << endl;
}