//
// Created by zdene on 25.03.2018.
//
#include <string>
#ifndef UNTITLED_HEADER_H
#define UNTITLED_HEADER_H

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

    void world_list::write_in_file(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son){};
    void world_list::world_list(){};
    void world_list::choose_form(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son){};
    void world_list::start_choose(choose){};
    void world_list::exiting_program(){};


};

#endif //UNTITLED_HEADER_H
