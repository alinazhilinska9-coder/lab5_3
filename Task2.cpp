#include <iostream>

using namespace std;

void sellTicket(int& seats) {
    if (seats > 0) {
        seats--;
    } else {
        cout << "Свободных мест нет!" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int freeSeats;
    cout << "Введите количество свободных мест: ";
    cin >> freeSeats;

    cout << "Свободных мест до: " << freeSeats << endl;
    sellTicket(freeSeats);
    cout << "Свободных мест после: " << freeSeats << endl;

    return 0;
}
