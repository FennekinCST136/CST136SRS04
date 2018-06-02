#pragma once
#include "stdafx.h"
#include <string>
#include "longitude.h"
#include "latitude.h"

namespace GPS
{
	class Location
	{
	private:
		const std::string name_;
		const Latitude latitude_;
		const Longitude longitude_;

	public:
		Location(const std::string name, const Latitude latitude, const Longitude longitude);
		Latitude get_lat() const;
		Longitude get_long() const;
	};
}
