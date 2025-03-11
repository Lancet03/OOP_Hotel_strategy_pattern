#pragma once

#include "HotelNumber.h"

class HotelNumberC2 : public HotelNumber
{
	double basePrice = 20000.0;
public:
	double getBasePrice() override {
		return basePrice;
	};
};
