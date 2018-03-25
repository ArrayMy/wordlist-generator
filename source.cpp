//
// Created by zdene on 25.03.2018.
//
#include "header.h"
#include <iostream>
#include <math.h>
#include <fstream>

void world_list::world_list(){};

void world_list::exiting_program(){
    cout<<"Exiting Program"<<endl;
    cout<<"Developed by ARRAY MY"<<endl;
    system("pause");
};

void world_list::choose_form(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son){
    cout << "Set Name"<<endl;
    cin >> Name;
    cout << "Set Surname"<<endl;
    cin >> Surname;
    cout << "Set Birthdate"<<endl;
    cin >> Date;
    cout << "Set Pet Name"<<endl;
    cin >> Pet;
    cout << "Set Daughter Name"<<endl;
    cin >> Daghter;
    cout << "Set Daughters Birthday"<<endl;
    cin >> Daughter_Birthday;
    cout << "Son Name"<<endl;
    cin >> Son;
    cout << "Birthday Son"<<endl;
    cin >> Birthday_Son;

    cout << "I'm creating file with WorldList, wait idiot!";
    world_list.write_in_file(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
};


void world_list::write_in_file(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son){
    ofstream file("World_List_Array_My.txt");

    file <<Name<<"\n" <<endl;
    file <<Surname<<"\n" <<endl;
    file <<Date<<"\n" <<endl;
    file <<Pet<<"\n" <<endl;
    file <<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<"\n" <<endl;
    file <<Birthday_Son<<"\n" <<endl;

    /*Name generating*/
    file <<Name<<Surname<<"\n" <<endl;
    file <<Name<<Date<<"\n" <<endl;
    file <<Name<<Pet<<"\n" <<endl;
    file <<Name<<Daughter<<"\n" <<endl;
    file <<Name<<Daughter_Birthday<<"\n" <<endl;
    file <<Name<<Son<<"\n" <<endl;
    file <<Name<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Name<<"_"<<Surname<<"\n" <<endl;
    file <<Name<<"_"<<Date<<"\n" <<endl;
    file <<Name<<"_"<<Pet<<"\n" <<endl;
    file <<Name<<"_"<<Daughter<<"\n" <<endl;
    file <<Name<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Name<<"_"<<Son<<"\n" <<endl;
    file <<Name<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Name<<"-"<<Surname<<"\n" <<endl;
    file <<Name<<"-"<<Date<<"\n" <<endl;
    file <<Name<<"-"<<Pet<<"\n" <<endl;
    file <<Name<<"-"<<Daughter<<"\n" <<endl;
    file <<Name<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Name<<"-"<<Son<<"\n" <<endl;
    file <<Name<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Name<<"."<<Surname<<"\n" <<endl;
    file <<Name<<"."<<Date<<"\n" <<endl;
    file <<Name<<"."<<Pet<<"\n" <<endl;
    file <<Name<<"."<<Daughter<<"\n" <<endl;
    file <<Name<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Name<<"."<<Son<<"\n" <<endl;
    file <<Name<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Name<<" "<<Surname<<"\n" <<endl;
    file <<Name<<" "<<Date<<"\n" <<endl;
    file <<Name<<" "<<Pet<<"\n" <<endl;
    file <<Name<<" "<<Daughter<<"\n" <<endl;
    file <<Name<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Name<<" "<<Son<<"\n" <<endl;
    file <<Name<<" "<<Birthday_Son<<"\n" <<endl;

    /*Surname generating*/
    file <<Surname<<Name<<"\n" <<endl;
    file <<Surname<<Date<<"\n" <<endl;
    file <<Surname<<Pet<<"\n" <<endl;
    file <<Surname<<Daughter<<"\n" <<endl;
    file <<Surname<<Daughter_Birthday<<"\n" <<endl;
    file <<Surname<<Son<<"\n" <<endl;
    file <<Surname<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Surname<<"_"<<Name<<"\n" <<endl;
    file <<Surname<<"_"<<Date<<"\n" <<endl;
    file <<Surname<<"_"<<Pet<<"\n" <<endl;
    file <<Surname<<"_"<<Daughter<<"\n" <<endl;
    file <<Surname<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Surname<<"_"<<Son<<"\n" <<endl;
    file <<Surname<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Surname<<"-"<<Name<<"\n" <<endl;
    file <<Surname<<"-"<<Date<<"\n" <<endl;
    file <<Surname<<"-"<<Pet<<"\n" <<endl;
    file <<Surname<<"-"<<Daughter<<"\n" <<endl;
    file <<Surname<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Surname<<"-"<<Son<<"\n" <<endl;
    file <<Surname<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Surname<<"."<<Name<<"\n" <<endl;
    file <<Surname<<"."<<Date<<"\n" <<endl;
    file <<Surname<<"."<<Pet<<"\n" <<endl;
    file <<Surname<<"."<<Daughter<<"\n" <<endl;
    file <<Surname<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Surname<<"."<<Son<<"\n" <<endl;
    file <<Surname<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Surname<<" "<<Name<<"\n" <<endl;
    file <<Surname<<" "<<Date<<"\n" <<endl;
    file <<Surname<<" "<<Pet<<"\n" <<endl;
    file <<Surname<<" "<<Daughter<<"\n" <<endl;
    file <<Surname<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Surname<<" "<<Son<<"\n" <<endl;
    file <<Surname<<" "<<Birthday_Son<<"\n" <<endl;

    /*Date generating*/
    file <<Date<<Name<<"\n" <<endl;
    file <<Date<<Surname<<"\n" <<endl;
    file <<Date<<Pet<<"\n" <<endl;
    file <<Date<<Daughter<<"\n" <<endl;
    file <<Date<<Daughter_Birthday<<"\n" <<endl;
    file <<Date<<Son<<"\n" <<endl;
    file <<Date<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Date<<"_"<<Name<<"\n" <<endl;
    file <<Date<<"_"<<Surname<<"\n" <<endl;
    file <<Date<<"_"<<Pet<<"\n" <<endl;
    file <<Date<<"_"<<Daughter<<"\n" <<endl;
    file <<Date<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Date<<"_"<<Son<<"\n" <<endl;
    file <<Date<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Date<<"-"<<Name<<"\n" <<endl;
    file <<Date<<"-"<<Surname<<"\n" <<endl;
    file <<Date<<"-"<<Pet<<"\n" <<endl;
    file <<Date<<"-"<<Daughter<<"\n" <<endl;
    file <<Date<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Date<<"-"<<Son<<"\n" <<endl;
    file <<Date<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Date<<"."<<Name<<"\n" <<endl;
    file <<Date<<"."<<Surname<<"\n" <<endl;
    file <<Date<<"."<<Pet<<"\n" <<endl;
    file <<Date<<"."<<Daughter<<"\n" <<endl;
    file <<Date<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Date<<"."<<Son<<"\n" <<endl;
    file <<Date<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Date<<" "<<Name<<"\n" <<endl;
    file <<Date<<" "<<Surname<<"\n" <<endl;
    file <<Date<<" "<<Pet<<"\n" <<endl;
    file <<Date<<" "<<Daughter<<"\n" <<endl;
    file <<Date<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Date<<" "<<Son<<"\n" <<endl;
    file <<Date<<" "<<Birthday_Son<<"\n" <<endl;

    /*Pet generating*/
    file <<Pet<<Name<<"\n" <<endl;
    file <<Pet<<Surname<<"\n" <<endl;
    file <<Pet<<Date<<"\n" <<endl;
    file <<Pet<<Daughter<<"\n" <<endl;
    file <<Pet<<Daughter_Birthday<<"\n" <<endl;
    file <<Pet<<Son<<"\n" <<endl;
    file <<Pet<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Pet<<"_"<<Name<<"\n" <<endl;
    file <<Pet<<"_"<<Surname<<"\n" <<endl;
    file <<Pet<<"_"<<Date<<"\n" <<endl;
    file <<Pet<<"_"<<Daughter<<"\n" <<endl;
    file <<Pet<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Pet<<"_"<<Son<<"\n" <<endl;
    file <<Pet<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Pet<<"-"<<Name<<"\n" <<endl;
    file <<Pet<<"-"<<Surname<<"\n" <<endl;
    file <<Pet<<"-"<<Date<<"\n" <<endl;
    file <<Pet<<"-"<<Daughter<<"\n" <<endl;
    file <<Pet<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Pet<<"-"<<Son<<"\n" <<endl;
    file <<Pet<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Pet<<"."<<Name<<"\n" <<endl;
    file <<Pet<<"."<<Surname<<"\n" <<endl;
    file <<Pet<<"."<<Date<<"\n" <<endl;
    file <<Pet<<"."<<Daughter<<"\n" <<endl;
    file <<Pet<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Pet<<"."<<Son<<"\n" <<endl;
    file <<Pet<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Pet<<" "<<Name<<"\n" <<endl;
    file <<Pet<<" "<<Surname<<"\n" <<endl;
    file <<Pet<<" "<<Date<<"\n" <<endl;
    file <<Pet<<" "<<Daughter<<"\n" <<endl;
    file <<Pet<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Pet<<" "<<Son<<"\n" <<endl;
    file <<Pet<<" "<<Birthday_Son<<"\n" <<endl;

    /*Daughter generating*/
    file <<Daughter<<Name<<"\n" <<endl;
    file <<Daughter<<Surname<<"\n" <<endl;
    file <<Daughter<<Date<<"\n" <<endl;
    file <<Daughter<<Pet<<"\n" <<endl;
    file <<Daughter<<Daughter_Birthday<<"\n" <<endl;
    file <<Daughter<<Son<<"\n" <<endl;
    file <<Daughter<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Daughter<<"_"<<Name<<"\n" <<endl;
    file <<Daughter<<"_"<<Surname<<"\n" <<endl;
    file <<Daughter<<"_"<<Date<<"\n" <<endl;
    file <<Daughter<<"_"<<Pet<<"\n" <<endl;
    file <<Daughter<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Daughter<<"_"<<Son<<"\n" <<endl;
    file <<Daughter<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Daughter<<"-"<<Name<<"\n" <<endl;
    file <<Daughter<<"-"<<Surname<<"\n" <<endl;
    file <<Daughter<<"-"<<Date<<"\n" <<endl;
    file <<Daughter<<"-"<<Pet<<"\n" <<endl;
    file <<Daughter<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Daughter<<"-"<<Son<<"\n" <<endl;
    file <<Daughter<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Daughter<<"."<<Name<<"\n" <<endl;
    file <<Daughter<<"."<<Surname<<"\n" <<endl;
    file <<Daughter<<"."<<Date<<"\n" <<endl;
    file <<Daughter<<"."<<Pet<<"\n" <<endl;
    file <<Daughter<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Daughter<<"."<<Son<<"\n" <<endl;
    file <<Daughter<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Daughter<<" "<<Name<<"\n" <<endl;
    file <<Daughter<<" "<<Surname<<"\n" <<endl;
    file <<Daughter<<" "<<Date<<"\n" <<endl;
    file <<Daughter<<" "<<Pet<<"\n" <<endl;
    file <<Daughter<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Daughter<<" "<<Son<<"\n" <<endl;
    file <<Daughter<<" "<<Birthday_Son<<"\n" <<endl;

    /*Daughter_Birthday generating*/
    file <<Daughter_Birthday<<Name<<"\n" <<endl;
    file <<Daughter_Birthday<<Surname<<"\n" <<endl;
    file <<Daughter_Birthday<<Date<<"\n" <<endl;
    file <<Daughter_Birthday<<Pet<<"\n" <<endl;
    file <<Daughter_Birthday<<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<Son<<"\n" <<endl;
    file <<Daughter_Birthday<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Daughter_Birthday<<"_"<<Name<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Surname<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Date<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Pet<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Son<<"\n" <<endl;
    file <<Daughter_Birthday<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Daughter_Birthday<<"-"<<Name<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Surname<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Date<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Pet<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Son<<"\n" <<endl;
    file <<Daughter_Birthday<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Daughter_Birthday<<"."<<Name<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Surname<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Date<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Pet<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Son<<"\n" <<endl;
    file <<Daughter_Birthday<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Daughter_Birthday<<" "<<Name<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Surname<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Date<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Pet<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Daughter<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Son<<"\n" <<endl;
    file <<Daughter_Birthday<<" "<<Birthday_Son<<"\n" <<endl;

    /*Son generating*/
    file <<Son<<Name<<"\n" <<endl;
    file <<Son<<Surname<<"\n" <<endl;
    file <<Son<<Date<<"\n" <<endl;
    file <<Son<<Pet<<"\n" <<endl;
    file <<Son<<Daughter<<"\n" <<endl;
    file <<Son<<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<Birthday_Son<<"\n" <<endl;
    /*_*/
    file <<Son<<"_"<<Name<<"\n" <<endl;
    file <<Son<<"_"<<Surname<<"\n" <<endl;
    file <<Son<<"_"<<Date<<"\n" <<endl;
    file <<Son<<"_"<<Pet<<"\n" <<endl;
    file <<Son<<"_"<<Daughter<<"\n" <<endl;
    file <<Son<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<"_"<<Birthday_Son<<"\n" <<endl;
    /*-*/
    file <<Son<<"-"<<Name<<"\n" <<endl;
    file <<Son<<"-"<<Surname<<"\n" <<endl;
    file <<Son<<"-"<<Date<<"\n" <<endl;
    file <<Son<<"-"<<Pet<<"\n" <<endl;
    file <<Son<<"-"<<Daughter<<"\n" <<endl;
    file <<Son<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<"-"<<Birthday_Son<<"\n" <<endl;
    /*.*/
    file <<Son<<"."<<Name<<"\n" <<endl;
    file <<Son<<"."<<Surname<<"\n" <<endl;
    file <<Son<<"."<<Date<<"\n" <<endl;
    file <<Son<<"."<<Pet<<"\n" <<endl;
    file <<Son<<"."<<Daughter<<"\n" <<endl;
    file <<Son<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<"."<<Birthday_Son<<"\n" <<endl;
    /* */
    file <<Son<<" "<<Name<<"\n" <<endl;
    file <<Son<<" "<<Surname<<"\n" <<endl;
    file <<Son<<" "<<Date<<"\n" <<endl;
    file <<Son<<" "<<Pet<<"\n" <<endl;
    file <<Son<<" "<<Daughter<<"\n" <<endl;
    file <<Son<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Son<<" "<<Birthday_Son<<"\n" <<endl;

    /*Brithday_Son generating*/
    file <<Birthday_Son<<Name<<"\n" <<endl;
    file <<Birthday_Son<<Surname<<"\n" <<endl;
    file <<Birthday_Son<<Date<<"\n" <<endl;
    file <<Birthday_Son<<Pet<<"\n" <<endl;
    file <<Birthday_Son<<Daughter<<"\n" <<endl;
    file <<Birthday_Son<<Daughter_Birthday<<"\n" <<endl;
    file <<Birthday_Son<<Son<<"\n" <<endl;
    /*_*/
    file <<Birthday_Son<<"_"<<Name<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Surname<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Date<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Pet<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Daughter<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Daughter_Birthday<<"\n" <<endl;
    file <<Birthday_Son<<"_"<<Son<<"\n" <<endl;
    /*-*/
    file <<Birthday_Son<<"-"<<Name<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Surname<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Date<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Pet<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Daughter<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Daughter_Birthday<<"\n" <<endl;
    file <<Birthday_Son<<"-"<<Son<<"\n" <<endl;
    /*.*/
    file <<Birthday_Son<<"."<<Name<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Surname<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Date<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Pet<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Daughter<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Daughter_Birthday<<"\n" <<endl;
    file <<Birthday_Son<<"."<<Son<<"\n" <<endl;
    /* */
    file <<Birthday_Son<<" "<<Name<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Surname<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Date<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Pet<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Daughter<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Daughter_Birthday<<"\n" <<endl;
    file <<Birthday_Son<<" "<<Son<<"\n" <<endl;
};

void world_list::start_choose(choose) {
    cout << "Hello I'm World List Generator! :D" << endl;
    cout << "1.Form OR 2.Random_Strings" << endl;
    cin >> choose;
    if (choose = "1") {
        world_list.choose_form(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
    } else if (choose = "2") {
      cout << "Not complete, I'm so Tired";
    } else {
        world_list.exiting_program();
    }
};



