#include "WorldCupSimulator.h"

std::random_device device;
std::default_random_engine engine{ device() };

std::vector<team> generate_teams() {
	std::vector<team> teams;
	std::uniform_int_distribution<int> distribution{ 0, 100 };
	std::uniform_int_distribution<int> id_distribution{ 1000,9999 };
	for (int i = 0; i < 32; ++i) {
		//creating random distributions for certain attributes
		int mom = distribution(engine);
		int tac = distribution(engine);
		int t_id = id_distribution(engine);
		team t1;
		
		int att_total = 0;
		int def_total = 0;
		int pas_total = 0;

		//generating players inside each team
		for (int j = 0; j < 25; j++) {
			//creating random distribution for player attributes
			int att = distribution(engine);
			int def = distribution(engine);
			int pas = distribution(engine);
			int pos = distribution(engine);
			int spe = distribution(engine);
			int sta = distribution(engine);
			int vis = distribution(engine);
			//setting the attributes for each individual player
			player p1;
			p1.attack = att;
			p1.defense = def;
			p1.passing = pas;
			p1.positioning = pos;
			p1.speed = spe;
			p1.stamina = sta;
			p1.vision = vis;
			p1.player_id = j;
			p1.overall_rating = (p1.attack + p1.defense + p1.passing + p1.positioning + p1.speed + p1.stamina + p1.vision) / 7;
			t1.players.push_back(p1);

			att_total += att;
			def_total += def;
			pas_total += pas;
		}

		//generating rest of team statistics
		t1.attack = att_total/25;
		t1.defense = def_total/25;
		t1.passing = pas_total/25;
		t1.momentum = mom;
		t1.tactics = tac;
		t1.total = (t1.attack + t1.defense + t1.passing + t1.momentum + t1.tactics) / 5;
		t1.team_id = t_id;

		teams.push_back(t1);
	}
	return teams;
}

void run_tournament(std::vector<team> teams) {

}

int main()
{
	std::cout << "Welcome to my World Cup Simulator" << std::endl;
	std::vector<team> teams = ::generate_teams(); //--> generate teams

	for (int i = 0; i < teams.size(); i++) {
		std::cout <<"Team Id: " << teams[i].team_id <<" Team Total Rating: " << teams[i].total << std::endl;
		for (int j = 0; j < 25; j++) {
			std::cout << teams[i].players[j].player_id << " " << teams[i].players[j].overall_rating << std::endl;
		}
		std::cout << "\n";
	}

	return 0;
}
