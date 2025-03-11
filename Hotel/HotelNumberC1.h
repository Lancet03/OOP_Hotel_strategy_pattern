#pragma once

#include "HotelNumber.h"

class HotelNumberC1 : public HotelNumber
{
	double basePrice = 50000.0;
public:
	double getBasePrice() override {
		return basePrice;
	};
};
