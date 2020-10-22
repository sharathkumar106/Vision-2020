package com.cards.test;

public class Card {

	  public static final String[] RANKS = {"nref", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
	  public static final String[] SUITS = {"Clubs", "Diamonds", "Hearts", "Spades"};

	  private final int rank;
	  private final int suit;

	  public Card(int rank, int suit) {
	    this.rank = rank;
	    this.suit = suit;
	  }

	  public int getRank() {
	    return rank;
	  }

	  public int getSuit() {
	    return suit;
	  }  

	  public String toString() {
	    return RANKS[rank] + " of " + SUITS[suit]; 
	  }

	  public boolean equals(Card that) {
	    return rank == that.rank && suit == that.suit;
	  }

	  /* Compares Card values when Aces are Low and the suit value dominates. */
	  public int compareValuesToLOw(Card card) {
	    if (suit < card.suit) {
	      return -1;
	    }
	    if (suit > card.suit) {
	      return 1;
	    }
	    if (rank < card.rank) {
	      return -1;
	    }
	    if (rank > card.rank) {
	      return 1;
	    }
	    return 0;
	  }

	  /*Compares Card values when Aces are High and the suit value dominates. */
	  public int compareValuesToHigh(Card card) {
	    if (suit < card.suit) {
	      return -1;
	    }
	    if (suit > card.suit) {
	      return 1;
	    }
	    if (this.rank == 1 && card.rank != 1) {
	      return 1;
	    }
	    if (rank < card.rank) {
	      return -1;
	    }
	    if (rank > card.rank) {
	      return 1;
	    }
	    return 0;
	  }

	  /* Prints a deck of cards.*/
	  public static void printDeck(Card[] cards) {
	    for (int i = 0; i < cards.length; i++) {
	      System.out.println(cards[i]);
	    }
	  }
	}