#include"AdmittingDate.h"
#include"DischargeDate.h"
#include"Person.h"
#include"Patient.h"
#include<iostream>
using namespace std;
int patient::no_of_patients = 0;
int patient::readPatientCount(){
	return no_of_patients;
}
void patient::addAdmissionDate(admit *admission_){
	admission = admission_;
}
void patient::removeAdmissionDate(){
	*admission = 0;
}
void patient::addDischargeDate(discharge *discharge__){
	discharge_ = discharge__;
}
void patient::removeDischargeDate(){
	*discharge_ = 0;
}
patient::~patient(){
	no_of_patients--;
	delete patientID;
	delete sickness;
	delete status;
	delete allergies;
}
void patient::setPatientID(char* patientID_){
	int size = 0;
	size = strlen(patientID_);
	patientID = new char[size + 1];
	strcpy_s(patientID, size + 1, patientID_);
}
void patient::setSickness(char* sickness_){
	int size = 0;
	size = strlen(sickness_);
	sickness = new char[size + 1];
	strcpy_s(sickness, size + 1, sickness_);
}
void patient::setStatus(char* status_){
	int size = 0;
	size = strlen(status_);
	status = new char[size + 1];
	strcpy_s(status, size + 1, status_);
}
void patient::setAllergies(char* allergies_){
	int size = 0;
	size = strlen(allergies_);
	allergies = new char[size + 1];
	strcpy_s(allergies, size + 1, allergies_);
}
patient::patient(char* patientID_, char* sickness_, char* status_, char* allergies_, char* fullname_, char* nic_, int age_, char* gender_, char* bloodType_, char* phoneNumber_, int h_no_, int streetNo_, char* area_):person(fullname_,nic_,age_,gender_,bloodType_,phoneNumber_,h_no_,streetNo_,area_){
	int size = 0;
	size = strlen(patientID_);
	patientID = new char[size + 1];
	strcpy_s(patientID, size + 1, patientID_);

	size = 0;
	size = strlen(sickness_);
	sickness = new char[size + 1];
	strcpy_s(sickness, size + 1, sickness_);

	size = 0;
	size = strlen(status_);
	status = new char[size + 1];
	strcpy_s(status, size + 1, status_);

	size = 0;
	size = strlen(allergies_);
	allergies = new char[size + 1];
	strcpy_s(allergies, size + 1, allergies_);

	no_of_patients++;
}
void patient::displayPatient(){
	cout << "**Patients Data**" << endl;
	displayPerson();
	cout << "PatientID is: " << patientID << endl;
	cout << "Sickness is: " << sickness << endl;
	cout << "Patient Allergy/Allergies is/are: " <<allergies<< endl;
	cout << "Patients Condition is: " << status<<endl;
}