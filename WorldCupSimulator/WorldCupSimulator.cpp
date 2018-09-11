#include "WorldCupSimulator.h"

std::random_device device;
std::default_random_engine engine{ device() };

std::vector<team> initialize_teams() {
	team Russia("Russia ", 80, 78, 76, 78);
	team Germany("Germany ", 84, 85, 85, 85);
	team Brazil("Brazil ", 86, 83, 85, 85);
	team Portugal("Portugal ", 85, 82, 80, 82);
	team Argentina("Argentina ", 87, 80, 80, 82);
	team Belgium("Belgium ", 86, 83, 85, 84);
	team Poland("Poland ", 82, 76, 75, 77);
	team France("France ", 82, 85, 82, 84);
	team Spain("Spain ", 84, 86, 85, 85);
	team Peru("Peru ", 73, 73, 72, 72);
	team Switzerland("Switzerland ", 74, 77, 78, 78);
	team England("England ", 84, 81, 81, 82);
	team Colombia("Colombia ", 81, 77, 78, 79);
	team Mexico("Mexico ", 79, 79, 75, 78);
	team Uruguay("Uruguay ", 86, 76, 79, 81);
	team Croatia("Croatia ", 0, 0, 0, 0); //FIXX
	team Denmark("Denmark ", 76, 79, 75, 77);
	team Iceland("Iceland ", 73, 74, 69, 72);
	team Costa_Rica("Costa Rica", 0, 0, 0, 0); //FIXX
	team Sweden("Sweden ", 76, 75, 75, 75);
	team Tunisia("Tunisia ", 0, 0, 0, 0); //FIXX
	team Egypt("Egypt ", 68, 75, 71, 72);
	team Senegal("Senegal ", 0, 0, 0, 0); //FIXX
	team Iran("Iran ", 0, 0, 0, 0); //FIXX
	team Serbia("Serbia ", 0, 0, 0, 0); //FIXXX
	team Nigeria("Nigeria ", 0, 0, 0, 0); //FIXX
	team Australia("Australia ", 69, 73, 71, 73);
	team Japan("Japan ", 0, 0, 0, 0);  //FIXXX
	team Morocco("Morocco ", 0, 0, 0, 0);  //FIXXX
	team Panama("Panama ", 0, 0, 0, 0); //FIXX
	team South_Korea("South Korea ", 0, 0, 0, 0); //FIXXX
	team Saudi_Arabia("Saudi Arabia ", 73, 72, 73, 72);
	std::vector<team> teams = { Russia, Germany, Brazil, Portugal, Argentina, Belgium, Poland, France, Spain, Peru, Switzerland,
		England, Colombia, Mexico, Uruguay, Croatia, Denmark, Iceland, Costa_Rica, Sweden, Tunisia, Egypt, Senegal, Iran, Serbia,
		Nigeria, Australia, Japan, Morocco, Panama, South_Korea, Saudi_Arabia };
	
	return teams;
}

void run_tournament(std::vector<team> teams) {

}

int main()
{
	std::cout << "Welcome to my World Cup Simulator" << std::endl;

	std::vector<team> teams = initialize_teams();
	for (int i = 0; i < teams.size(); i++) {
		std::cout << teams[i].team_name << " " << teams[i].overall << std::endl;
	}
	

	return 0;
}
