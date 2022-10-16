#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // Назва Авто
    string carName = "Ваз 2109";
    // VIN Номер (6 цифр)
    unsigned int VinID = 210930;
    // Рiк Випуску (4 цифри)
    unsigned short int yearOfIssue = 2002;
    // Вiк Авто
    unsigned short int carYears = 20.0;
    // Працює?
    bool working = true;
    // Двигун
    string engine = "Карбюратор 1,5 73 к.с.";
    // Турбіна?
    bool turbo = false;
    // Державний Номер
    string licensePlate = "АА5142МТ";
    // SDD
    string color = "Синiй";
    // На Газу?
    bool gas = true;
    
    unsigned int totalMemoryInBytes =

        sizeof(carName) +
        sizeof(carYears) +
        sizeof(working) +
        sizeof(engine) +
        sizeof(turbo) +
        sizeof(licensePlate) +
        sizeof(color);

    cout << "Назва Авто:\t\t\t\t" << carName << endl;
    cout << "Колiр:\t\t\t\t\t" << color << endl;
    cout << "Рiк Випуску:\t\t\t\t" << yearOfIssue << endl;
    cout << "VIN код:\t\t\t\t" << VinID << endl;
    cout << "Держ. Номер:\t\t\t\t" << licensePlate << endl;
    cout << "Вiк Авто:\t\t\t\t" << carYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working) ? "Так" : "Ні") << endl;
    cout << "Двигун:\t\t\t\t\t" << engine << endl;
    cout << "Турбiна?:\t\t\t\t" << ((turbo) ? "Так" : "Нi") << endl;
    cout << "На Газу?:\t\t\t\t" << ((gas) ? "Так" : "Нi") << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;
}