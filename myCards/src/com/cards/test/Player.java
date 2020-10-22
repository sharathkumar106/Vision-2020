package com.cards.test;

public class Player {

	  private String name;
	  private CardCollection hand;

	  /**
	   * Constructs a player with an empty hand.
	   */
	  public Player(String name) {
	    this.name = name;
	    this.hand = new CardCollection(name);
	  }

	  /**
	   * Gets the player's name.
	   */
	  public String getName() {
	    return name;
	  }

	  /**
	   * Gets the player's hand.
	   */
	  public CardCollection getHand() {
	    return hand;
	  }


	  /**
	   * Displays the player's hand.
	   */
	  public void display() {
	    hand.display();
	  }
}