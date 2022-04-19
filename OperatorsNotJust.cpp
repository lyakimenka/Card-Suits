#include <iostream>
#include <string>
#include <locale>
using namespace std;

enum CardSuit
{
    hearts,

    spades,

    club,

    diamonds,

    other
};

CardSuit readEnter(string cs)
{
    locale l;
    CardSuit st = other;

    string sp = "spades", d = "diamonds",
        c = "clubs", h = "hearts";
    int sl = cs.length();
    for (int i = 0; i < sl; ++i)
        cs[i] = tolower(cs[i], l);

    if (cs == d.substr(0, sl))
        st = diamonds;

    else if (cs == sp.substr(0, sl))
        st = spades;

    else if (cs == h.substr(0, sl))
        st = hearts;

    else if (cs == c.substr(0, sl))
        st = club;
    return st;
}

void displayMessage(CardSuit st)
{
    switch (st)
    {
    case hearts:
        cout << "You have enered Heart." << endl;
        break;
    case spades:
        cout << "You have a Spade." << endl;
        break;
    case club:
        cout << "You have entered a Club." << endl;
        break;
    case diamonds:
        cout << "You have Diamond." << endl;
        break;
    case other:
        cout << "I'm sorry, I don't recognize that suit...please try again."
             << endl;
        break;
    }
}

int main()
{
    char ch = 'y';
    string cs;
    CardSuit suit;
    cout << "\n\t\tWelcome to the Card Suit Entering Program!!!\n" << endl;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Please enter the suit of your card? ";
        cin >> cs;
        suit = readEnter(cs);
        displayMessage(suit);
        cout << "Enter another card? ";
        cin >> ch;
    }
    cout << "\t\tThank you for using the CSEP!!" << endl;
    return 0;
}

