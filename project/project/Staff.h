#include"Person.h"
#include"Date.h"
#pragma once
class staff :public person, public date{
	char* staffID;
	char* department;
	char* education;
	char* Workinghours;
	char* areaOfExpertise;
	int experience;
	int salary;
public:
	static int no_of_staff;
	static int readStaffCount();
	void setSalary(int);
	void setStaffID(char*);
	void setDepartment(char*);
	void setEducation(char*);
	void setWorkingHours(char*);
	void setAreaOfExpertise(char*);
	void setExperience(int);
	char *getStaffID()const;
	char *getDepartment()const;
	char *getEducation()const;
	char *getWorkingHours()const;
	char *getAreaOfExpertise()const;
	int getExperience()const;
	int getSalary()const;
	void displayStaff();
	void displayDate();
	~staff();
	staff(char* = nullptr, char* = nullptr, char* = nullptr, char* = nullptr,
		char* = nullptr, int = 0,int=0,char* = nullptr, char* = nullptr, int = 0,
		char* = nullptr, char* = nullptr, char* = nullptr, int = 0, int = 0, 
		char* = nullptr, int = 0, int = 0, int = 0);
};