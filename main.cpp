/**** Problem 10.1 - Chapter 10, Project B
*---------------------------------------------
***** Implement a class Clock whose get_hours and get_minutes member functions return the
***** current time at your location. To get the current time, use the following code,
***** which requires that you include the <ctime> header:

***** time_t current_time = time(0);
***** tm* local_time = localtime(&current_time);
***** int hours = local_time->tm_hour;
***** int minutes = local_time->tm_min;
***** Also provide a get_time member function that returns a string with the hours and minutes
***** by calling the get_hours and get_minutes functions.
***** Provide a derived class WorldClock whose constructor accepts a time offset.
***** For example, if you live in California, a new WorldClock(3) should show the time in New York,
***** three time zones ahead. Which member functions did you override? (
***** You should not override get_time.)
*---------------------------------------------
// Programmer - Ashley Jacobson
// Tester - Audrey Tapia (TESTED)
*---------------------------------------------
// Group Project B //
/***** Members *****/
/***** Ashley Jacobson *****/
/***** Giannfranco Brance *****/
/***** Audrey Tapia *****/
/***** Heily Cabrera Guerrero *****/

#include "Clock.h"
#include "WorldClock.h"
#include <iostream>
#include <ctime>



using namespace std;

int main()
{
    Clock clock1;
    cout << "Clock1 object current time hours: " << endl;
    cout << clock1.get_hours() << endl;
    cout << "Clock1 object current time minutes: " << endl;
    cout << clock1.get_minutes() << endl;
    cout << "Current time: " << endl;
    cout << clock1.get_time() << endl;
    WorldClock wc1(3);
    cout << "Time in hours 3 hours ahead: " << endl;
    cout << wc1.get_hours() << endl;
    WorldClock wc2(10);
    cout << "World Time in hours 10 hours ahead: " << endl;
    cout << wc2.get_hours() << endl;
    cout << "World Time in minutes: " << endl;
    cout << wc2.get_minutes() << endl;
    cout << "Current time 10 hours ahead: " << endl;
    cout << wc2.Clock::get_time() << endl;
    return 0;
}
