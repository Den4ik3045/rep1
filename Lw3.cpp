#include<iostream>
#include<string>
using namespace std;

extern void menu();
extern void show_menu();
extern wstring** enter_namecar();
extern wstring** enter_color();
extern wstring** enter_bodyname();
extern char** enter_year();
extern char** enter_capacity();
extern char** enter_consumption();



//Тема: Авто

int main(int argsC,
    char* argsV[],
    char* environmentParameters[]
)
{

    setlocale(LC_ALL, "");

    if (argsC > 1)
    {
    }
    else
    {
        menu();
    }

    cin.get();
    return 0;
}

#ifndef INPUT_MAIN_SAMPLE_H
#define INPUT_MAIN_SAMPLE_H

void show_menu()
{

    wcout << L"Оберiть пункт:" << endl;
    wcout << L"1. Ввести назву авто та рiк випуску" << endl;
    wcout << L"2. Ввести колiр та кузов" << endl;
    wcout << L"3. Ввести об`єм та витрати палива" << endl;
    wcout << L"4. Завершити роботу" << endl;
}
wstring** enter_namecar()
{
    wstring* namecar = new wstring();
    wcout << L"Ввести назву авто:" << endl;
    wcin.ignore();
    getline(wcin, *namecar);

    return &namecar;
}
char** enter_year()
{
    const short int MAX_PASSWORD_LENGTH = 5;
    char* year = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести рiк випуску:" << endl;
    cin >> year;
    return &year;
}
wstring** enter_color()
{
    wstring* color = new wstring();
    wcout << L"Ввести колiр:" << endl;
    wcin.ignore();
    getline(wcin, *color);

    return &color;
}
wstring** enter_bodyname()
{
    wstring* bodyname = new wstring();
    wcout << L"Ввести кузов:" << endl;
    wcin.ignore();
    getline(wcin, *bodyname);

    return &bodyname;
}
char** enter_capacity()
{
    const short int MAX_PASSWORD_LENGTH = 4;
    char* capacity = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести об`єм:" << endl;
    cin >> capacity;
    return &capacity;
}
char** enter_consumption()
{
    const short int MAX_PASSWORD_LENGTH = 3;
    char* consumption = new char[MAX_PASSWORD_LENGTH];

    wcout << L"Ввести витрату палива:" << endl;
    cin >> consumption;
    return &consumption;
}
void menu()
{
    short int selectedMenuItem = 1;
    wstring namecar = L"";
    wstring color = L"";
    wstring bodyname = L"";
    char* year = nullptr;
    char* capacity = nullptr;
    char* consumption = nullptr;
    show_menu();
    cin >> selectedMenuItem;
    switch (selectedMenuItem)
    {
    case 1:
        namecar = **enter_namecar();
        year = *enter_year();
        color = **enter_color();
        bodyname = **enter_bodyname();
        capacity = *enter_capacity();
        consumption = *enter_consumption();
        break;
    case 2:
        color = **enter_color();
        bodyname = **enter_bodyname();
        capacity = *enter_capacity();
        consumption = *enter_consumption();
        break;
    case 3:
        capacity = *enter_capacity();
        consumption = *enter_consumption();
        break;
    case 4:
    default:

        exit(0);

    }
    if (!namecar.empty())
    {
        wcout << L"Назва авто:\t" 
            << namecar << endl;
    }
    if (!color.empty())
    {
        wcout << L"Колiр:\t\t" 
            << color << endl;
    }
    if (!bodyname.empty())
    {
        wcout << L"Кузов:\t\t"
            << bodyname << endl;
    }
    if (year != nullptr)
    {


        wcout << L"Рiк випуску:\t"
            << year << endl;
        delete[] year;
    }
    if (capacity != nullptr)
    {


        wcout << L"Об`єм двигуна:\t"
            << capacity << endl;
        delete[] capacity;
    }
    if (consumption != nullptr)
    {


        wcout << L"Витрата палива:\t"
            << consumption << endl;
        delete[] consumption;
    }
}
#endif