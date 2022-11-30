#include <stdio.h>
#include <string>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	std::list<const char*>Station{ "Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamchi","Shinagawa","Osaki","Gotanda","Meguro","Ebisu","Shibuya",
		"Harajuku","Yoyogi","Shinjuki","Shin-Okubo","Takadanobaba","Mejiro","Ikebukuro","Otsuka","Sugamo","Komagome","Tabata","Nippori",
		"Uguisudani","Ueno","Okachimachi","Akihabara","Kanda\n" };

	Station.push_front("1970”N\n");
	for (std::list < const char* > ::iterator itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "Nippori")
		{
			itr = Station.insert(itr, "Nishi - Nippori");
			++itr;
		}
		std::cout << *itr << " ";
	}
	printf("----------------------------\n");

	Station.pop_front();
	Station.push_front("2019”N\n");
	for (std::list < const char* > ::iterator itr = Station.begin(); itr != Station.end(); ++itr)
	{
		if (*itr == "Shinagawa")
		{
			itr = Station.insert(itr, "Takanawa-Gateway");
			++itr;
		}
		std::cout << *itr << " ";
	}
	printf("----------------------------\n");

	Station.pop_front();
	Station.push_front("2022”N\n");
	for (auto itr = Station.begin(); itr != Station.end(); ++itr)
	{
		std::cout << *itr << " ";
	}
	printf("----------------------------\n");

	return 0;
}