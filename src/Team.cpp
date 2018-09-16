#include "Team.h"



Team::Team(std::string tn, int att, int mid, int def)
{
	team_name = tn;
	attack = att;
	midfield = mid;
	defense = def;
};

Team::Team(const Team & t1) {
	team_name = t1.team_name;
	attack = t1.attack;
	midfield = t1.midfield;
	defense = t1.defense;
	played = t1.played;
	wins = t1.wins;
	draws = t1.draws;
	losses = t1.losses;
	goals = t1.goals;
	team_name = t1.team_name;
}

Team::~Team() {
	
}

bool Team::operator< (const Team &other) const {
	// FIX
	return false;
};

bool Team::operator> (const Team &other) const {
	// FIX
	return false;
};



