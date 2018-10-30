#ifndef MESSAGE_H
#define MESSAGE_H
/*
class Message
*/
using namespace std;
class Message
{
private:
   string recipient, sender, body, email, From, To, Message_body;
   time_t timest;

public:
   Message(); // Constructor with no parameters
   Message(string r, string s, string b); // Constructor that takes the sender and recipient and sets the time stamp to current time
   void append(); // Appends a line of text to the message body
   to_string(); // makes the message into one long string
   void print(); // prints the message text
};
