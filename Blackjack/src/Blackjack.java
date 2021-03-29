import java.util.Scanner;

public class Blackjack
{
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        P1Random rng = new P1Random(); // P1Random class declaration
        // variables
        int myNumber;
        int dealer;
        boolean newGame = true;
        int playerWins = 0;
        int playerHand = 0;
        int dealerHand = 0;
        int dealerWins = 0;
        int tieGames = 0;
        int totalGames = 0;


        while (totalGames >= 0) // while loop condition for entire game
        {
            if (newGame) // restarting new game
            {
                playerHand = 0;
                dealerHand = 0;
                System.out.println("START GAME #" + (totalGames + 1)); // game number
                System.out.println();

                myNumber = rng.nextInt(13) + 1; // random num generator

                // card outputs
                if (myNumber == 1)
                {
                    System.out.println("Your card is a ACE!");
                }
                else if (myNumber == 11)
                {
                    System.out.println("Your card is a JACK!");
                    myNumber = 10;
                }
                else if (myNumber == 12)
                {
                    System.out.println("Your card is a QUEEN!");
                    myNumber = 10;
                }
                else if (myNumber == 13)
                {
                    System.out.println("Your card is a KING!");
                    myNumber = 10;
                }
                else
                {
                    System.out.println("Your card is a " + myNumber + "!");
                }

                playerHand += myNumber; // update player hand
                System.out.println("Your hand is: " + playerHand);
                System.out.println();
                newGame = false;
            }
                // display options
                System.out.println("1. Get another card");
                System.out.println("2. Hold hand");
                System.out.println("3. Print statistics");
                System.out.println("4. Exit");
                System.out.println();
                System.out.print("Choose an option: ");
                int choice = scnr.nextInt(); // user input
                System.out.println();

                switch (choice) // cases
                {
                    case 1:
                        myNumber = rng.nextInt(13) + 1; // random num generator (player)

                        // card outputs
                        if (myNumber == 1)
                        {
                            System.out.println("Your card is a ACE!");
                        }
                        else if (myNumber == 11)
                        {
                            System.out.println("Your card is a JACK!");
                            myNumber = 10;
                        }
                        else if (myNumber == 12)
                        {
                            System.out.println("Your card is a QUEEN!");
                            myNumber = 10;
                        }
                        else if (myNumber == 13)
                        {
                            System.out.println("Your card is a KING!");
                            myNumber = 10;
                        }
                        else
                        {
                            System.out.println("Your card is a " + myNumber + "!");
                        }

                        playerHand += myNumber; // update player hand

                        System.out.println("Your hand is: " + playerHand);
                        System.out.println();

                        if (playerHand > 21) // dealer wins (player hand)
                        {
                            System.out.println("You exceeded 21! You lose.");
                            System.out.println();
                            dealerWins = dealerWins + 1; // update dealer wins
                            newGame = true; // update new game true
                            totalGames = totalGames + 1; // update total games
                            continue;
                        }
                        else if (playerHand == 21) // player wins (player hand)
                        {
                            System.out.println("BLACKJACK! You win!");
                            System.out.println();
                            playerWins = playerWins + 1; // update player wins
                            newGame = true; // update new game true
                            totalGames = totalGames + 1; // update total games
                            continue;
                        }
                        else
                        {
                            continue; // display options again
                        }

                    case 2:
                        dealer = rng.nextInt(11) + 16; // random num generator (dealer)
                        dealerHand += dealer; // update dealer hand
                        System.out.println("Dealer's hand: " + dealerHand);
                        System.out.println("Your hand is: " + playerHand);
                        System.out.println();

                        if (dealerHand > 21 || dealerHand < playerHand) // Player wins (dealer hand)
                        {
                            System.out.println("You win!");
                            System.out.println();
                            playerWins = playerWins + 1; // update player win
                            totalGames = totalGames + 1; // update total games
                            newGame = true; // update new game true
                            continue; // display options again
                        }
                        else if (dealerHand == 21 || dealerHand > playerHand)  // Dealer wins (dealer hand)
                        {
                            System.out.println("Dealer wins!");
                            System.out.println();
                            dealerWins = dealerWins + 1; // update dealer win
                            totalGames = totalGames + 1; // update total games
                            newGame = true;
                            continue;
                        }
                        else // tie (dealer hand)
                        {
                            System.out.println("It's a tie! No one wins!");
                            System.out.println();
                            tieGames = tieGames + 1; // update tie game
                            totalGames = totalGames + 1; // update total games
                            newGame = true;
                            continue;
                        }

                    case 3:
                        double percentage = (playerWins*100)/(totalGames); // percentage
                        // stats
                        System.out.println("Number of Player wins: " + playerWins);
                        System.out.println("Number of Dealer wins: " + dealerWins);
                        System.out.println("Number of tie games: " + tieGames);
                        System.out.println("Total # of games played is: " + totalGames);
                        System.out.println("Percentage of Player wins: " + percentage + "%");
                        System.out.println();
                        continue; // return options

                    case 4: // exit game
                        break; // leave loop

                    default: // error message
                        System.out.println("Invalid input!");
                        System.out.println("Please enter an integer value between 1 and 4.");
                        System.out.println();
                        newGame = false; // game doesn't end
                        continue;
                }
                break;
            }
        }
}
