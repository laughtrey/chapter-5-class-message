#include <iostream>
#include <string>
#include "Message.h"
using namespace std;
// Constructor
Message::Message()
{

}
Message::Message(string r, string s, string b)
{
   recipient = r;
   sender = s;
   body = b;
   timest = 0;
}
// ---Functions---
// Mutator
void Message::append()
{
   cout << "Please enter your recipient: ";
   getline(cin, recipient);
   cout << "Please enter your name as sender: ";
   getline(cin, sender);
   cout << "Please enter your message: ";
   getline(cin, body);
   time(&timest);
}
string Message::to_string() // Cocatinate the entire thing to one string email
{
   email = "From: " + sender + '\n' + "To: " + recipient + '\n' + "Sent at: " + ctime(&timest) + "Message: " + body;

}
void Message::print() // just prints email.
{
   cout << email;
}
