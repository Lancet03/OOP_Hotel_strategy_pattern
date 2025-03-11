#pragma once

#include "HotelNumber.h"

class HotelNumberC3 : public HotelNumber
{
	double basePrice = 10000.0;
public:
	double getBasePrice() override {
		return basePrice;
	};
};

