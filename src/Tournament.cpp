#include "Tournament.h"

void Tournament::run_tournament(std::vector<Team>& teams){
	std::vector<std::vector<Team>> groups = assign_groups(teams);
	run_group_stage(groups);

}

std::vector<std::vector<Team>> Tournament::assign_groups(std::vector<Team>& teams) {
	//shuffle teams in vector using random engine
	std::shuffle(teams.begin(), teams.end(), engine);

	//assign the teams to a group
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
	std::vector<std::vector<Team>> groups = { group_A, group_B, group_C, group_D, group_E, group_F, group_G };
	return groups;
}

void Tournament::run_group_stage(std::vector <std::vector<Team>>& groups) {
	for (int i = 0; i < groups.size(); i++) {
		run_game(groups[i][0], groups[i][1]);
		run_game(groups[i][0], groups[i][2]);
		run_game(groups[i][0], groups[i][3]);
		run_game(groups[i][1], groups[i][2]);
		run_game(groups[i][1], groups[i][3]);
		run_game(groups[i][2], groups[i][3]);
		
	}
}

void Tournament::run_game(Team& a, Team& b) {
	int goals_a = calculate_goals(a, b);
	int goals_b = calculate_goals(b, a);
	a.goals += goals_a;
	b.goals += goals_b;
	if (goals_a > goals_b) {
		a.wins++;
		b.losses++;
	}
	else if (goals_b > goals_a) {
		b.wins++;
		a.losses++;
	}
	else if (goals_a == goals_b) {
		a.draws++;
		b.draws++;
	}
}

int Tournament::calculate_goals(const Team& attacking_team,const Team& defending_team) {
	std::uniform_int_distribution<int> goal_distribution{ 1, 10 };
	int goals = 0;
	int count = 2;
	int x;
	while (true) {
		x = goal_distribution(engine);
		if (x > count) {
			goals++;
		} else {break;}
		count++;
	}

	return goals;
}