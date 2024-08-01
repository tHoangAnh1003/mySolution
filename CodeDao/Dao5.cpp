#include <bits/stdc++.h>
using namespace std;

struct date{
    int day,month,year;
    date (int _day, int _month, int _year){
        // them code cua ban o day
        day = _day;
        month = _month;
        year = _year;
    }
    
    date getNextDay(){
        // them code cua ban o day
        day += 1;
        if (day == 32) {
            month += 1;
            day = 1;
            if (month == 13) {
                year += 1;
                month = 1;
                day = 1;
            }
        } else if (day == 31) {
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                month += 1;
                day = 1;
            }
        } else if (day == 30) {
            if (month == 2) {
                day = 1;
                month += 1;
            }
        } else if (day == 29) {
            if (!(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                day = 1;
                month += 1;
            }
        }
        return date(day, month, year);
    }    
};


bool isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

bool invalid(date d) {
    if (d.month < 1 || d.month > 12) {
        return true;
    }

    if (d.day < 1) {
        return true;
    }

    int daysInMonth;

    switch (d.month) {
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if (isLeapYear(d.year)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        default:
            daysInMonth = 31;
            break;
    }

    if (d.day > daysInMonth) {
        return true;
    }

    return false;
}


vector<int> dateV(string s) {
    stringstream ss(s);
    vector<int> res;
    
    string word;
    while (getline(ss, word, '/')) {
        res.push_back(stoi(word));
    }
    
    return res;
}

int main() {
    // them code cua ban o day
    string s; cin >> s;
    
    vector<int> d = dateV(s);
    
    // for (int x : d)
    //     cout << x << ' ';
    
    date Date(d[0], d[1], d[2]);
    
    // cout << invalid(Date) << '\n';
    
    // cout << Date.day << ' ' << Date.month << ' ' << Date.year << '\n';
    
    if (invalid(Date))
        cout << "INVALID\n";
    else {
        date res = Date.getNextDay();
        string s = "";
        if (res.day < 10) {
            s += '0';
        }
        s += to_string(res.day);
        
        s += '/';
        
        if (res.month < 10)
            s += '0';
        s += to_string(res.month);
        
        s += '/';
        
        s += to_string(res.year);
        // cout << res.day << '/' << res.month << '/' << res.year << '\n';
        cout << s;
    }
}
