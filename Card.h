// Card.h 

#include <iostream>

using namespace std; 

class Card {
  public:  
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
              JACK, QUEEN, KING};
    
    enum suit {CLUB, DIAMONDS, HEARTS, SPADES};
    
    Card(rank r, suit s, bool ifu);
    // default const

    ~Card();
    // deconst

    int getRank();
    // gets value of Card

    void flip(); 
    // flips card up or down depending on starting pos

 private: 
    rank mRank; 
    suit mSuit; 
    bool mIsFaceUp;


    



};