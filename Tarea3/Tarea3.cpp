#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

void menu() {

    int option;

    do {
        cout << endl << "\t\t***Menu***" << endl;
        cout << "\n\t(1) Read text and count words";
        cout << "\n\t(2) Generate a new file with reversed words";
        cout << "\n\t(3) Join CSV files";
        cout << "\n\t(4) Find word and change it";
        cout << "\n\t(5) Exit" << endl;
        cout << "Option => ";
        cin >> option;

        switch (option) {

        case 1: cout << endl << "La 1";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");
            break;
        case 2:cout << endl << "La 2";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");
            break;
        case 3:cout << endl << "La 3";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");
            break;
        case 4:cout << endl << "La 4";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");
            break;
        case 5:cout << endl << "La 5";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");
            break;
        default: cout << endl << "Invalid option";
            cin.clear();
            cin.ignore();
            cout << "\nPRESS ENTER TO CONTINUE..." << endl;
            getchar();
            system("cls");

        }
    } while (option < 6);
    menu();

}

int main() {

    menu();

    return 0;
}