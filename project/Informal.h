#include "Meeting.h"
#include <iostream>

using namespace std;

int Informal::set_Priority(int priority)
{
	priority = 1;
	return priority;
}
class Informal:public Meeting
{
public:
	int set_Priority(int priority);
};

