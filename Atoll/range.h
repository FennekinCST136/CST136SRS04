#pragma once
#include <limits>
#include <string>


template<typename T, T min, T max>
class Range // You should re-code and simplify your SRS01 RangeInt
{
private:
	using value_type = T;

	value_type lower_bound_{ std::numeric_limits<value_type>::min() };
	value_type upper_bound_{ std::numeric_limits<value_type>::max() };
	value_type value_{ std::numeric_limits<value_type>::max() };



public:
	Range(value_type const value)
	{
		static_assert (value >= lower_bound_ && value < upper_bound_);
		value_ = value;
	}

	value_type get_value() const noexcept
	{
		return value_;
	}
};
