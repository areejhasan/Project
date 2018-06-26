#include"Rooms.h"
#include"Beds.h"
#include<iostream>
using namespace std;
void rooms::setRoomNo(int roomNo_){
	roomNo = roomNo_;
}
int rooms::getRoomNo()const{
	return roomNo;
}
int rooms::no_of_rooms = 0;
int rooms::readRoomCount(){
	return no_of_rooms;
}
rooms::rooms(int roomNo_){
	roomNo = roomNo_;
	no_of_rooms++;
}
rooms::~rooms(){
	no_of_rooms--;
}
void rooms::addBeds(bed* beds_){
	beds = beds_;
}
void rooms::removeBeds(){
	*beds = 0;
}
void rooms::displayRooms(){
	cout << "Room number is: " << roomNo << endl;
	cout << "Current number of rooms are: " << no_of_rooms << endl;
}
