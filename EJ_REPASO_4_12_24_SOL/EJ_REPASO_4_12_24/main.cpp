#include<iostream>
#include<windows.h>
#include<string>
#include<vector>
#include"visuals.h"




//
//std::string DataIN() {
//
//	return 0;
//}


void imprimirTabla() { 
	
}

void visuales() {
	AsciiArt(0); 
}

std::string DataIN() { 
	std::string palabraInput;
	std::cin >> palabraInput;
	for (short i = 0; i < palabraInput.length(); i++)
	{
		if (palabraInput[i]>=97&&palabraInput[i]<=122)
		{
			palabraInput[i] = palabraInput[i] - 32;
		}
	}
	return palabraInput;
}

void main() {
	std::vector<std::string> palabrasInput;
	std::string Input;
	bool GameOver = false;
	short intento = 0;
	bool skipBucle = false;
	while (!GameOver) { 

		if (intento == 0)
		{
			visuales(); 
			TableVacia();  
		}
		else {
			skipBucle = true;
			GameOver = true;
		}

		if (!skipBucle) {
			for (short i = 0; i <= 5; i++)
			{
				Input = DataIN();
				system("CLS"); 
				visuales(); 
				Table(&Input, intento, &palabrasInput);  
				intento++; 
			}

		}

	}

}
