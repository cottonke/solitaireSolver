#ifndef CARD_H
#define CARD_H

enum Suit : uint8_t
{
    Spades = 0,
    Clubs,
    Hearts,
    Diamonds
};

enum Value : uint8_t
{
    Ace = 0,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

class Card
{
    public:
        Card(Suit s, Value v, bool faceUp = false): m_Suit(s), m_Value(v), m_IsFaceUp(faceUp) {};
        virtual ~Card() {};

        Card(const Card&) = default;
        Card& operator=(const Card&) = default;
        Card(Card&&) = default;
        Card& operator=(Card&&) = default;

        std::string getLongString() const;
        std::string getShortString() const;
        operator std::string() const { return getLongString(); }
        inline uint8_t getCardNum() const
        {
            return ((static_cast<uint8_t>(m_Suit) * 13) + (static_cast<uint8_t>(m_Value)));
        }
        inline void turnDown() { m_IsFaceUp = false; }
        inline void turnUp() { m_IsFaceUp = true; }
        inline void flip() { m_IsFaceUp = !m_IsFaceUp; }
        inline bool isFaceUp() const { return m_IsFaceUp; }
        inline Suit getSuit() const { return m_Suit; }
        inline Value getValue() const { return m_Value; }
    protected:
    private:
        Card() = delete;
        bool m_IsFaceUp;
        Suit m_Suit;
        Value m_Value;
};

#endif

