#include <iostream>

using namespace std;

class Time
{
    public:
        int hr, min, sec;

        void getTime()
        {

            cout << "Hours: ";
            cin >> hr;

            cout << "Minutes: ";
            cin >> min;

            cout << "Seconds: ";
            cin >> sec;
        }

        Time time_sum(Time t1, Time t2)
        {
            Time sum;
            sum.hr = t1.hr + t2.hr;
            sum.min = t1.min + t2.min;
            sum.sec = t1.sec + t2.sec;

            double extra_hour, extra_minute;
            
            if(sum.min >= 60)
            {
                extra_hour = sum.min / 60;
                sum.min = sum.min % 60;
            }

            sum.hr += extra_hour; 

            if(sum.sec >= 60)
            {
                extra_minute = sum.sec / 60;
                sum.sec = sum.sec % 60;
            }

            sum.min += extra_minute;  

            return sum;
        }

        void display()
        {
            cout << "The total time is:::::::" << endl;
            cout << "Hours: " << hr << endl;
            cout << "Minutes: " << min << endl;
            cout << "Seconds: " << sec << endl;
        }

};

int main()
{
    Time t1, t2, sum;

    t1.getTime();
    t2.getTime();
    sum = sum.time_sum(t1, t2);
    sum.display();
    return 0;
}