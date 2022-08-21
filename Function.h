#pragma once

#include<iostream>
#include<iomanip>
#include"Class.h"

using namespace std;

void Menu()
{
	cout << "**********************************" << endl;
	cout << "| 1. Length(km and nMile)        |" << endl;
	cout << "| 2. Height(Meter and Feet)      |" << endl;
	cout << "| 3. Speed(km/h and kts)         |" << endl;
	cout << "| 4. Temperature(C to F)         |" << endl;
	cout << "| 5. Version_Info                |" << endl;
	cout << "| 6. Manual                      |" << endl;
	cout << "| 0. Exit                        |" << endl;
	cout << "**********************************" << endl;
}

void Version_Info()
{
	cout << "Version: V1.0" << endl;
}

void Manual()
{
	cout << "114514 1919810" << endl;
}

void Length_cal_menu()
{
	cout << "**********************************" << endl;
	cout << "| 1. Km to Nmile                 |" << endl;
	cout << "| 2. Nmile to Km                 |" << endl;
	cout << "| 0. Back                        |" << endl;
	cout << "**********************************" << endl;
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
			system("pause");
			cout << "" << endl;
			cout << "" << endl;
			break;

		case 2: //Nmile to Km
			cout << "Imput the data of Length(nMile)" << endl;
			cin >> Length1.length_nmile;
			result = Length1.nmile_to_km(Length1.length_nmile);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "Km" << endl;
			system("pause");
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
			system("pause");
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 2: //Feet to Meter
			cout << "Input the data of Height(Feet)" << endl;
			cin >> Height1.height_feet;
			result = Height1.feet_to_meter(Height1.height_feet);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "M" << endl;
			system("pause");
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

void Speed_cal_menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Kph to Knots                |" << std::endl;
	std::cout << "| 2. Knots to Kph                |" << std::endl;
	std::cout << "| 0. Back                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}
void Speed_cal()
{
	Speed Speed1;
	double result;
	int Speed_cal_menu_flag;
	do {
		Speed_cal_menu();
		Speed_cal_menu_flag = 0;
		cin >> Speed1.Speed_selection;
		switch (Speed1.Speed_selection)
		{
		case 1: //Kph to Knots
			cout << "Input the data of Speed(Kph)" << endl;
			cin >> Speed1.Speed_Kph;
			result = Speed1.Kph_to_Knots(Speed1.Speed_Kph);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "Knots" << endl;
			system("pause");
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 2: //Knots to Kph
			cout << "Input the data of Speed(Knots)" << endl;
			cin >> Speed1.Speed_Kts;
			result = Speed1.Knots_to_Kph(Speed1.Speed_Kts);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "Kph" << endl;
			system("pause");
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
			Speed_cal_menu_flag = 1;
		}

	} while (Speed_cal_menu_flag == 1);
}

void Temp_cal_menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. C to F                      |" << std::endl;
	std::cout << "| 2. F to C                      |" << std::endl;
	std::cout << "| 0. Back                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}
void Temp_cal()
{
	Temperature Temp1;
	double result;
	int Temp_cal_menu_flag;
	do {
		Temp_cal_menu();
		Temp_cal_menu_flag = 0;
		cin >> Temp1.Temp_selection;
		switch (Temp1.Temp_selection)
		{
		case 1: //C to F
			cout << "Input the data of Temperature(C)" << endl;
			cin >> Temp1.Temp_Celsius;
			result = Temp1.Celsius_to_Fahrenheit(Temp1.Temp_Celsius);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "F" << endl;
			system("pause");
			cout << "" << endl;
			cout << "" << endl;
			break;
		case 2: //F to C
			cout << "Input the data of Temperature(F)" << endl;
			cin >> Temp1.Temp_Fahrenheit;
			result =Temp1.Fahrenheit_to_Celsius(Temp1.Temp_Fahrenheit);
			cout << setiosflags(ios::fixed) << setprecision(2);
			cout << "The result is:" << result << "" << "C" << endl;
			system("pause");
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
			Temp_cal_menu_flag = 1;
		}

	} while (Temp_cal_menu_flag == 1);
}