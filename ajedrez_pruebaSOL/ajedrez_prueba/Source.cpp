#include<iostream>

void main() {
	bool grid = 0;
	char tabla[8][8];
	for (size_t i = 0; i < 8; i++)
	{
		for (short j = 0; j < 8; j++) 
		{
			tabla[i][j] = 'X';
		}
	}

	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "\n";
		for (short j = 0; j < 8; j++) 
		{
			if (i % 2 == 0) {
				if (j % 2 == 0)
				{
					std::cout << "\033[44m\033[37m " << tabla[i][j] << " \033[0m";
				}
				else {
					std::cout << "\033[47m\033[30m " << tabla[i][j] << " \033[0m"; 
				}
			}
			else {

				if (j % 2 == 0)
				{
					std::cout << "\033[47m\033[30m " << tabla[i][j] << " \033[0m";
				}
				else {
					std::cout << "\033[44m\033[37m " << tabla[i][j] << " \033[0m";
				}

			}
			
		}

	}


}