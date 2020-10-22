package com.cards.test;

public class Hand extends Player {

	  private CardCollection eightsHand;

	  public Hand(String name) {
	    super(name);
	    eightsHand = new CardCollection(name);
	  }

	  public CardCollection getHand() {
	    return eightsHand;
	  }


	  /*Removes and returns a legal card from the player's hand.*/
	  public EightsCard play(Eights eights, EightsCard prev) {
	    EightsCard ecard = new EightsCard(0, 0);
	    ecard = ecard.convert(searchForMatch(prev));

	    if (ecard == null) {

	      ecard = drawForMatch(eights, prev);
	      return ecard;
	    }
	    return ecard;
	  }

	  /*Searches the player's hand for a matching card.*/
	  public Card searchForMatch(EightsCard prev) {
	    for (int i = 0; i < eightsHand.size(); i++) {
	      Card card = eightsHand.getCard(i);
	      EightsCard ecard = new EightsCard(0,0);
	          ecard = ecard.convert(card);
	      if (ecard.cardMatches(prev)) {
	        return eightsHand.popCard(i);
	      }
	    }
	    return null;
	  }

	  /*Draws cards until a match is found. */
	  public EightsCard drawForMatch(Eights eights, EightsCard prev) {
	    while (true) {
	      EightsCard card = eights.draw();
	      System.out.println(getName() + " <<< draws " + card);
	      if (card.cardMatches(prev)) {
	        return card;
	      }
	      eightsHand.addCard(card);
	    }
	  }

	  /**
	   * Calculates the player's score (penalty points).
	   */
	  public int score() {
	    int sum = 0;
	    for (int i = 0; i < eightsHand.size(); i++) {
	      Card card = eightsHand.getCard(i);
	      int rank = card.getRank();
	      if (rank == 8) {
	        sum -= 20;
	      } else if (rank > 10) {
	        sum -= 10;
	      } else {
	        sum -= rank;
	      }
	    }
	    return sum;
	  }

	  /*Displays the player's name and score.*/
	  public void displayScore() {
		  System.out.println(getName() + " has " + score() + " points");
		  if(score()==0)
		  {
			  System.out.println(getName()+" wins this round of CRAZY EIGHT");
		  }
		  System.out.println("******************************************");
	   
	  }

	  /* Displays the player's hand.*/
	  public void display() {
	    getHand().display();
	  }

	}