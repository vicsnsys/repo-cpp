#include <iostream>

int main() {


    const int secondsInAMin = 60;
    const int minutesInAHour = 60;
    const int hoursInADay = 24;
    const int secondsInAHour = minutesInAHour * secondsInAMin;  
    const int secondsInADay = hoursInADay * secondsInAHour;     

    int sec = 0;
    std::cout << "Entre com o numero de segundos: ";
    std::cin >> sec;

    int days = sec / secondsInADay;
    int remainingSec = sec % secondsInADay;

    // Cálculo das horas
    int hours = remainingSec / secondsInAHour;
    remainingSec %= secondsInAHour;

    // Cálculo dos minutos
    int minutes = remainingSec / secondsInAMin;

    // Segundos restantes
    int seconds = remainingSec % secondsInAMin;

    std::cout << sec << " segundos = " << days << " dias, " 
              << hours << " horas, " << minutes << " minutos e " 
              << seconds << " segundos\n";

    return 0;
}    

