/*
File: main.cpp
Description: This program has the class Message, which recieves a recipient, sender, and message
stores it, then concatenates the message into one string and prints it.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 10/29/2018, 9:54:15 PM
*/
#include <iostream>
#include <string>
#include "Message.h"
using namespace std;
int main()
{
   Message mail;
   mail.append(); // Maybe this should be the constructor, the assignment was unclear.
   mail.to_string();
   cout << "Your message is: "<< endl;
   mail.print();'\n';
   return 0;
}
