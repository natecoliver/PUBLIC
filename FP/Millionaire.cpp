//
// Created by Nathan Oliver on 4/22/21.
//

#include "Millionaire.h"  // Didn't end up using all these but wanted to cover all my bases.
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>

using namespace std;


string Millionaire::MainMenu() { //Pretty simple, this is how everything gets started, and this is where you end up when you get something wrong.
    cout << "Weclcome to the Main Menu! How would you like to proceed?" << endl;
    cout << "[1] Play a game." << endl;
    cout << "[2] Look at all the high scores." << endl;
    int choice;
    cin >> choice;

    if (choice == 1){
        NewGame();
    }
    else {
        cout << "ScoreSheet.txt" << endl;
    }
}

string Millionaire::NewGame(){ //Also pretty simple, just choosing which code to follow for the game.
    cout << "Which music era would you like to focus on?" << endl;
    cout << "[1] Traditional Jazz (1920 - 1960)" << endl;
    cout << "[2] Classical (Baroque through Romantic)" << endl;
    cout << "[3] Modern Times (1980's to present day)" << endl;
    int gametype;
    cin >> gametype;

    if (gametype == 1){
        JazzGame();
    }
    else if (gametype == 2){
        ClassicalGame();
    }
    else {
        ModernGame();
    }
}

int Millionaire::QuestionNumGenerator() { // I don't understand why this call to rand won't work... I've tried different combinations but it's
    srand(time(0));                        // one of the only things that won't work properly in my whole code?? confused...
    _HiddenNum = rand();
    return _HiddenNum;
}

void Millionaire::JazzGame() { // After 5 different iterations and designs, this is what I landed on. Each game is exactly the same, it just
                                // calls different questions from the questions sheet. No matter what happens you're basically guaranteed to end
    string usrname;             // up back at the main menu, just like a normal video game. Took me about 8 hours so I'm pretty proud of it.
    int QNum;                   // The crux of this design was organizing the questions sheet into three major sections (era) and then ordering
    int CNum;                   // Those eras into level of difficulty. Although it required some work it makes everything a bit more streamlined.
    char answer;
    int score = 0;
    cout << "Please enter a user name: ";
    cin >> usrname;
    for (QNum = 1; QNum < 11; QNum++){
        cout << usrname << "/'s score: $" << score << endl;
        cout << "Question " << QNum << endl;
        if (QNum < 5){
            CNum = QuestionNumGenerator()%10;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 8){
            CNum = QuestionNumGenerator()%10 + 10;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 10) {
            CNum = QuestionNumGenerator()%10 + 20;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else {
            CNum = QuestionNumGenerator() % 10 + 20;
            QuestionFinder(CNum);
            cin >> answer;
            if (AnswerChecker(answer) == 1) {
                cout << "Hooray!!! You're a millionaire. Enjoy all the fake money!!!! (And bragging rights)" << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }
        }

    }

}
void Millionaire::ClassicalGame() { //Identical to jazzgame() but pull different questions.
    string usrname;
    int QNum;
    int CNum;
    char answer;
    int score = 0;
    cout << "Please enter a user name: ";
    cin >> usrname;
    for (QNum = 1; QNum < 11; QNum++){
        cout << usrname << "/'s score: $" << score << endl;
        cout << "Question " << QNum << endl;
        if (QNum < 5){
            CNum = QuestionNumGenerator()%10 + 30;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 8){
            CNum = QuestionNumGenerator()%10 + 40;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 10) {
            CNum = QuestionNumGenerator()%10 + 50;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else {
            CNum = QuestionNumGenerator() % 10 + 50;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Hooray!!! You're a millionaire. Enjoy all the fake money!!!! (And bragging rights)" << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }
        }

    }


}
void Millionaire::ModernGame() { // Identical to both jazz and classical game but pulls different questions.
    string usrname;
    int QNum;
    int CNum;
    char answer;
    int score = 0;
    cout << "Please enter a user name: ";
    cin >> usrname;
    for (QNum = 1; QNum < 11; QNum++){
        cout << usrname << "/'s score: $" << score << endl;
        cout << "Question " << QNum << endl;
        if (QNum < 5){
            CNum = QuestionNumGenerator()%60;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 8){
            CNum = QuestionNumGenerator()%10 + 70;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else if (QNum < 10) {
            CNum = QuestionNumGenerator()%10 + 80;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Nice job! Next Question..." << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }

        }
        else {
            CNum = QuestionNumGenerator() % 10 + 80;
            QuestionFinder(CNum);
            cin >> answer;
            AnswerSheet();
            AnswerFinder(CNum);
            AnswerChecker(answer);
            if (AnswerChecker(answer) == 1) {
                cout << "Hooray!!! You're a millionaire. Enjoy all the fake money!!!! (And bragging rights)" << endl;
                score = score + 100,000;
            }
            else {
                cout << "Wow! You're not very good at this game. Better luck next time!!" << endl;
                void CreateScoreSheet();
                void PrintToScoreSheet();
                MainMenu();
            }
        }

    }


}
int Millionaire::AnswerChecker(char answer){ // This is a just really simple checking function to decide the path during the game
    if (answer == _CorrectAnswer){
        return 1;
    }
    else {
        return 2;
    }
}
void Millionaire::AnswerSheet() { //This is also just a simple function to bring in the answer sheet and convert it to a vector for use
    ifstream fileIn ("AnswerSheet.txt"); // by the game. Not sure why the file I/O won't work though?? Confused on this.
    if (fileIn.fail()) {
        cout << "could not access answers" << endl;
    }
    char temp;
    while (!fileIn.eof()) {
        fileIn >> temp;
        Answers.push_back(temp);
    }

}
void Millionaire::AnswerFinder(int CNum){ //This is just a simple setter
    _CorrectAnswer = Answers.at(CNum-1);
}

void Millionaire::QuestionFinder(int CNum){ // Out of everything I wrote, this surprisingly took the longest. I had to write this code
                                                    // while writing the game code because they have to communicate perfectly together. Overall
    ifstream fileIn("MillionaireQuestions.txt"); // This section took about 8 hours as well after many different attempts. One attempt included
                                                    // 400 lines! That's when I knew I was headed in the wrong direction lol. This code basically just
    if (fileIn.fail()) {                            // creates a vector of all the questions, then analyzes it for certain symbols (see the "$'s" on
        cout << "could not access question sheet" << endl; // the questionsheet.txt) to find break points, and records those break points into another
    }                                               // vector. This way all I have to do is call the breakpoints to output each questions!! Super
                                                    // proud of this part too.
    string temp;

    while (getline(fileIn, temp)) {
        _Master.push_back(temp);
    }

    vector<int>locations;
    int spot;

    for (int i = 0; i < _Master.size(); i++){
        if (_Master.at(i) == "$"){
            spot = i;
            locations.push_back(spot);
        }
    }

    vector<string>Question;

    for (int j = locations.at(CNum) + 2; j < locations.at(CNum + 1); j++){
        Question.push_back(_Master.at(j));
    }
    for (int k = 0; k < Question.size(); k++){
        cout << Question.at(k) << endl;
    }
}

void Millionaire::CreateScoreSheet(string usrname, int score){ // I'm having trouble with why this File I/O works but not the others?
    ifstream fileIn("ScoreSheet.txt");                      // They look identical to me. Also not sure why it's telling me that
    if (fileIn.fail()){                                        // the function isn't being used when it appears in every game function.
        cout << "could not access scoresheet" << endl;
    }
    vector<string>scoresheet;
    string temp;
    string t2;

    while(!fileIn.eof()){
        fileIn >> temp;
        scoresheet.push_back(temp);
    }
    stringstream ss;
    ss << score;
    ss >> t2;

    scoresheet.push_back(usrname);
    scoresheet.push_back(t2);
    fileIn.close();
}

void Millionaire::PrintToScoreSheet(vector<string> scoresheet) { // Just a really simple code to take in the scoresheet, add to it, then spit it back out.
    ofstream fileOpen ("ScoreSheet.txt");
    if (fileOpen.fail()){
        cout << "Failed to create scoresheet" << endl;
    }
    fileOpen << scoresheet[0] << "    $" << scoresheet[1] << endl;
    fileOpen << scoresheet[2] << "    $" << scoresheet[3] << endl;
    fileOpen << scoresheet[4] << "    $" << scoresheet[5] << endl;
    fileOpen << scoresheet[6] << "    $" << scoresheet[7] << endl;
    fileOpen << scoresheet[8] << "    $" << scoresheet[9] << endl;
    fileOpen << scoresheet[10] << "    $" << scoresheet[11] << endl;
    fileOpen << scoresheet[12] << "    $" << scoresheet[13] << endl;
    fileOpen << scoresheet[14] << "    $" << scoresheet[15] << endl;
    fileOpen << scoresheet[16] << "    $" << scoresheet[17] << endl;
    fileOpen << scoresheet[18] << "    $" << scoresheet[19] << endl;
    fileOpen << scoresheet[20] << "    $" << scoresheet[21] << endl;
    fileOpen << scoresheet[22] << "    $" << scoresheet[23] << endl;
    fileOpen << scoresheet[24] << "    $" << scoresheet[25] << endl;
    fileOpen << scoresheet[26] << "    $" << scoresheet[27] << endl;
    fileOpen << scoresheet[28] << "    $" << scoresheet[29] << endl;
    fileOpen << scoresheet[30] << "    $" << scoresheet[31] << endl;
    fileOpen << scoresheet[32] << "    $" << scoresheet[33] << endl;

    fileOpen.close();
}





