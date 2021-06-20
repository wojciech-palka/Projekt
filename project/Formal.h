#include "Meeting.h"
#include <iostream>

using namespace std;

int Formal::set_Priority(int priority)
{
	priority = 2;
	return priority;
}

class Formal :public Meeting
{
public:
	int set_Priority(int priority);
};

