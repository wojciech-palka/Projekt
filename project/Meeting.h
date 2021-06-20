#include <iostream>

using namespace std;

void Meeting::show()
{
	cout << "Dzien: " << date << endl;
	cout << "Godzina: " << time << "\t" << header << endl;
}

class Meeting
{
protected:
	string header;
	string date;
	string time;
	int priority;
public:
	void show();
	virtual int set_Priority(int priority);
};

