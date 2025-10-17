#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
   
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

   
    void display() const {
        cout << hours << ":" 
             << (minutes < 10 ? "0" : "") << minutes << ":" 
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

   
    friend Time addTime(const Time&, const Time&);
};
Time addTime(const Time& t1, const Time& t2) {
    Time sum;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + sum.seconds / 60;
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

int main() {
    Time t1, t2, total;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();
 total = addTime(t1, t2);

    cout << "\nFirst time: ";
    t1.display();

    cout << "Second time: ";
    t2.display();

    cout << "Sum of times: ";
    total.display();

    return 0;
}



