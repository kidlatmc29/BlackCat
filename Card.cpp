// Card.cpp

#include "Card.h"

Card::Card(rank r, suit s, bool ifu) : mRank(r), mSuit(s), mIsFaceUp(ifu){};

Card::~Card()
{
  // need to figure out what i really need to do here lmao 
}

int Card::getVal()
{
  int numVal = 0;
  if(!isFaceUp()) {
    return numVal;
  } else {
    numVal = mRank;
    if(numVal > 10) {
      numVal = 10; 
    }
  }
  return numVal;
}

bool Card::isFaceUp()
{
  return mIsFaceUp;
}

void Card::flip()
{
  mIsFaceUp = !(mIsFaceUp);
}