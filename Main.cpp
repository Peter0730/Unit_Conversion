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
		
			Length Length1;
			double result;
			int Length_cal_menu_flag;		
			do{
				Length_cal_menu();
				Length_cal_menu_flag = 0;
				cin >> Length1.Length_selection;
				switch (Length1.Length_selection)
				{
				case 1: //Km to Nmile
					cout << "Imput the data of Length(Km)" << endl;
					cin >> Length1.length_km;
					result = Length1.km_to_nmile(Length1.length_km);
					cout << setiosflags(ios::fixed) << setprecision(2);
					cout << "The result is:" << result << "" <<"nMile" << endl;
					break;

				case 2: //Nmile to Km
					cout << "Imput the data of Length(nMile)" << endl;
					cin >> Length1.length_nmile;
					result = Length1.nmile_to_km(Length1.length_nmile);
					cout << setiosflags(ios::fixed) << setprecision(2);
					cout << "The result is:" << result << "" << "Km" << endl;
					break;
				case 0: //Back
					Menu();
					break;
				default:
					cout << "You input a wrong function No." << endl;
					Length_cal_menu_flag = 1;

				}
			} while (Length_cal_menu_flag == 1);
			menu_flag = 1;
			break;


		case 2: //Height(Meter and Feet)

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