#include<iostream>
#include<string>
#include<vector>



void AsciiArt(short opt) {
	switch (opt)
	{
	case 0:																				//ANSI: 92;107m

		std::cout << "\033[0m		 __    __              _ _      "<<"\n";
		std::cout << "		/ / /\\ \\ \\___  _ __ __| | | ___ " << "\n";
		std::cout << "		\\ \\/  \\/ / _ \\| '__/ _` | |/ _ \\" << "\n";
		std::cout << "		 \\  /\\  / (_) | | | (_| | |  __/" << "\n";
		std::cout << "		  \\/  \\/ \\___/|_|  \\__,_|_|\\___|" << "\n\n";
	
		break;

	}
}




void Table(std::string *palabra, short intento, std::vector<std::string>* palabrasInput) {

	//std::cout << palabra[0] << " " << palabra[1] << " " << palabra[2] << " " << palabra[3] << " " << palabra[4];
	
	short acierto  = 2;
	(*palabrasInput).push_back(*palabra);


	for (int i = 0; i < (*palabrasInput).size(); i++)
	{
		std::cout << "		      ---------------------\n"; 
	/*	std::cout << "		      | " << (*palabrasInput)[i][0] << " | " << (*palabrasInput)[i][1] << " | " << (*palabrasInput)[i][2] << " | " << (*palabrasInput)[i][3] << " | " << (*palabrasInput)[i][4] << " | \n";*/
		std::cout << "		      ";
		for (short j = 0; j < 5; j++)
		{

			switch (acierto)
			{
			case 0:
				std::cout << "|\033[91m " << (*palabrasInput)[i][j] << " \033[0m"; 
				break;
			case 1:
				std::cout << "|\033[92m " << (*palabrasInput)[i][j] << " \033[0m"; 
				break;
			case 2:
				std::cout << "|\033[93m " << (*palabrasInput)[i][j] << " \033[0m"; 
				break;
			}


		}std::cout << "|\n";
			/*std::cout << "		      | " << (*palabrasInput)[i][0] << " | " << (*palabrasInput)[i][1] << " | " << (*palabrasInput)[i][2] << " | " << (*palabrasInput)[i][3] << " | " << (*palabrasInput)[i][4] << " | \n";*/

	}


	for (int i = 0; i <= 4-intento; i++)  
	{
		std::cout << "		      ---------------------\n";
		std::cout << "		      |   |   |   |   |   |\n";
	}
	std::cout << "		      ---------------------\n";

}

void TableVacia() { 

	for (int i = 0; i <= 6; i++)
	{
		std::cout << "		      ---------------------\n";
		std::cout << "		      |   |   |   |   |   |\n";

	}
	std::cout << "		      ---------------------\n";


}