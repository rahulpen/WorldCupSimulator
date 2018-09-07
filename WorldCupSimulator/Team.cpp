#include "Team.h"



bool team::operator< (const team &other) const {
	return total < other.total;
};



