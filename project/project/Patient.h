#include"AdmittingDate.h"
#include"DischargeDate.h"
#include"Person.h"
#pragma once
class patient :public admit, public discharge, public person{
	char* patientID;
	char* sickness;
	char* status;
	char* allergies;
	admit *admission;
	discharge *discharge_;
public:
	void setPatientID(char*);
	char *getPatientID()const;
	void setSickness(char*);
	char *getSickness()const;
	void setStatus(char*);
	char* getStatus()const;
	void setAllergies(char*);
	char* getAllergies()const;
	void addAdmissionDate(admit*);
	void removeAdmissionDate();
	void addDischargeDate(discharge*);
	void removeDischargeDate();
	static int no_of_patients;
	static int readPatientCount();
	void displayPatient();
	~patient();
	patient(char* = nullptr, char* = nullptr, char* = nullptr, char* = nullptr,
		char* = nullptr, char* = nullptr, int = 0, char* = nullptr, char* = nullptr,
		char* = nullptr, int = 0, int = 0, char* = nullptr);
};