// lessononehomework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "agendaheader.h"
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

Week::Week(int s)
{
	/////creates a week of s days long
}

void Week::renderWeek(int week)
{
	/////renders the week
}

Week::Day::Day(int w)
{
	////creates a column for a day with width w
}

void Week::Day::addEventToDay(PlannedEvent eventToAdd)
{
	////populates the day with an array of up to 99 PlannedEvents
}

Week::Day::PlannedEvent :: PlannedEvent(int w, int h, double a, int dur)
{
	/////creates a plannedevent with size w, h at transparancy a that takes a duration of dur minutes
	width = w;
	height = h;
	transparancy = a;
	durationinminutes = dur;
}

float Week::Day::PlannedEvent :: calculateDuration(int hoursa, int hoursb, int minutesa, int minutesb)
{
	/////calculates the amount of minutes between hoursa:minutesa military time to hoursb:
	return ((hoursb - hoursa) * 60) + (minutesb - minutesa);
}

void Week::Day::PlannedEvent :: setNewSize(int w, int h)
{
	////resizes this planned event to be the size of the day it's in, and the height of its duration
}

int main()
{
	////Set up the amount of days specified
	////Populate each day with the associated array of PlannedEvents
	////render the week
	Week::Day monday = Week::Day(100.0f);
	Week::Day::PlannedEvent firstEvent = Week::Day::PlannedEvent(10, 10, 0.5f, 0);
	firstEvent.calculateDuration(10, 18, 30, 45);



	/////////////////
	double givenInput;

	cout << "The only actually implemented function is to give you the duration of minutes back between two points. Enter any integer and get the results for an event that starts at 10:00 and ends at 12:30" << endl;
	cin >> givenInput;
	cout << givenInput << endl;
	cout << "Regurgitated data: " << firstEvent.calculateDuration(10, 12, 00, 30) << " minutes" << endl;

	cout << "Enter any new data to quit this program!" << endl;
	cin >> givenInput;
	

    return 0;
}





