#ifndef TEAM
#define TEAM
#include <vector>
#include <string>

class team {
public:
	int attack, midfield, defense, overall, played, wins, draws, losses = 0;
	std::string team_name;

	
	team(std::string tn, int att, int mid, int def, int ove);
	bool operator< (const team &other) const;

};

#endif