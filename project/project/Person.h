#include"Address.h"
#pragma once
class person:public address{
	char* fullname;
	char* nic;
	int age;
	char* gender;
	char* bloodType;
	char* phoneNumber;
public:
	~person();
	void setFullName(char*);
	char *getFullName()const;
	void setNIC(char*);
	char *getNIC()const;
	void setAge(int);
	int getAge()const;
	void setGender(char*);
	char *getGender()const;
	void setPhoneNumber(char*);
	char *getPhoneNumber()const;
	void setBloodType(char*);
	char *getBloodType()const;
	void displayPerson();
	person(char* = nullptr, char* = nullptr, int = 0, char* = nullptr, char* = nullptr, char* = nullptr, int = 0, int = 0, char* = nullptr);
	///////full name////////NIC//////////////Age//////Gender///Blood Type///////Phone Number/////////////HouseNo//StreetNo//Area////////////
};