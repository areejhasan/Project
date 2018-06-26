#pragma once
class bed{
	int bedNo;
public:
	bed(int =0);
	~bed();
	void setBedNo(int);
	int getBedNo()const;
	static int no_of_Beds;
	static int readBedCount();
	void displayBed();
};