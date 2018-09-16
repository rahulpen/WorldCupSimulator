#include "Tournament.h"

void Tournament::run_tournament(std::vector<Team> teams){
	assign_groups(teams);
	run_group_stage(groups);

}

void Tournament::assign_groups(std::vector<Team> teams) {
	//assign teams to each group (teams are already in random order)
	for (int i = 0; i < teams.size(); i++) {
		if (i < 4)
			group_A.push_back(teams[i]);
		else if (i >= 4 && i < 8)
			group_B.push_back(teams[i]);
		else if (i >= 8 && i < 12)
			group_C.push_back(teams[i]);
		else if (i >= 12 && i < 16)
			group_D.push_back(teams[i]);
		else if (i >= 16 && i < 20)
			group_E.push_back(teams[i]);
		else if (i >= 20 && i < 24)
			group_F.push_back(teams[i]);
		else if (i >= 24 && i < 28)
			group_G.push_back(teams[i]);
		else if (i >= 28 && i < 32)
			group_H.push_back(teams[i]);
	}
}

void Tournament::run_group_stage(std::vector <std::vector<Team>> groups) {

}

void Tournament::run_game(std::vector<Team> a, std::vector<Team> b) {

}

void Tournament::calculate_goals() {

}