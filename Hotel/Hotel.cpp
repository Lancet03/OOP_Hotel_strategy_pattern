#include <iostream>
#include <vector>
#include "HotelNumber.h"
#include "Rooms.h"
#include "RoomsC1.h"
#include "RoomsC2.h"
#include "RoomsC3.h"
#include "RoomsC4.h"
#include "SaleNormalSeason.h"
#include "SaleNoSeason.h"
#include "SaleTouristPeak.h"
#include "SaleSeason.h"
#include "ViewFromWindow.h"
#include "ViewNotOnSea.h"
#include "ViewOnSea.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	vector<HotelNumber> numbers;
	
	SaleNoSeason* saleNoSeason = new SaleNoSeason();
	SaleNormalSeason* saleNormalSeason = new SaleNormalSeason();
	SaleTouristPeak* saleTouristPeak = new SaleTouristPeak();

	ViewNotOnSea* viewNoSea = new ViewNotOnSea();
	ViewOnSea* viewOnSez = new ViewOnSea();

	

	cout << "Расчёт стоимости номера!\n";

	int Seasons;
	bool isseason = false;
	SaleSeason* season;

	while (!isseason) {
		cout << "Выберите сезон: 1-Туристический, 2-Обычный, 3-Не сезон.\n";

		std::cin >> Seasons;

		switch (Seasons)
		{
		case 1:
			season = new SaleTouristPeak();
			isseason = true;
			break;
		case 2:
			season = new SaleNormalSeason();
			isseason = true;
			break;
		case 3:
			season = new SaleNoSeason();
			isseason = true;
			break;
		default:
			std::cout << "Неверный сезон!!!\n";
			break;
		}
	}

	int type;
	int viewWindow;
	

	while (true)
	{

		std::cout << "Выберите тип номера: 4-Standart, 3-Standart+, 2-Comfort, 1-Lux.\n";
		std::cin >> type;

		switch (type)
		{
		case 4:

			break;
		case 3:

			break;
		case 2:

			break;
		case 1:

			break;
		default:
			cout << "Неверный тип комнаты!!!\n";
			break;
		}


		cout << "Выберите вид из номера: 0-Без моря, 1-На море.\n";
		cin >> viewWindow;

		switch (viewWindow)
		{
		case 0:

			break;
		case 1:

			break;
		default:
			cout << "Неверный тип вида!!!\n";
			break;
		}
	}
}
