#pragma once
class date{
	int month;
	int day;
	int year;
public:
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth()const;
	int getDay()const;
	int getYear()const;
	bool is_valid_date();
	date(int = 0, int = 0, int = 0);
	~date();
	virtual void displayDate()=0;
	date(const date&other);
	void operator=(const date&other);
	
};