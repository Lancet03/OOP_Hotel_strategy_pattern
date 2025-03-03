#pragma once
#include "SaleSeason.h"
#include "ViewFromWindow.h"
#include "Rooms.h"

class HotelNumber
{
	Rooms* room;
	SaleSeason* saleSeason;
	ViewFromWindow* viewFromWindow;
public:
	HotelNumber();

	double GetRoomPrice() {
		return room->Price();
	};
	double GetSalesCoef() { return saleSeason->GetCoef(); };
	double GetViewCoef() { return viewFromWindow->GetCoef(); };

	void SetSaleSeason(SaleSeason* saleSeason) {
		this->saleSeason = saleSeason;
	};
	void SetViewFromWindow(ViewFromWindow* viewFromWindow) { this->viewFromWindow = viewFromWindow; };
	void SetRoomType(Rooms* room) { this->room = room; };
};

