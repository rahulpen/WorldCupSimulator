#ifndef TEAM_H
#define TEAM_H
#include <vector>
#include <string>

class Team {
	public:
	int attack, midfield, defense, played, wins, draws, losses, goals = 0;
	std::string team_name;
	
	Team(std::string tn, int att, int mid, int def);
	Team(const Team & t1);
	~Team();
	bool operator< (const Team& other) const;
	bool operator> (const Team& other) const;

};

#endif //TEAM_H