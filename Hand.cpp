// Hand.cpp

#include "Hand.h"

Hand::Hand()
{
  Cards.reserve(INITIAL_SIZE);
}

Hand::~Hand()
{
  clear();
}

void Hand::add(Card* newCard)
{
  Cards.push_back(newCard);
}

void Hand::clear() {
  for(int index = Cards.begin(); index < Cards.end(); index++) {
    delete Cards[index];
  }
  delete [] Cards; 
}