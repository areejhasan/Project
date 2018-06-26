#include"Beds.h"
#pragma once
class rooms{
	int roomNo;
	bed *beds;
public:
	void addBeds(bed*);
	void removeBeds();
	rooms(int = 0);
	~rooms();
	void setRoomNo(int);
	int getRoomNo()const;
	void displayRooms();
	static int no_of_rooms;
	static int readRoomCount();
};