#include"AdmittingDate.h"
#include"BillingSystem.h"
#include"Address.h"
#include"Date.h"
#include"Patient.h"
#include"Staff.h"
#include"Person.h"
#include"DischargeDate.h"
#include"Beds.h"
#include"Rooms.h"
#include <iostream>
using namespace std;
int main()
{
	int option = 0;
	bool flag = true;


	cout << "To exit the code at any time enter 3" << endl;
	cout << "For patient data enter 1" << endl;
	cout << "For staff data enter 2" << endl<<endl;
	while (1)
	{
		cout << endl;
		cout << "Enter your option: " << endl;
		cin >> option;
		cout << endl;
		if (option == 1)
		{
			patient p1("10-11111-51", "Cancer", "Critical", "None", "Ahmad Raza", "xxxxxxxxx", 26, "Male", "O", "0345892545", 94, 12, "DHA");
			rooms r1(1);
			bed b1(2);
			r1.addBeds(&b1);
			admit p_1(12, 12, 2014);
			p1.addAdmissionDate(&p_1);
			flag = p_1.is_valid_admit();
			if (flag == true)
			{
				p_1.displayDate();
			}
			else{
				cout << "Invalid date" << endl;
				break;
			}
			discharge p__1(9, 1, 2015);
			p1.addDischargeDate(&p__1);
			flag = p__1.is_valid_discharge();
			if (flag == true)
			{
				p1.displayPatient();
				r1.displayRooms();
				b1.displayBed();
				p__1.displayDate();
				bill b1("Cash", 120050);
				b1.displayBill();
			}
			else{
				cout << "Invalid date" << endl;
				break;
			}
		}
		else if (option == 3)
		{
			goto jump;
		}
		
		if (option == 2){
			staff s1("11597877-1", "Radiology Department", "PHD in radiology", "9AM to 6PM", "Chemo-Therapy", 10,120000, "Noshahi Khan", "xxxxxxxxxx", 45, "Male", "B", "03459899945", 9, 59, "PCSIR", 9, 8, 1995);
			flag = s1.is_valid_date();
			if (flag == true)
			{
				s1.displayStaff();
			}
			else{
				cout << "Invalid date" << endl;
				break;
			}
		}
		else if (option == 3){
			goto jump;
		}


		jump:if (option == 3){
			cout << "You have now exited" << endl;
			break;
		}
	}
}