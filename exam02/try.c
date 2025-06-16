#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		 if(av[1][i] == ' ' && av[1][i] == '/t')
		 	write(1, '/n', 1);
		if(av[1][i] == ' ' || av[1][i] == '/t' || av[1][i] == '/0')
			write(1, av[1][i], 1);	
	}
	write(1, "/n", 1);
	return(0);
}