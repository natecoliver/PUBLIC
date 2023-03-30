//
// Created by Nathan Oliver on 4/22/21.
//

#ifndef FINALPROJECT_MILLIONAIRE_H
#define FINALPROJECT_MILLIONAIRE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;
                            // Not sure what I can comment here... all my funtions, setter and getters are here. At one point I had private variables
                            // for every single questions... 90 was too many so I found ways to automate thank goodness.
class Millionaire {

public:
    string MainMenu();
    string NewGame ();
    void JazzGame();
    void ClassicalGame();
    void ModernGame();
    int QuestionNumGenerator();
    void QuestionFinder(int CNum);
    void AnswerSheet();
    void AnswerFinder(int CNum);
    int AnswerChecker(char answer);
    void CreateScoreSheet(string usrname, int score);
    void PrintToScoreSheet(vector<string>scoresheet);

private:
    vector<string>_Master;
    char _CorrectAnswer;
    int _HiddenNum;
    vector<char>Answers;
};


#endif //FINALPROJECT_MILLIONAIRE_H
