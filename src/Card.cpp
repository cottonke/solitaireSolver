#include <map>

#include "Card.h"

const std::map<Suit, std::string> k_SuitLongName = {
    { Spades, "Spades"}, { Clubs, "Clubs"},
    { Hearts, "Hearts"}, { Diamonds, "Diamonds"}
                                                   };

const std::map<Suit, std::string> k_SuitShortName = {
    { Spades, "S"}, { Clubs, "C"},
    { Hearts, "H"}, { Diamonds, "D"}
                                                    };

const std::map<Value, std::string> k_ValueLongName = {
    { Ace, "Ace" }, { Two, "Two" }, { Three, "Three" },
    { Four, "Four" }, { Five, "Five" }, { Six, "Six" },
    { Seven, "Seven" }, { Eight, "Eight" }, { Nine, "Nine" },
    { Ten, "Ten" }, { Jack, "Jack" }, { Queen, "Queen" },
    { King, "King" }
                                                     };

const std::map<Value, std::string> k_ValueShortName = {
    { Ace, "A" }, { Two, "2" }, { Three, "3" },
    { Four, "4" }, { Five, "5" }, { Six, "6" },
    { Seven, "7" }, { Eight, "8" }, { Nine, "9" },
    { Ten, "T" }, { Jack, "J" }, { Queen, "Q" },
    { King, "K" }
                                                      };

std::string Card::getLongString() const
{
    std::string ret = k_ValueLongName.at(m_Value) + " " + k_SuitLongName.at(m_Suit);
    return ret;
}

std::string Card::getShortString() const
{
    std::string ret = k_ValueShortName.at(m_Value) + k_SuitShortName.at(m_Suit);
    return ret;
}

