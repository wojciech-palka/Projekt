#include <iostream>

using namespace std;

class Meeting
{
protected:
	string header;
	string date;
	string time;
	int priority;
public:
	void show();
};

class Formal:public Meeting
{
public:
	int setPriority(int priority);
};

class Informal:public Meeting
{
public:
	int setPriority(int priority);
};