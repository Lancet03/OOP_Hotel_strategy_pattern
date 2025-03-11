#pragma once
#include "SaleSeason.h"
#include "ViewFromWindow.h"

class HotelNumber
{
	double basePrice;
	SaleSeason* saleSeason;
	ViewFromWindow* viewFromWindow;

	virtual double getBasePrice() = 0;
public:
	double GetRoomPrice() {
		return this->getBasePrice() * this->GetSalesCoef() * this->GetViewCoef();
	};
	double GetSalesCoef() { return saleSeason->GetCoef(); };
	double GetViewCoef() { return viewFromWindow->GetCoef(); };

	void SetSaleSeason(SaleSeason* saleSeason) {
		this->saleSeason = saleSeason;
	};
	void SetViewFromWindow(ViewFromWindow* viewFromWindow) { this->viewFromWindow = viewFromWindow; };
};

