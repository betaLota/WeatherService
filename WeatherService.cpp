// WeatherService.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "JsonService.h"
#include "XmlService.h"

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

	std::cout << 1;
}
.
