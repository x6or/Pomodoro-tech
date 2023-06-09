#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void workTimer(int minutes) {
    cout << "Starting work for " << minutes << " minutes." << endl;
    this_thread::sleep_for(chrono::minutes(minutes));
    cout << "Work session completed!" << endl;
}

void breakTimer(int minutes) {
    cout << "Taking a break for " << minutes << " minutes." << endl;
    this_thread::sleep_for(chrono::minutes(minutes));
    cout << "Break is over!" << endl;
}

int main() {
    int workTime; 
    int breakTime;
    cout << "enter the work time : " << endl;
    cin >> workTime;
        cout << "enter the break time : " << endl;
        cin >> breakTime;

    cout << "Pomodoro Technique" << endl;

    while (true) {
        workTimer(workTime);
        breakTimer(breakTime);
    }

    return 0;
}
