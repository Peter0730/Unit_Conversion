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
	//int Length_cal_flag;
	//Length Length1;
	//double result;
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Km to Nmile                 |" << std::endl;
	std::cout << "| 2. Nmile to Km                 |" << std::endl;
	std::cout << "| 0. Back                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}


void Version_Info()
{
	std::cout << "Version: V1.0" << std::endl;
}

void Manual()
{

}