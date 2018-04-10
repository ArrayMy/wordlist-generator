//
// Created by zdene on 25.03.2018.
//
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;


class world_list {
 public:
     static int My;
     static char Array[];
     char help2;
     string help;
     string help1;
    string Name;
    string Surname;
    string Date;
    string Pet;
    string Daughter;
    string Daughter_Birthday;
    string Son;
    string Birthday_Son;
    char choose;

    void convert_to_Ascii(char help); /*HELP METHOD FOR COMBINATION TWO!*/
    void combination_two_stringConvert(string help);
    void combination_one(string help,string help1);
    void write_in_file(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void choose_form(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void start_choose(char choose);
    void exiting_program();


};
#endif // HEADER_H_INCLUDED
