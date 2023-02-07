#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

void menu();
void pressEnterToContinue();
void readTextAndCountWords();
void countWords(ifstream *, string);

int main() {

    setlocale(LC_ALL, "es_ES.UTF-8");

    menu();

    return 0;
}

void countWords(ifstream *file,string text) {

    int wordCount = 1;

    if (file->is_open()) {

        while (getline(*file, text)) {
            cout << text << endl;
            for (int i = 0; i < text.length(); i++) {
                if (text[i] == ' ') {
                    wordCount++;
                }
            }
        }
        file->close();
    }
    cout << "\n\nNumber of words: " << wordCount;

}

void readTextAndCountWords() {

    ifstream *file = new ifstream();
    string text;

    file->open("archivo.txt", ios::in);

    if (file->fail()) {
        cout << "Could not open the file";
        pressEnterToContinue();
        menu();
    }

    countWords(file,text);
 

}

void pressEnterToContinue() {
    cin.clear();
    cin.ignore();
    cout << "\n\n\nPRESS ENTER TO CONTINUE..." << endl;
    getchar();
    system("cls");
}

void menu() {

    int option;

    do {
        cout << endl << "\t\t***Menu***" << endl;
        cout << "\n\t(1) Read text and count words";
        cout << "\n\t(2) Generate a new file with reversed words";
        cout << "\n\t(3) Join CSV files";
        cout << "\n\t(4) Find word and change it";
        cout << "\n\t(5) Exit";
        cout << "\n\tOption => ";
        cin >> option;
        system("cls");
        switch (option) {

        case 1: cout << "\n"; readTextAndCountWords();
            pressEnterToContinue();
            break;
        case 2:cout << endl << "La 2";
            pressEnterToContinue();
            break;
        case 3:cout << endl << "La 3";
            pressEnterToContinue();
            break;
        case 4:cout << endl << "La 4";
            pressEnterToContinue();
            break;
        case 5: cout << "\n Bye :)";
            exit(0);

            break;
        default: cout << endl << "Invalid option";
            pressEnterToContinue();

        }
    } while (option < 6);
    menu();

}