#pragma once
#include <iostream>
#include "rlutil.h"
#include "informes.h"
using namespace std;

void menu()
{

	while (true)
	{
		system("cls");
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
		cout << endl << endl;
		rlutil::setBackgroundColor(rlutil::DARKGREY);
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 1. VEHICULOS	 |" << endl;
		//rlutil::setBackgroundColor(rlutil::DARKGREY);
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 2. CLIENTES       |" << endl;
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 3. VENTAS         |" << endl;
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 4. CONSULTAS       |" << endl;
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 5. INFORMES       |" << endl;
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 6. CONFIGURACION  |" << endl;
		////////////////////////////////////////////////////////////////////////
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << "\t\t\t\t\t";
		cout << "|   >> 0. SALIR		 |" << endl;
		rlutil::setColor(rlutil::YELLOW);
		cout << "\t\t\t\t\t";
		cout << "==========================" << endl;
		rlutil::setColor(rlutil::WHITE);
		cout << endl;
		////////////////////////////////////////////////////////////////////////


		//INGRESAR OPCION
		int opc;
		cout << "\t\t\t\t\t";
		cout << "   >> INGRESAR OPCION: ";
		cin >> opc;

		system("cls");
		switch (opc)
		{
		case 0:
			return;
			break;
		case 1:
			//vehiculos();
			break;
		case 2:
			//clientes();
			break;
		case 3:
			//ventas();
			break;
		case 4:
			//consultas();
			break;
		case 5:
			informes();
			break;
		case 6:
			//configuracion();
			break;
		default:
			break;
		}
	}

	cout << endl << endl;
	system("pause");
	system("cls");
}
