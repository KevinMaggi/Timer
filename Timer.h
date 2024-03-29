//
// Created by kevin on 09/07/19.
//

#ifndef ELABORATOTIMER_TIMER_H
#define ELABORATOTIMER_TIMER_H

#include <chrono>
#include <exception>
#include <string>

using namespace std;
using namespace std::chrono;

class Timer {
public:
    Timer();

    const time_point<steady_clock> &getStart() const;

    bool setDuration(unsigned int seconds);
    int getDuration();
    string getDurationString();

    bool isRunning() const;

    int getViewMode() const;
    void setViewMode(int vm);

    bool startTimer();
    bool stopTimer();
    void resetTimer();

private:
    time_point<steady_clock> start;
    ::duration<int, milli> duration;
    bool running;
    int viewMode;

    static const int secPerDay, secPerHour, secPerMin;
};

#endif //ELABORATOTIMER_TIMER_H
