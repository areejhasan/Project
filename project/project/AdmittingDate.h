#include"Date.h"
#pragma once
class admit:public date{
public:
	void displayDate();
	bool is_valid_admit();
	admit(int=0,int=0,int=0);
	~admit();
};