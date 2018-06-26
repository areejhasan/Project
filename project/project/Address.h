#pragma once 
class address{
	int h_no;
	int streetNo;
	char *area;
public:
	void setH_no(int);
	void setStreetNo(int);
	void setArea(char*);
	int getH_no()const;
	int getStreetNo()const;
	char *getArea()const;
	address(int = 0, int = 0,char* =nullptr);
	address(const address&other);
	void operator=(const address&other);
	void displayAddress();
	~address();
};