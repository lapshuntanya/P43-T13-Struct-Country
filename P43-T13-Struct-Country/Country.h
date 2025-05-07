#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct Country
{
	char name[100] = "";			//����� �����
	char worldPart[100] = "";		//������� ����
	float square = 0;				//�����
	int population = 0;				//���������

	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "WorldPart: " << worldPart << endl;
		cout << "Square: " << square << endl;
		cout << "Population: " << population << endl;
		cout << "=========================================\n\n";
	}

	void showTable() {
		cout << "|" << setw(15) << name << "|" << setw(10) << worldPart << "|"
			<< setw(6) << square << "|" << setw(6) << population << "|\n";
	}

};