#include "Team.h"



team::team(std::string tn, int att, int mid, int def, int ove)
{
	team_name = tn;
	attack = att;
	midfield = mid;
	defense = def;
	overall = ove;
};



bool team::operator< (const team &other) const {
	return overall < other.overall;
};

bool team::operator> (const team &other) const {
	return overall > other.overall;
};



