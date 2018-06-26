#pragma once
class bill{
	char* paymentType;
	float totalBill;
public:
	void setPaymentType(char*);
	void setTotalBill(float);
	char *getPaymentType()const;
	float getTotalBill()const;
	bill(char* = nullptr, float=0);
	~bill();
	void displayBill();
};