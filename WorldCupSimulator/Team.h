#ifndef TEAM
#define TEAM
#include <vector>
#include "Player.h"

class team {
public:
	int attack;
	int defense;
	int passing;
	int momentum;
	int tactics;
	int total;
	int team_id;
	std::vector<player> players;
private:
	bool operator< (const team &other) const;
};

#endif