#pragma once


/***************************************/ 
/*          Length Function            */
/***************************************/

//Define the class of Length
class Length
{
public:
	int Length_selection;
	double length_km;
	double length_nmile;
	double km_to_nmile(double length_km);
	double nmile_to_km(double length_nmile);
};

//Define the function km_to_nmile
double Length::km_to_nmile(double length_km)
{
	return length_km *0.54;
}

//Define the function nmile_to_km

double Length::nmile_to_km(double length_nmile)
{
	return length_nmile / 0.54;
}

/***************************************/
/*          Height Function            */
/***************************************/
class Height
{
public:
	double height_meter;
	double height_feet;
	double feet_to_meter(double height_feet);
	double meter_to_feet(double height_meter);
};
//Define the Height

//Height Trans Fuction
double Height::feet_to_meter(double height_feet)
{
	return height_feet / 3.3333333;
}

double Height::meter_to_feet(double height_meter)
{
	return height_meter * 3.333333;
}



