#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;



int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

int main() {
    srand(time(0));
    bool again;

    list<Goat> trip;
    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();

    while(true) {
        int choice = main_menu();

        if (choice == 1) {
            add_goat(trip, names, colors);
        }
        else if (choice == 2) {
            delete_goat(trip);
        }
        else if (choice == 3) {
            display_trip(trip);

        }
        else if (choice == 4) {
            cout << "Quitting program" << endl;
            break;

        }

    }




    return 0;
}

int main_menu() {
    int choice;

    cout << "*** GOAT MANAGER 3001 ***" << endl;
    cout << "[1] Add a goat" << endl;
    cout << "[2] Delete a goat" << endl;
    cout << "[3] List goats" << endl;
    cout << "[4] Quit" << endl;
    cout << "Choice -->";
    cin >> choice;

    return choice;

}
int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip) {
    
}
void add_goat(list<Goat> &trip, string names[], string colors[]) {
    int name = rand() % SZ_NAMES;
    int age = rand() % (MAX_AGE + 1);
    int color = rand() % SZ_COLORS;

    trip.push_back(Goat(names[name], age, colors[color]));
}
void display_trip(list<Goat> trip) {
    if(trip.empty()) {
        return;
    }

}
