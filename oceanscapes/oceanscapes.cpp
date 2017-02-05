// oceanscapes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <Windows.h>

int oceanWaves[21];
char waveChar[21];

using namespace std;

void waveFiller() {
	
	for (int i = 1; i <= 20; i++) {
		
		oceanWaves[i] = rand() % 3;
	}
}
void waveDisplay() {
	for (int j = 1; j <= 20; j++) {
		if (oceanWaves[j] == 0) { waveChar[j] = '~'; }
		else if (oceanWaves[j] == 1) { waveChar[j] = '^'; }
		else if (oceanWaves[j] == 2) { waveChar[j] = 'u'; }
	}
}

int main()
{
//	cout << "u~^";
	int i = 0;
	srand(time(NULL));
	while (i == 0) {
		
		waveFiller();
		waveDisplay();
		cout << ";--------------------;" << endl;
		cout << ";                    ;" << endl;
		cout << ";                    ;" << endl;
		cout << ";";
	//	cout << waveChar[1];
		for (int k = 1; k <= 20; k++) {
			cout << waveChar[k];
		}
		cout << ";" << endl;
		cout << ";                    ;" << endl;
		cout << ";                    ;" << endl;
		cout << ";                    ;" << endl;
		cout << ";                    ;" << endl;
		cout << ";--------------------;" << endl;
		Sleep(500);
		system("cls");
	}

	system("pause");
    return 0;
}

