#include "stdafx.h"
#include "location.h"

GPS::Location::Location(const std::string name, const Latitude latitude, const Longitude longitude)
{
}

GPS::Latitude GPS::Location::get_lat() const
{
	return latitude_;
}

GPS::Longitude GPS::Location::get_long() const
{
	return longitude_;
}
