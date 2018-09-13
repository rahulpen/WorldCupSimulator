#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <vector>
#include <iostream>
#include "Team.h"

class Tournament{
	std::vector<Team> group_A;
	std::vector<Team> group_B;
	std::vector<Team> group_C;
	std::vector<Team> group_D;
	std::vector<Team> group_E;
	std::vector<Team> group_F;
	std::vector<Team> group_G;
	std::vector<Team> group_H;
	std::vector <std::vector<Team>>groups = {group_A, group_B, group_C, group_D, group_E, group_F, group_G, group_H};

	std::vector<Team> round_of_16;
	std::vector<Team> quarter_Finals;
	std::vector<Team> semi_Finals;
	std::vector<Team> finals;

public:
	void run_tournament(std::vector<Team> teams);
	void assign_groups(std::vector<Team> teams);
	void run_group_stage(std::vector < std::vector<Team>> groups);
	void run_game(std::vector<Team> a, std::vector<Team> b);
	void calculate_goals();
};


#endif //TOURNAMENT_H
