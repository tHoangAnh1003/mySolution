#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    
    Time() : hour(0), minute(0), second(0) {}
    
    Time(int initHour, int initMinute, int initSecond)
    {
        //your code here
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        //your code here
        // Time diff;

        int t1_seconds = hour * 3600 + minute * 60 + second;
        int t2_seconds = other.hour * 3600 + other.minute * 60 + other.second;
    
        int diff_seconds = abs(t1_seconds - t2_seconds);
    
        hour = diff_seconds / 3600;
        diff_seconds %= 3600;
        minute = diff_seconds / 60;
        second = diff_seconds % 60;
    }
    
    void out() {
        string s = "";
        if (hour < 10) {
            s += '0';
        }
        s += to_string(hour);
        s += ":";
        if (minute < 10) {
            s += '0';
        }
        s += to_string(minute);
        s += ":";
        if (second < 10) {
            s += '0';
        }
        s += to_string(second);
        cout << s;
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    time1.out();
    return 0;
}
