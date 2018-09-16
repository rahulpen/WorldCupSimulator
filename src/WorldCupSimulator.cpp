#include "WorldCupSimulator.h"

std::random_device device;
std::default_random_engine engine{ device() };

std::vector<Team> initialize_teams(){
	Team Russia("Russia ", 80, 77, 74);
	Team Germany("Germany ", 85, 85, 85);
	Team Brazil("Brazil ", 87, 85, 86);
	Team Portugal("Portugal ", 88, 83, 82);
	Team Argentina("Argentina ", 86, 83, 81);
	Team Belgium("Belgium ", 85, 82, 84);
	Team Poland("Poland ", 83, 78, 78);
	Team France("France ", 85, 85, 82);
	Team Spain("Spain ", 84, 86, 85);
	Team Peru("Peru ", 77, 76, 74);
	Team Switzerland("Switzerland ", 76, 77, 78);
	Team England("England ", 84, 81, 80);
	Team Colombia("Colombia ", 82, 78, 78);
	Team Mexico("Mexico ", 81, 79, 77);
	Team Uruguay("Uruguay ", 86, 77, 80);
	Team Croatia("Croatia ", 81, 82, 78);
	Team Denmark("Denmark ", 76, 78, 76);
	Team Iceland("Iceland ", 76, 78, 74);
	Team Costa_Rica("Costa Rica", 69, 73, 73);
	Team Sweden("Sweden ", 78, 76, 77);
	Team Tunisia("Tunisia ", 72, 72, 70);
	Team Egypt("Egypt ", 77, 77, 74);
	Team Senegal("Senegal ", 77, 77, 76);
	Team Iran("Iran ", 74, 72, 73);
	Team Serbia("Serbia ", 76, 79, 78);
	Team Nigeria("Nigeria ", 75, 76, 72);
	Team Australia("Australia ", 69, 72, 71);
	Team Japan("Japan ", 76, 77, 73);
	Team Morocco("Morocco ", 74, 77, 77);
	Team Panama("Panama ", 68, 69, 69); 
	Team South_Korea("South Korea ", 70, 74, 69);	
	Team Saudi_Arabia("Saudi Arabia ", 71, 72, 71);

	std::vector<Team> teams = { Russia, Germany, Brazil, Portugal, Argentina, Belgium, Poland, France, Spain, Peru, Switzerland,
		England, Colombia, Mexico, Uruguay, Croatia, Denmark, Iceland, Costa_Rica, Sweden, Tunisia, Egypt, Senegal, Iran, Serbia,
		Nigeria, Australia, Japan, Morocco, Panama, South_Korea, Saudi_Arabia };
	
	//shuffle teams in vector using random engine
	std::shuffle(teams.begin(), teams.end(), engine);
	return teams;
}


int main()
{
	std::cout << "Welcome to my World Cup Simulator \n\n" << std::endl;

	std::vector<Team> shuffled_total_teams = initialize_teams();
	Tournament world_Cup_2018;
	world_Cup_2018.run_tournament(shuffled_total_teams);
	
	

	return 0;
}
