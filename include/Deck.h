#ifndef DECK_H
#define DECK_H

#include <vector>
#include <memory>

#include "Card.h"

class Deck
{
    public:
        Deck(std::vector<std::shared_ptr<Card>>& cards): m_Cards(cards) {}
        virtual ~Deck() {}

        std::shared_ptr<Card> drawCard();
        void shuffle();
        void print() const;
    protected:

    private:
        std::vector<std::shared_ptr<Card>> m_Cards;
};

#endif

