// Hand.h

#include <iostream>
#include <vector> 
#include "Card.h"

using namespace std;

class Hand {
  public:
    Hand();
    // const

    ~Hand();
    // deconstr

    void add(Card* newCard);
    // adds one card to hand

    void clear();
    // removes all card from hand

    int getTotalVal();
    // sums up the values of all cards in hand

  private: 
    const int INITIAL_SIZE = 7;
    vector<Card*> Cards;
};