#include"BillingSystem.h"
#include<iostream>
using namespace std;
void bill::setPaymentType(char* paymentType_){
	int size = 0;
	size = strlen(paymentType_);
	paymentType = new char[size + 1];
	strcpy_s(paymentType, size + 1, paymentType_);
}
void bill::setTotalBill(float totalBill_){
	totalBill = totalBill_;
}
char *bill::getPaymentType()const{
	return paymentType;
}
float bill::getTotalBill()const{
	return totalBill;
}
bill::~bill(){
	delete paymentType;
}
bill::bill(char* paymentType_, float totalBill_){
	int size = 0;
	size = strlen(paymentType_);
	paymentType = new char[size + 1];
	strcpy_s(paymentType, size + 1, paymentType_);

	totalBill = totalBill_;
}
void bill::displayBill(){
	cout << "Billing Type is: " << paymentType << endl;
	cout << "Total bill is: " << totalBill << endl;
}