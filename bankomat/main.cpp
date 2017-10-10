/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Paweł
 *
 * Created on 10 października 2017, 17:24
 */

#include <iostream>

using namespace std;

string PIN;
int main()
{
    cout<<" Witaj w naszym banku!"<<endl;
    cout<<"podaj numer PIN:";
    cin >> PIN;
    if (PIN == "1729")
    {
        cout<<"Poprawny PIN";
    }
    else
    {
        cout<<"Niepoprawny PIN";
    }
    return 0;
}

