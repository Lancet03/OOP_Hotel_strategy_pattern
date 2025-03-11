#pragma once

#include "HotelNumber.h"

class HotelNumberC4 : public HotelNumber
{
	double basePrice = 5000.0;
public:
	double getBasePrice() override {
		return basePrice;
	};
};
