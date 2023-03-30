// Final Project - Who Wants to be a Musical Millionaire??
// Nathan Oliver - CSCI 261 B
// May 4, 2021

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include "Millionaire.h"

using namespace std;

int main() {

    // looks simple huh? I coded everything so all you need is the mainmenu() funtion to restart. This is literally just
    // a message to welcome the user. Everything else gets automated!


    Millionaire millionaire;

    cout << "Hello! Welcome to my game of Musical Millionaire." << endl;
    cout << "Are you ready for the the test of a lifetime? Do you deserve $1,000,000?" << endl;
    cout << "Let's find out..." << endl;

    millionaire.MainMenu();

    return 0;
}
