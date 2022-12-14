#pragma once


/***************************************/ 
/*               Length                */
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
/*               Height                */
/***************************************/
class Height
{
public:
	int Height_selection;
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

/***************************************/
/*               Speed                 */
/***************************************/

//Define the class of Speed
class Speed
{
public:
	int Speed_selection;
	double Speed_Kph;
	double Speed_Kts;
	double Kph_to_Knots(double Speed_Kph);
	double Knots_to_Kph(double Speed_Kts);
};

//Speed Trans Fuction
double Speed::Kph_to_Knots(double Speed_Kph)
{
	return Speed_Kph*0.5399568;
}

double Speed::Knots_to_Kph(double Speed_Kts)
{
	return Speed_Kts/0.5399568;
}

/***************************************/
/*             Temperature             */
/***************************************/

//Define the class of Temperature
class Temperature
{
public:
	int Temp_selection;
	double Temp_Celsius;
	double Temp_Fahrenheit;
	double Celsius_to_Fahrenheit(double Temp_Celsius);
	double Fahrenheit_to_Celsius(double Temp_Fahrenheit);
};

//Temperature Trans Fuction
double Temperature::Celsius_to_Fahrenheit(double Temp_Celsius)
{
	return Temp_Celsius*1.8+32;
}

double Temperature::Fahrenheit_to_Celsius(double Temp_Fahrenheit)
{
	return (Temp_Fahrenheit-32)/1.8;
}