#include "WorldCupSimulator.h"

std::random_device device;
std::default_random_engine engine{ device() };


void run_tournament(std::vector<team> teams) {

}

int main()
{
	std::cout << "Welcome to my World Cup Simulator" << std::endl;
	//std::string tn, int att, int mid, int def, int pas, int mom, int tact
	team Russia("Russia ", 80, 78, 76, 78);
	team Germany("Germany ", 84, 85, 85, 85);
	team Brazil("Brazil ", 86, 83, 85, 85);
	team Portugal("Portugal ", 85, 82, 80, 82);
	team Argentina("Argentina ", 87, 80, 80, 82);
	team Belguim("Belgium ", 86, 83, 85, 84);
	team Poland("Poland ", 82, 76, 75, 77);
	team France("France ", 82, 85, 82, 84);
	team Spain("Spain ", 84, 86, 85, 85);
	team Peru("Peru ", 73, 73, 72, 72);
	team Switzerland("Switzerland ", 74, 77, 78, 78);
	team England("England ", 84, 81, 81, 82);
	team Colombia("Colombia ", 81, 77, 78, 79);
	team Mexico("Mexico ", 79, 79, 75, 78);
	team Uruguay("Uruguay ", 86, 76, 79, 81);
	//team Croatia("Croatia ", 0)
	team Denmanrk("Denmark ", 76, 79, 75, 77);
	team Iceland("Iceland ", 73, 74, 69, 72);
	//team Costa_Rica("Costa Rica", )
	team Sweden("Sweden ", 76, 75, 75, 75);
	//team Tunisia("Tunisia ", )
	team Egypt("Egypt ", 68, 75, 71, 72);
	//team Senegal("Senegal ", )
	//team Iran("Iran ", )
	//team Serbia("Serbia ", )
	//team Nigeria("Nigeria ", )
	team Australia("Australia ", 69, 73, 71, 73);
	//team Japan("Japan ", )
	//team Morocco("Morocco ", )
	//team Panama("Panama ", )
	//team South_Korea("South Korea ", )
	team Saudi_Arabia("Saudi Arabia ", 73, 72, 73, 72);

	return 0;
}
