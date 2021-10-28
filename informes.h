#pragma once
#include <iostream>
#include "rlutil.h"
using namespace std;

void informes()
{
	rlutil::setColor(rlutil::YELLOW);
	rlutil::setBackgroundColor(rlutil::GREY);
	cout << "                                                                                                                        " << endl;
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	cout << "      ______         __                    _                                         _                   __        " << endl;
	cout << "     / ____/ _____  / /_  ______  _____   (_)  _____   _____   ______   ____ ____   (_)  _____  ______  / /_  _____ " << endl;
	cout << "    / __/   / ___/ / __/ / __  / / ___/  / /  / __  / / __  / / __  /  / __ '__  / / /  / _  / / __  / / __/ / __  /" << endl;
	cout << "   / /___  (__  ) /  /  / /_/ / / /__   / /  / /_/ / / / / / / /_/ /  / / / / / / / /  /  __/ / / / / /  /  / /_/ /" << endl;
	cout << "  /_____/ /____/ /__/  /_/ /_/ /____/  /_/  /_____/ /_/ /_/ /_/ /_/  /_/ /_/ /_/ /_/  /____/ /_/ /_/ /__/  /_____/ " << endl;
	cout << endl;
	rlutil::setBackgroundColor(rlutil::GREY);
	cout << "                                                                                                                        " << endl;
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	cout << endl << endl << endl;

	///////////////////////////////////////////////////////////////////////////

	//cout << "\t\t\t\t " << endl << endl;
	//cout << "\t\t\t\t " << endl << endl;
	cout << "\t\t\t\t		CANTIDAD DE RESERVAS POR CLIENTE" << endl;
	cout << "\t\t\t\t		INGRESE ANIO: 2019" << endl;
	rlutil::setBackgroundColor(rlutil::GREY);
	cout << "\t\t\t\t                                                  " << endl;
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	cout << "\t\t\t\t DNI     NOMBRE		APELLIDO	RESERVAS" << endl;
	rlutil::setBackgroundColor(rlutil::GREY);
	cout << "\t\t\t\t                                                  " << endl;
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	///////////////////////////////////////////////////////////////////////////

	cout << "\t\t\t\t 41414141	JUAN		REY		21 " <<endl;
	cout << "\t\t\t\t 31313131	MARTIN		GUZMAN		16 " <<endl;
	cout << "\t\t\t\t 21212121	MARCELO		GOMEZ		16	 " <<endl;
	cout << "\t\t\t\t 81818181	GUSTAVO		SANTOS		14	 " <<endl;
	cout << "\t\t\t\t 12121212	LUCIA		PEREYRA		6	 " <<endl;
	cout << "\t\t\t\t 56565656	LARA		PINTOS		3	 " <<endl;
	/*cout << "\t\t\t\tFEBRERO			"<<"$ 219.390" << endl;
	cout << "\t\t\t\tMARZO			"<<"$ 264.212" << endl;
	cout << "\t\t\t\tABRIL			"<<"$ 350.116" << endl;
	cout << "\t\t\t\tMAYO			"<<"$ 186.345" << endl;
	cout << "\t\t\t\tJUNIO			"<<"$ 201.976" << endl;
	cout << "\t\t\t\tJULIO			"<<"$ 311.523" << endl;
	cout << "\t\t\t\tAGOSTO			"<<"$ 264.221" << endl;
	cout << "\t\t\t\tSEPTIEMBRE		"<<"$ 298.169" << endl;
	cout << "\t\t\t\tOCTUBRE			"<<"$ 192.564" << endl;
	cout << "\t\t\t\tNOVIEMBRE		"<<"$ 155.653" << endl;
	cout << "\t\t\t\tDICIEMBRE		"<<"$ 184.546" << endl;*/

	///////////////////////////////////////////////////////////////////////////
	cout << endl << endl;
	cout << "\t\t\t\t\t";
	rlutil::setBackgroundColor(rlutil::GREY);
	cout << "   VOLVER   ";
	rlutil::anykey();
	rlutil::setBackgroundColor(rlutil::DARKGREY);
	///////////////////////////////////////////////////////////////////////////
	cout << endl << endl;
	//system("pause");
}

