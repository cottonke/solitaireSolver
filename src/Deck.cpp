#include <iostream>     // std::cout, std::endl
#include <algorithm>    // std::random_shuffle
#include <random>       // std::random_device, std::mt19937

#include "Deck.h"

std::shared_ptr<Card> Deck::drawCard()
{
}

void Deck::shuffle()
{
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(m_Cards.begin(), m_Cards.end(), g);
}

void Deck::print() const
{
    for(auto &it: m_Cards)
    {
        std::cout << it->getShortString() << " ";
    }
    std::cout << std::endl;
}

