package com.cards.test;

public class EightsCard extends Card {

	  public EightsCard(int rank, int suit) {
	    super(rank, suit);

	  }

	  /*Checks whether cards match.*/
	  public boolean cardMatches(EightsCard that) {
	    if (getSuit() == that.getSuit()) {
	      return true;
	    }
	    if (getRank() == that.getRank()) {
	      return true;
	    }
	    if (getRank() == 8) {
	      return true;
	    }
	    return false;
	  }

	  /**
	   * Gives the card score for a given card.
	   * @return card score
	   */
	  public int scoreCard() {

	    int rank = getRank();
	    if (rank == 8) {
	      return -20;
	    } else if (rank > 10) {
	      return -10;
	    } else {
	      return -rank;
	    }
	  }

	  /**
	   * Converts a Card into an EightsCard
	   * @param card The card to be converted
	   * @return The converted EightsCard
	   */
	  public EightsCard convert(Card card) {
	    if (card != null) {
	    EightsCard result = new EightsCard(card.getRank(), card.getSuit());
	    return result;
	    } 
	    return null;
	  }
}
