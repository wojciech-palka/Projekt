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
	virtual int set_Priority(int priority);
};

class Formal:public Meeting
{
public:
	int set_Priority(int priority);
};

class Informal:public Meeting
{
public:
	int set_Priority(int priority);
};