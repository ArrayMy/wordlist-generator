//
// Created by zdene on 25.03.2018.
//
#include "header.h"
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


void world_list::exiting_program(){
    cout<<"Exiting Program"<<endl;
    cout<<"Developed by ARRAY MY"<<endl;
    system("pause");
};

void world_list::choose_form(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son){
    cout << "Set Name"<<endl;
    cin >> Name;
    cout << "Set Surname"<<endl;
    cin >> Surname;
    cout << "Set Birthdate"<<endl;
    cin >> Date;
    cout << "Set Pet Name"<<endl;
    cin >> Pet;
    cout << "Set Daughter Name"<<endl;
    cin >> Daughter;
    cout << "Set Daughters Birthday"<<endl;
    cin >> Daughter_Birthday;
    cout << "Son Name"<<endl;
    cin >> Son;
    cout << "Birthday Son"<<endl;
    cin >> Birthday_Son;

    cout << "I'm creating file with WorldList, wait idiot!";
    world_list::write_in_file(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
};


void world_list::write_in_file(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son){
    ofstream file("World_List_Array_My.txt");

    file <<Name<<endl;
    file <<Surname<<endl;
    file <<Date<<endl;
    file <<Pet<<endl;
    file <<Daughter<<endl;
    file <<Daughter_Birthday<<endl;
    file <<Son<<endl;
    file <<Birthday_Son<<endl;

    /*Name generating*/
    file <<Name<<Surname<<endl;
    file <<Name<<Date<<endl;
    file <<Name<<Pet<<endl;
    file <<Name<<Daughter<<endl;
    file <<Name<<Daughter_Birthday<<endl;
    file <<Name<<Son<<endl;
    file <<Name<<Birthday_Son<<endl;
    /*_*/
    file <<Name<<"_"<<Surname<<endl;
    file <<Name<<"_"<<Date<<endl;
    file <<Name<<"_"<<Pet<<endl;
    file <<Name<<"_"<<Daughter<<endl;
    file <<Name<<"_"<<Daughter_Birthday<<endl;
    file <<Name<<"_"<<Son<<endl;
    file <<Name<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Name<<"-"<<Surname<<endl;
    file <<Name<<"-"<<Date<<endl;
    file <<Name<<"-"<<Pet<<endl;
    file <<Name<<"-"<<Daughter<<endl;
    file <<Name<<"-"<<Daughter_Birthday<<endl;
    file <<Name<<"-"<<Son<<endl;
    file <<Name<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Name<<"."<<Surname<<endl;
    file <<Name<<"."<<Date<<endl;
    file <<Name<<"."<<Pet<<endl;
    file <<Name<<"."<<Daughter<<endl;
    file <<Name<<"."<<Daughter_Birthday<<endl;
    file <<Name<<"."<<Son<<endl;
    file <<Name<<"."<<Birthday_Son<<endl;
    /* */
    file <<Name<<" "<<Surname<<endl;
    file <<Name<<" "<<Date<<endl;
    file <<Name<<" "<<Pet<<endl;
    file <<Name<<" "<<Daughter<<endl;
    file <<Name<<" "<<Daughter_Birthday<<endl;
    file <<Name<<" "<<Son<<endl;
    file <<Name<<" "<<Birthday_Son<<endl;

    /*Surname generating*/
    file <<Surname<<Name<<endl;
    file <<Surname<<Date<<endl;
    file <<Surname<<Pet<<endl;
    file <<Surname<<Daughter<<endl;
    file <<Surname<<Daughter_Birthday<<endl;
    file <<Surname<<Son<<endl;
    file <<Surname<<Birthday_Son<<endl;
    /*_*/
    file <<Surname<<"_"<<Name<<endl;
    file <<Surname<<"_"<<Date<<endl;
    file <<Surname<<"_"<<Pet<<endl;
    file <<Surname<<"_"<<Daughter<<endl;
    file <<Surname<<"_"<<Daughter_Birthday<<endl;
    file <<Surname<<"_"<<Son<<endl;
    file <<Surname<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Surname<<"-"<<Name<<endl;
    file <<Surname<<"-"<<Date<<endl;
    file <<Surname<<"-"<<Pet<<endl;
    file <<Surname<<"-"<<Daughter<<endl;
    file <<Surname<<"-"<<Daughter_Birthday<<endl;
    file <<Surname<<"-"<<Son<<endl;
    file <<Surname<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Surname<<"."<<Name<<endl;
    file <<Surname<<"."<<Date<<endl;
    file <<Surname<<"."<<Pet<<endl;
    file <<Surname<<"."<<Daughter<<endl;
    file <<Surname<<"."<<Daughter_Birthday<<endl;
    file <<Surname<<"."<<Son<<endl;
    file <<Surname<<"."<<Birthday_Son<<endl;
    /* */
    file <<Surname<<" "<<Name<<endl;
    file <<Surname<<" "<<Date<<endl;
    file <<Surname<<" "<<Pet<<endl;
    file <<Surname<<" "<<Daughter<<endl;
    file <<Surname<<" "<<Daughter_Birthday<<endl;
    file <<Surname<<" "<<Son<<endl;
    file <<Surname<<" "<<Birthday_Son<<endl;

    /*Date generating*/
    file <<Date<<Name<<endl;
    file <<Date<<Surname<<endl;
    file <<Date<<Pet<<endl;
    file <<Date<<Daughter<<endl;
    file <<Date<<Daughter_Birthday<<endl;
    file <<Date<<Son<<endl;
    file <<Date<<Birthday_Son<<endl;
    /*_*/
    file <<Date<<"_"<<Name<<endl;
    file <<Date<<"_"<<Surname<<endl;
    file <<Date<<"_"<<Pet<<endl;
    file <<Date<<"_"<<Daughter<<endl;
    file <<Date<<"_"<<Daughter_Birthday<<endl;
    file <<Date<<"_"<<Son<<endl;
    file <<Date<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Date<<"-"<<Name<<endl;
    file <<Date<<"-"<<Surname<<endl;
    file <<Date<<"-"<<Pet<<endl;
    file <<Date<<"-"<<Daughter<<endl;
    file <<Date<<"-"<<Daughter_Birthday<<endl;
    file <<Date<<"-"<<Son<<endl;
    file <<Date<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Date<<"."<<Name<<endl;
    file <<Date<<"."<<Surname<<endl;
    file <<Date<<"."<<Pet<<endl;
    file <<Date<<"."<<Daughter<<endl;
    file <<Date<<"."<<Daughter_Birthday<<endl;
    file <<Date<<"."<<Son<<endl;
    file <<Date<<"."<<Birthday_Son<<endl;
    /* */
    file <<Date<<" "<<Name<<endl;
    file <<Date<<" "<<Surname<<endl;
    file <<Date<<" "<<Pet<<endl;
    file <<Date<<" "<<Daughter<<endl;
    file <<Date<<" "<<Daughter_Birthday<<endl;
    file <<Date<<" "<<Son<<endl;
    file <<Date<<" "<<Birthday_Son<<endl;

    /*Pet generating*/
    file <<Pet<<Name<<endl;
    file <<Pet<<Surname<<endl;
    file <<Pet<<Date<<endl;
    file <<Pet<<Daughter<<endl;
    file <<Pet<<Daughter_Birthday<<endl;
    file <<Pet<<Son<<endl;
    file <<Pet<<Birthday_Son<<endl;
    /*_*/
    file <<Pet<<"_"<<Name<<endl;
    file <<Pet<<"_"<<Surname<<endl;
    file <<Pet<<"_"<<Date<<endl;
    file <<Pet<<"_"<<Daughter<<endl;
    file <<Pet<<"_"<<Daughter_Birthday<<endl;
    file <<Pet<<"_"<<Son<<endl;
    file <<Pet<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Pet<<"-"<<Name<<endl;
    file <<Pet<<"-"<<Surname<<endl;
    file <<Pet<<"-"<<Date<<endl;
    file <<Pet<<"-"<<Daughter<<endl;
    file <<Pet<<"-"<<Daughter_Birthday<<endl;
    file <<Pet<<"-"<<Son<<endl;
    file <<Pet<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Pet<<"."<<Name<<endl;
    file <<Pet<<"."<<Surname<<endl;
    file <<Pet<<"."<<Date<<endl;
    file <<Pet<<"."<<Daughter<<endl;
    file <<Pet<<"."<<Daughter_Birthday<<endl;
    file <<Pet<<"."<<Son<<endl;
    file <<Pet<<"."<<Birthday_Son<<endl;
    /* */
    file <<Pet<<" "<<Name<<endl;
    file <<Pet<<" "<<Surname<<endl;
    file <<Pet<<" "<<Date<<endl;
    file <<Pet<<" "<<Daughter<<endl;
    file <<Pet<<" "<<Daughter_Birthday<<endl;
    file <<Pet<<" "<<Son<<endl;
    file <<Pet<<" "<<Birthday_Son<<endl;

    /*Daughter generating*/
    file <<Daughter<<Name<<endl;
    file <<Daughter<<Surname<<endl;
    file <<Daughter<<Date<<endl;
    file <<Daughter<<Pet<<endl;
    file <<Daughter<<Daughter_Birthday<<endl;
    file <<Daughter<<Son<<endl;
    file <<Daughter<<Birthday_Son<<endl;
    /*_*/
    file <<Daughter<<"_"<<Name<<endl;
    file <<Daughter<<"_"<<Surname<<endl;
    file <<Daughter<<"_"<<Date<<endl;
    file <<Daughter<<"_"<<Pet<<endl;
    file <<Daughter<<"_"<<Daughter_Birthday<<endl;
    file <<Daughter<<"_"<<Son<<endl;
    file <<Daughter<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Daughter<<"-"<<Name<<endl;
    file <<Daughter<<"-"<<Surname<<endl;
    file <<Daughter<<"-"<<Date<<endl;
    file <<Daughter<<"-"<<Pet<<endl;
    file <<Daughter<<"-"<<Daughter_Birthday<<endl;
    file <<Daughter<<"-"<<Son<<endl;
    file <<Daughter<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Daughter<<"."<<Name<<endl;
    file <<Daughter<<"."<<Surname<<endl;
    file <<Daughter<<"."<<Date<<endl;
    file <<Daughter<<"."<<Pet<<endl;
    file <<Daughter<<"."<<Daughter_Birthday<<endl;
    file <<Daughter<<"."<<Son<<endl;
    file <<Daughter<<"."<<Birthday_Son<<endl;
    /* */
    file <<Daughter<<" "<<Name<<endl;
    file <<Daughter<<" "<<Surname<<endl;
    file <<Daughter<<" "<<Date<<endl;
    file <<Daughter<<" "<<Pet<<endl;
    file <<Daughter<<" "<<Daughter_Birthday<<endl;
    file <<Daughter<<" "<<Son<<endl;
    file <<Daughter<<" "<<Birthday_Son<<endl;

    /*Daughter_Birthday generating*/
    file <<Daughter_Birthday<<Name<<endl;
    file <<Daughter_Birthday<<Surname<<endl;
    file <<Daughter_Birthday<<Date<<endl;
    file <<Daughter_Birthday<<Pet<<endl;
    file <<Daughter_Birthday<<Daughter<<endl;
    file <<Daughter_Birthday<<Son<<endl;
    file <<Daughter_Birthday<<Birthday_Son<<endl;
    /*_*/
    file <<Daughter_Birthday<<"_"<<Name<<endl;
    file <<Daughter_Birthday<<"_"<<Surname<<endl;
    file <<Daughter_Birthday<<"_"<<Date<<endl;
    file <<Daughter_Birthday<<"_"<<Pet<<endl;
    file <<Daughter_Birthday<<"_"<<Daughter<<endl;
    file <<Daughter_Birthday<<"_"<<Son<<endl;
    file <<Daughter_Birthday<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Daughter_Birthday<<"-"<<Name<<endl;
    file <<Daughter_Birthday<<"-"<<Surname<<endl;
    file <<Daughter_Birthday<<"-"<<Date<<endl;
    file <<Daughter_Birthday<<"-"<<Pet<<endl;
    file <<Daughter_Birthday<<"-"<<Daughter<<endl;
    file <<Daughter_Birthday<<"-"<<Son<<endl;
    file <<Daughter_Birthday<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Daughter_Birthday<<"."<<Name<<endl;
    file <<Daughter_Birthday<<"."<<Surname<<endl;
    file <<Daughter_Birthday<<"."<<Date<<endl;
    file <<Daughter_Birthday<<"."<<Pet<<endl;
    file <<Daughter_Birthday<<"."<<Daughter<<endl;
    file <<Daughter_Birthday<<"."<<Son<<endl;
    file <<Daughter_Birthday<<"."<<Birthday_Son<<endl;
    /* */
    file <<Daughter_Birthday<<" "<<Name<<endl;
    file <<Daughter_Birthday<<" "<<Surname<<endl;
    file <<Daughter_Birthday<<" "<<Date<<endl;
    file <<Daughter_Birthday<<" "<<Pet<<endl;
    file <<Daughter_Birthday<<" "<<Daughter<<endl;
    file <<Daughter_Birthday<<" "<<Son<<endl;
    file <<Daughter_Birthday<<" "<<Birthday_Son<<endl;

    /*Son generating*/
    file <<Son<<Name<<endl;
    file <<Son<<Surname<<endl;
    file <<Son<<Date<<endl;
    file <<Son<<Pet<<endl;
    file <<Son<<Daughter<<endl;
    file <<Son<<Daughter_Birthday<<endl;
    file <<Son<<Birthday_Son<<endl;
    /*_*/
    file <<Son<<"_"<<Name<<endl;
    file <<Son<<"_"<<Surname<<endl;
    file <<Son<<"_"<<Date<<endl;
    file <<Son<<"_"<<Pet<<endl;
    file <<Son<<"_"<<Daughter<<endl;
    file <<Son<<"_"<<Daughter_Birthday<<endl;
    file <<Son<<"_"<<Birthday_Son<<endl;
    /*-*/
    file <<Son<<"-"<<Name<<endl;
    file <<Son<<"-"<<Surname<<endl;
    file <<Son<<"-"<<Date<<endl;
    file <<Son<<"-"<<Pet<<endl;
    file <<Son<<"-"<<Daughter<<endl;
    file <<Son<<"-"<<Daughter_Birthday<<endl;
    file <<Son<<"-"<<Birthday_Son<<endl;
    /*.*/
    file <<Son<<"."<<Name<<endl;
    file <<Son<<"."<<Surname<<endl;
    file <<Son<<"."<<Date<<endl;
    file <<Son<<"."<<Pet<<endl;
    file <<Son<<"."<<Daughter<<endl;
    file <<Son<<"."<<Daughter_Birthday<<endl;
    file <<Son<<"."<<Birthday_Son<<endl;
    /* */
    file <<Son<<" "<<Name<<endl;
    file <<Son<<" "<<Surname<<endl;
    file <<Son<<" "<<Date<<endl;
    file <<Son<<" "<<Pet<<endl;
    file <<Son<<" "<<Daughter<<endl;
    file <<Son<<" "<<Daughter_Birthday<<endl;
    file <<Son<<" "<<Birthday_Son<<endl;

    /*Brithday_Son generating*/
    file <<Birthday_Son<<Name<<endl;
    file <<Birthday_Son<<Surname<<endl;
    file <<Birthday_Son<<Date<<endl;
    file <<Birthday_Son<<Pet<<endl;
    file <<Birthday_Son<<Daughter<<endl;
    file <<Birthday_Son<<Daughter_Birthday<<endl;
    file <<Birthday_Son<<Son<<endl;
    /*_*/
    file <<Birthday_Son<<"_"<<Name<<endl;
    file <<Birthday_Son<<"_"<<Surname<<endl;
    file <<Birthday_Son<<"_"<<Date<<endl;
    file <<Birthday_Son<<"_"<<Pet<<endl;
    file <<Birthday_Son<<"_"<<Daughter<<endl;
    file <<Birthday_Son<<"_"<<Daughter_Birthday<<endl;
    file <<Birthday_Son<<"_"<<Son<<endl;
    /*-*/
    file <<Birthday_Son<<"-"<<Name<<endl;
    file <<Birthday_Son<<"-"<<Surname<<endl;
    file <<Birthday_Son<<"-"<<Date<<endl;
    file <<Birthday_Son<<"-"<<Pet<<endl;
    file <<Birthday_Son<<"-"<<Daughter<<endl;
    file <<Birthday_Son<<"-"<<Daughter_Birthday<<endl;
    file <<Birthday_Son<<"-"<<Son<<endl;
    /*.*/
    file <<Birthday_Son<<"."<<Name<<endl;
    file <<Birthday_Son<<"."<<Surname<<endl;
    file <<Birthday_Son<<"."<<Date<<endl;
    file <<Birthday_Son<<"."<<Pet<<endl;
    file <<Birthday_Son<<"."<<Daughter<<endl;
    file <<Birthday_Son<<"."<<Daughter_Birthday<<endl;
    file <<Birthday_Son<<"."<<Son<<endl;
    /* */
    file <<Birthday_Son<<" "<<Name<<endl;
    file <<Birthday_Son<<" "<<Surname<<endl;
    file <<Birthday_Son<<" "<<Date<<endl;
    file <<Birthday_Son<<" "<<Pet<<endl;
    file <<Birthday_Son<<" "<<Daughter<<endl;
    file <<Birthday_Son<<" "<<Daughter_Birthday<<endl;
    file <<Birthday_Son<<" "<<Son<<endl;
};

void world_list::start_choose(char choose) {
    cout << "Hello I'm World List Generator! :D" << endl;
    cout << "1.Form OR 2.Random_Strings" << endl;
    cin>>choose;
    if(choose == '1') {
        world_list::choose_form(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
    } else if(choose == '2') {
      cout << "Not complete, I'm so Tired";
    } else {
        world_list::exiting_program();
    }
};



