// WeatherService.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "JsonService.h"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	std::cout << 1;
}
