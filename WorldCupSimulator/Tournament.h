#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <vector>
#include <iostream>
#include "Team.h"
#include <random>


class Tournament{
	std::random_device device;
	std::default_random_engine engine{ device() };

	std::vector<Team> group_A;
	std::vector<Team> group_B;
	std::vector<Team> group_C;
	std::vector<Team> group_D;
	std::vector<Team> group_E;
	std::vector<Team> group_F;
	std::vector<Team> group_G;
	std::vector<Team> group_H;

	std::vector<Team> round_of_16;
	std::vector<Team> quarter_Finals;
	std::vector<Team> semi_Finals;
	std::vector<Team> finals;

public:
	void run_tournament(std::vector<Team>& teams);
	std::vector<std::vector<Team>> assign_groups(std::vector<Team>& teams);
	void run_group_stage(std::vector < std::vector<Team>>& groups);
	void run_game(Team& a, Team& b);
	int calculate_goals(const Team& attacking_team, const Team& defending_team);
};


#endif //TOURNAMENT_H
