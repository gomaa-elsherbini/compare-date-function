#include <iostream>
using namespace std;



short readNumber(string msg)
{
    short num;

    cout << msg;
    cin >> num;

    return num;
}

struct stDate
{
    short day;
    short month;
    short year;
};

stDate readStDate()
{
    stDate Date;

    Date.day = readNumber("Please Enter a Day ");
    Date.month = readNumber("Please Enter a Month ");
    Date.year = readNumber("Please Enter a Year ");

    return Date;
}

bool isDate1EqualDate2(stDate Date1, stDate Date2)
{
    return (Date1.year == Date2.year) ? ((Date1.month == Date2.month) ? Date1.day == Date2.day : false) : false;
}

bool isDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.year < Date2.year) ? true : ((Date1.year == Date2.year) ? (Date1.month < Date2.month ? true : (Date1.month == Date2.month ? (Date1.day < Date2.day) : false)) : false);
}

bool isDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!isDate1BeforeDate2(Date1, Date2) && !isDate1EqualDate2(Date1, Date2));
}

short compareTwoDates(stDate Date1, stDate Date2)
{
    return isDate1AfterDate2(Date1, Date2) ? 1 : (isDate1EqualDate2(Date1, Date2))? 0 : -1;
}



int main()
{
    stDate Date1, Date2;

    cout << "Enter Date1 \n";
    Date1 = readStDate();
    cout << "\n";

    cout << "Enter Date2 \n";
    Date2 = readStDate();
    cout << "\n";

    cout << "Compare REsult= "<< compareTwoDates(Date1, Date2)<<"\n\n";



    system("pause>0");

    return main();
}
