#include <iostream>
#include "timer.hpp"

using namespace std;

int main()
{
    cout << "Test timer class" << endl;
    Timer timer;
    cout << "Timer can at most run for " << timer.MaxTime() << " nanoseconds.\n";
    cout << "Sleep for 1 sec.\n";
    timer.StartTimer();
    Sleep(1000);  // ONLY WORKS ON WINDOWS. REPLACE DEPENDING ON YOUR OS!
    timer.StopTimer();
    cout << "Time in nanoseconds: " << timer.ElapsedTime() << endl;
    cout << "Time in microseconds: " << timer.ElapsedTime("micro") << endl;
    cout << "Time in seconds: " << timer.ElapsedTime("sec") << endl;
    cout << "Sleep for 9 sec.\n";
    timer.StartTimer();
    Sleep(9000);
    timer.StopTimer();
    cout << "Time in seconds: " << timer.ElapsedTime("sec") << endl;
    cout << "Time in minutes: " << timer.ElapsedTime("min") << endl;
    cout << "Total time in seconds: " << timer.CumulativeTime("sec") << endl;
    cout << "Finished.";
    return 0;
}
