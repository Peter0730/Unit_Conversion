#pragma once

#include<iostream>
#include<iomanip>
#include"Class.h"

using namespace std;

void Menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Length(km and nMile)        |" << std::endl;
	std::cout << "| 2. Height(Meter and Feet)      |" << std::endl;
	std::cout << "| 3. Speed(km/h and kts)         |" << std::endl;
	std::cout << "| 4. Temperature(C to F)         |" << std::endl;
	std::cout << "| 5. Version_Info                |" << std::endl;
	std::cout << "| 6. Manual                      |" << std::endl;
	std::cout << "| 0. Exit                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}

void Length_cal_menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Km to Nmile                 |" << std::endl;
	std::cout << "| 2. Nmile to Km                 |" << std::endl;
	std::cout << "| 0. Back                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}

void Length_cal()
{
	Length Length1;
	double result;
	int Length_cal_menu_flag;
	do {
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
			cout << "The result is:" << result << "" << "nMile" << endl;
			cout << "" << endl;
			cout << "" << endl;
			break;

		case 2: //Nmile to Km
			cout << "Imput the data of Length(nMile)" << endl;
			cin >> Length1.length_nmile;
			result = Length1.nmile_to_km(Length1.length_nmile);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "Km" << endl;
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 0: //Back
			//Menu();
			cout << "" << endl;
			cout << "" << endl;
			break;
		default:
			cout << "You input a wrong function No." << endl;
			cout << "" << endl;
			cout << "" << endl;
			Length_cal_menu_flag = 1;

		}

	} while (Length_cal_menu_flag == 1);
}

void Height_cal_menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Meter to Feet               |" << std::endl;
	std::cout << "| 2. Feet to Meter               |" << std::endl;
	std::cout << "| 0. Back                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}

void Height_cal()
{
	Height Height1;
	double result;
	int Height_cal_menu_flag;
	do {
		Height_cal_menu();
		Height_cal_menu_flag = 0;
		cin >> Height1.Height_selection;
		switch (Height1.Height_selection)
		{
		case 1: //Meter to Feet
			cout << "Input the data of Height(Meter)" << endl;
			cin >> Height1.height_meter;
			result = Height1.meter_to_feet(Height1.height_meter);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "Ft" << endl;
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 2: //Feet to Meter
			cout << "Input the data of Height(Feet)" << endl;
			cin >> Height1.height_feet;
			result = Height1.feet_to_meter(Height1.height_feet);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "M" << endl;
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 0:
			cout << "" << endl;
			cout << "" << endl;
			break;
		default:
			cout << "You input a wrong function No." << endl;
			cout << "" << endl;
			cout << "" << endl;
			Height_cal_menu_flag = 1;
		}

	} while (Height_cal_menu_flag == 1);
}


void Version_Info()
{
	std::cout << "Version: V1.0" << std::endl;
}

void Manual()
{

}