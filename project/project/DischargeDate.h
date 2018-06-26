#include"Date.h"
#pragma once
class discharge :public date{
public:
	void displayDate();
	bool is_valid_discharge();
	discharge(int =0,int=0,int=0);
	~discharge();
};