#include <iostream>
#include <string.h>
#define ll long long
//using namespace std;
std::string haab[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
std::string tzolkin[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
struct Haab
{
    int day;
    int month;
    ll year;
};

int mt(std::string month)
{
    int i;
    for(i=0; i<19; i++)
    {
        if(month == haab[i])
        {
            //cout << i+1 << endl;
            return i+1;
        }
    }
    return -1;
}

ll turntoday(struct Haab before)
{
    ll sum = before.year * 365;
    if(before.month!=19)
    {
        sum += 20 * (before.month-1);
        sum += before.day;
    }
    else
    {
        sum += 360 + before.day;
    }
    return sum;
}

void turntotzolkin(ll day)
{
    ll year, month;
    if(day % 260==0)
        year = (day+1)/260 - 1;
    else
        year = day / 260;
    //day -= year * 260;
    if(day%20==0)
        month = day % 20;
    else
        month = day % 20;
    //day -= (month-1) * 20;
    std::cout << day%13 << " " << tzolkin[month-1] << " " << year << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << n << std::endl;
    for(; n>0; n--)
    {
        ll day;
        std::string month;
        struct Haab before;
        scanf("%d.", &before.day);
        before.day++;
        std::cin >> month >> before.year;
        before.month = mt(month);
        //std::cout << before.day << " " << before.month << " " << before.year << endl;
        day = turntoday(before);
        turntotzolkin(day);
        //cout << day << endl;
    }
    return 0;
}