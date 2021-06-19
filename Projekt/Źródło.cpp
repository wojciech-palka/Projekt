#include "Nag³ówek.h"

using namespace std;

void Meeting::show()
{
	cout << "Dzien: " << date << endl;
	cout << "Godzina: " << time << "\t" << header << endl;
}

int Formal::setPriority(int priority)
{
	priority = 2;
	return priority;
}

int Informal::setPriority(int priority)
{
	priority = 1;
	return priority;
}