/*Курсовая ОАИП | Рассохин Н.С.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
using std::cout;
using std::cin;
string week[7]{ "Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота" };
int weeklist, dayresult, qty = 0, yearMAIN;
float year1;

/*__________________________________________________*/

struct date
{
  int day;
  int month;
  int year;
}; 
 
struct students
{
  char *lastName;
  date std_dt;
};

void showALL(students STD1)
{
    cout << "Фамилия студента: " << STD1.lastName << endl;
    cout << "Дата: " << STD1.std_dt.day<<"."<< STD1.std_dt.month <<"."<< STD1.std_dt.year << endl << endl;
}

void data(int day, int month, int year) 
{
    switch (month) {
    case 1:
        weeklist = 6;
        break;
    case 2:
        weeklist = 2;
        break;
    case 3:
        weeklist = 2;
        break;
    case 4:
        weeklist = 5;
        break;
    case 5:
        weeklist = 0;
        break;
    case 6:
        weeklist = 3;
        break;
    case 7:
        weeklist = 5;
        break;
    case 8:
        weeklist = 1;
        break;
    case 9:
        weeklist = 4;
        break;
    case 10:
        weeklist = 6;
        break;
    case 11:
        weeklist = 2;
        break;
    case 12:
        weeklist = 4;
        break;
    }
    yearMAIN = year;
    year1 = ((year % 100 / 12 * 100) - ((year % 100 / 12 * 100 % 100))) / 100;
    year = (year % 100 % 12);
    year = year + ((((year % 100 % 12 / 4) * 100) - ((year % 100 % 12 / 4) * 100 % 100)) / 100);
    year = year + year1;
    dayresult = (day + year + weeklist) % 7;
 
    if (yearMAIN >= 1900 && yearMAIN < 2000) qty = 1; 
    if (yearMAIN >= 1800 && yearMAIN < 1900) qty = 3;
    if (yearMAIN >= 1700 && yearMAIN < 1800) qty = 5;
    if (yearMAIN >= 1600 && yearMAIN < 1700) qty = 7;
    if (yearMAIN >= 1500 && yearMAIN < 1600) qty = 8;
    if (yearMAIN >= 1400 && yearMAIN < 1500) qty = 10;
    if (yearMAIN >= 1300 && yearMAIN < 1400) qty = 12;
 
    switch (dayresult) {
    case 0:
        cout << day << "." << month << "." << yearMAIN << " - Воскресенье!";
        break;
    case 1:
        cout << day << "." << month << "." << yearMAIN << " - Понедельник";
        break;
    case 2:
        cout << day << "." << month << "." << yearMAIN << " - Вторник";
        break;
    case 3:
        cout << day << "." << month << "." << yearMAIN << " - Среда!";
        break;
    case 4:
        cout << day << "." << month << "." << yearMAIN << " - Четверг!";
        break;
    case 5:
        cout << day << "." << month << "." << yearMAIN << " - Пятница!";
        break;
    case 6:
        cout << day << "." << month << "." << yearMAIN << " - Суббота!";
        break;
    case 7:
        cout << day << "." << month << "." << yearMAIN << " - Воскресенье!";
        break;
    case 8:
        cout << day << "." << month << "." << yearMAIN << " - Понедельник!";
        break;
    case 9:
        cout << day << "." << month << "." << yearMAIN << " - Вторник";
        break;
    case 10:
        cout << day << "." << month << "." << yearMAIN << " - Среда!";
        break;
    case 11:
        cout << day << "." << month << "." << yearMAIN << " - Четверг!";
        break;
    case 12:
        cout << day << "." << month << "." << yearMAIN << " - Пятница!";
        break;
    case 13:
        cout << day << "." << month << "." << yearMAIN << " - Суббота!";
        break;
    case 14:
        cout << day << "." << month << "." << yearMAIN << " - Воскресенье!";
        break;
    case 15:
        cout << day << "." << month << "." << yearMAIN << " - Понедельник!";
        break;
    case 16:
        cout << day << "." << month << "." << yearMAIN << " - Вторник";
        break;
    case 17:
        cout << day << "." << month << "." << yearMAIN << " - Среда!";
        break;
    case 18:
        cout << day << "." << month << "." << yearMAIN << " - Четверг!";
        break;
    case 19:
        cout << day << "." << month << "." << yearMAIN << " - Пятница!";
        break;
    case 20:
        cout << day << "." << month << "." << yearMAIN << " - Суббота!";
        break;
    case 21:
        cout << day << "." << month << "." << yearMAIN << " - Воскресенье!";
        break;
    }
}

/*__________________________________________________*/

int main()
{
    setlocale (LC_ALL, "rus");
    int month, day, year;
    int month2, day2, year2;

    /* cout << "Введите число, месяц и год: ";
    cin>> day >> month >> year;
    cout << endl; */

    students std_1;
    std_1.lastName = "Иванов";
    std_1.std_dt.day = 24;
      day=std_1.std_dt.day;
    std_1.std_dt.month = 01;
     month=std_1.std_dt.month;
    std_1.std_dt.year = 2001;
      year=std_1.std_dt.year;

    students std_2;
    std_2.lastName = "Петров";
    std_2.std_dt.day = 31;
      day2=std_2.std_dt.day;
    std_2.std_dt.month = 02;
      month2=std_2.std_dt.month;
    std_2.std_dt.year = 2000;
      year2=std_2.std_dt.year;
    
    showALL(std_1);
    showALL(std_2);
    data(day, month, year);
    cout<<endl;
    data(day2, month2, year2);
    return 0;
}


