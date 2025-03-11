#include <iostream>
#include <vector>
#include "HotelNumber.h"
#include "HotelNumberC1.h"
#include "HotelNumberC2.h"
#include "HotelNumberC3.h"
#include "HotelNumberC4.h"
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

	vector<HotelNumber*> numbers;

	SaleNoSeason* saleNoSeason = new SaleNoSeason();
	SaleNormalSeason* saleNormalSeason = new SaleNormalSeason();
	SaleTouristPeak* saleTouristPeak = new SaleTouristPeak();

	ViewNotOnSea* viewNoSea = new ViewNotOnSea();
	ViewOnSea* viewOnSea = new ViewOnSea();

	cout << "Расчёт стоимости номера!\n";

	bool endInput = false;


	int type;

	while (!endInput) {
		bool numberSelected = false;
		while (!numberSelected) {
			std::cout << "Выберите тип номера: 4-Standart, 3-Standart+, 2-Comfort, 1-Lux.\n";
			std::cin >> type;

			switch (type)
			{
			case 4:
			{
				numbers.push_back(new HotelNumberC4());
				numberSelected = true;
				break;
			}
			case 3:
			{
				numbers.push_back(new HotelNumberC3());
				numberSelected = true;
				break;
			}
			case 2:
			{
				numbers.push_back(new HotelNumberC2());
				numberSelected = true;
				break;
			}
			case 1:
			{
				numbers.push_back(new HotelNumberC1());
				numberSelected = true;
				break;
			}
			default:
			{
				cout << "Неверный тип комнаты!!!\n";
				break;
			}
			}
		}
		HotelNumber* lastAddedNumber = numbers[numbers.size() - 1];

		int Seasons;
		bool isSeason = false;
		while (!isSeason) {
			cout << "Выберите сезон: 1-Туристический, 2-Обычный, 3-Не сезон.\n";

			std::cin >> Seasons;

			switch (Seasons)
			{
			case 1:
			{
				lastAddedNumber->SetSaleSeason(saleTouristPeak);
				isSeason = true;
				break;
			}
			case 2:
			{
				lastAddedNumber->SetSaleSeason(saleNormalSeason);
				isSeason = true;
				break;
			}
			case 3:
			{
				lastAddedNumber->SetSaleSeason(saleNoSeason);
				isSeason = true;
				break;
			}
			default:
			{
				std::cout << "Неверный сезон!!!\n";
				break;
			}
			}
		}

		bool viewFromWindowSelected = false;
		int viewWindow;

		while (!viewFromWindowSelected) {
			std::cout << "Выберите вид из номера: 0-Без моря, 1-На море.\n";
			std::cin >> viewWindow;

			switch (viewWindow)
			{
			case 0:
			{
				lastAddedNumber->SetViewFromWindow(viewNoSea);
				viewFromWindowSelected = true;
				break;
			}
			case 1:
			{
				lastAddedNumber->SetViewFromWindow(viewOnSea);
				viewFromWindowSelected = true;
				break;
			}
			default:
			{
				cout << "Неверный тип вида!!!\n";
				break;
			}
			}
		}

		int continueInput;
		std::cout << "Если хотите добавить ещё номер нажмите 1. Если хотите закончить вввод - любое другое чилос\n";
		std::cin >> continueInput;
		if (continueInput != 1) {
			endInput = true;
		}
	}

	

	for (int i = 0; i < numbers.size(); i++) {
		std::cout << "Стоимость номера " << i + 1 << " = " << numbers[i]->GetRoomPrice() << std::endl;
	}
}
