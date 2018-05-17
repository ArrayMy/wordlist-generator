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
    static char charset;
    int static _numStrings;
     static int My;
     static string ArrayString[];
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
    void combination_three(string help);
    void write_in_file(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void choose_form(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son);
    void choose_free();
    void charset_dec();
    void start_choose(char choose);
    void exiting_program();


};
#endif // HEADER_H_INCLUDED
