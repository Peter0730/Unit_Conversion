#include <iostream>
#include<iomanip>
#include"Function.h"
#include"Class.h"

using namespace std;

// Main Function
int main()
{
	int selection;
	int menu_flag;



	do
	{
		Menu();
		cout << "Please input the function No." << endl;
		cin >> selection;

		switch (selection)
		{
		case 1: //Length(km and nMile)
		
			Length_cal();
			menu_flag = 1;
			break;


		case 2: //Height(Meter and Feet)
			Height_cal();
			menu_flag = 1;
			break;

		case 3: //Speed(km/h and kts)  
		
			break;

		case 4: //Temperature(C to F)  

			break;
	
		case 5: //Version_Info
			Version_Info();
			break;

		case 6: //Manual    
			Manual();
			break;

		case 0: //Exit 
			system("pause");
			return 0;

			break;
		default:
			cout << "You input a wrong function No." << endl;
			menu_flag = 1;

		}
	} while (menu_flag==1);
}