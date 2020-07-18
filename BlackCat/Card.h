// Card.h 
// A Blackcat playing card for 1 -7 players

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

class Card {
    public:
        enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
            JACK, QUEEN, KING};
        enum suit {CLUBS, SPADES, DIAMONDS, HEARTS};

        // need to overload << operator to print Card obj to standard output

        Card(rank r = ACE, suit s = SPADES, bool ifu = true); //idk whY this constructor is public??????

        // returns the value of a card, 1 - 11
        int getValue() const;

        void flip();
    
    private:
        const int HIGHEST_RANK = 10;
        rank m_Rank;
        suit m_Suit;
        bool m_IsFaceUp;
};

