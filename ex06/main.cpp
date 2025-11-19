#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || !av[1])
	{
		std::cout << "arguments error" << std::endl;
	}
	else
	{
		Harl harl;
		harl.complain(av[1]);
	}
}