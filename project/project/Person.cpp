#include"Address.h"
#include"Person.h"
#include<iostream>
using namespace std;
void person::setFullName(char* fullname_){
	int size = 0;
	size = strlen(fullname_);
	fullname = new char[size + 1];
	strcpy_s(fullname, size + 1, fullname_);
}
void person::setNIC(char* nic_){
	int size = 0;
	size = strlen(nic_);
	nic = new char[size + 1];
	strcpy_s(nic, size + 1, nic_);
}
void person::setAge(int age_){
	age = age_;
}
void person::setGender(char* gender_){
	int size = 0;
	size = strlen(gender_);
	gender = new char[size + 1];
	strcpy_s(gender, size + 1, gender_);
}
void person::setBloodType(char* bloodType_){
	int size = 0;
	size = strlen(bloodType_);
	bloodType = new char[size + 1];
	strcpy_s(bloodType, size + 1, bloodType_);
}
void person::setPhoneNumber(char* phoneNumber_){
	int size = 0;
	size = strlen(phoneNumber_);
	phoneNumber = new char[size + 1];
	strcpy_s(phoneNumber, size + 1, phoneNumber_);
}
char *person::getFullName()const{
	return fullname;
}
char *person::getNIC()const{
	return nic;
}
int person::getAge()const{
	return age;
}
char *person::getBloodType()const{
	return bloodType;
}
char *person::getPhoneNumber()const{
	return phoneNumber;
}
char *person::getGender()const{
	return gender;
}
person::~person(){
	delete fullname;
	delete nic;
	delete bloodType;
	delete gender;
	delete phoneNumber;
}
person::person(char* fullname_, char* nic_, int age_, char* gender_, char* bloodType_, char* phoneNumber_, int h_no_, int streetNo_, char* area_):address(h_no_,streetNo_,area_){
	int size = 0;
	size = strlen(fullname_);
	fullname = new char[size + 1];
	strcpy_s(fullname, size + 1, fullname_);

	size = 0;
	size = strlen(nic_);
	nic = new char[size + 1];
	strcpy_s(nic, size + 1, nic_);

	age = age_;

	size = 0;
	size = strlen(bloodType_);
	bloodType = new char[size + 1];
	strcpy_s(bloodType, size + 1, bloodType_);

	size = 0;
	size = strlen(phoneNumber_);
	phoneNumber = new char[size + 1];
	strcpy_s(phoneNumber, size + 1, phoneNumber_);

	size = 0;
	size = strlen(gender_);
	gender = new char[size + 1];
	strcpy_s(gender, size + 1, gender_);
}
void person::displayPerson(){
	cout << "Full name is: " << fullname << endl;
	cout << "NIC is: " << nic << endl;
	cout << "Age is: " << age << endl;
	cout << "Gender is: " << gender << endl;
	cout << "Blood Type is: " << bloodType << endl;
	cout << "Phone Number is: " << phoneNumber << endl;
	displayAddress();
}