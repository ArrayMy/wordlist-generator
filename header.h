//
// Created by zdene on 25.03.2018.
//
#ifndef UNTITLED_HEADER_H
#define UNTITLED_HEADER_H
#include <iostream>
#include <string>
using namespace std;


class world_list {
 public:
    string Name;
    string Surname;
    string Date;
    string Pet;
    string Daughter;
    string Daughter_Birthday;
    string Son;
    string Birthday_Son;
    char choose;

    void write_in_file(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void choose_form(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void start_choose(char choose);
    void exiting_program();


};

#endif //UNTITLED_HEADER_H
