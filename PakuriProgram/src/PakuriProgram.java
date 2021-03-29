import java.util.Scanner;

public class PakuriProgram {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);

        String capacityTest;
        int capacity = 0;
        int option = 0;

        System.out.println("Welcome to Pakudex: Tracker Extraordinaire!"); // welcome
        while (capacity <= 0) {
            try
            {
                System.out.print("Enter max capacity of the Pakudex: ");
                capacityTest = scnr.next(); //set capacity
                capacity = Integer.parseInt(capacityTest); // string to integer

                if (capacity < 0) {
                    throw new Exception(); // exception for under zero capacity
                }
            }
            catch(Exception e) {
                System.out.println("Please enter a valid size.");
            }
        }

        System.out.println("The Pakudex can hold " + capacity + " species of Pakuri.");
        Pakudex pakudex = new Pakudex(capacity); // call Pakudex parameter constructor
        System.out.println();

        while (option != 6) {
            System.out.println("Pakudex Main Menu"); // display menu
            System.out.println("-----------------");
            System.out.println("1. List Pakuri\n2. Show Pakuri\n3. Add Pakuri\n4. Evolve Pakuri\n5. Sort Pakuri\n6. Exit\n");

            System.out.print("What would you like to do? ");
            String optionTest = scnr.next(); // input menu option

            try {
                option = Integer.parseInt(optionTest); // string to integer

                if (option < 1 || option > 6) { // exception for option under 1 or over 6
                    throw new Exception();
                }
            }

            catch (Exception e) {
                System.out.println("Unrecognized menu selection! \n");
                continue;
            }


                switch (option) { // case options
                    case 1:
                        if (pakudex.getSpeciesArray() == null) { // return to menu if no pakudex
                            System.out.println("No Pakuri in Pakudex yet!\n");
                            continue;
                        }
                        System.out.println("Pakuri In Pakudex:");
                        for (int i = 0; i < pakudex.getSize(); i++) {
                            System.out.println((i + 1) + ". " + pakudex.getSpeciesArray()[i]); // list species array
                        }
                        System.out.println();
                        break;
                    case 2:
                        System.out.print("Enter the name of the species to display: ");
                        String species = scnr.next(); // input species
                        int[] stats = pakudex.getStats(species); // get species stats

                        if (stats == null) { // if no stats
                            System.out.println("Error: No such Pakuri!\n");
                            continue;
                        }
                        // display species stats
                        System.out.println("\nSpecies: " + species);
                        System.out.println("Attack: " + stats[0]);
                        System.out.println("Defense: " + stats[1]);
                        System.out.println("Speed: " + stats[2] + "\n");
                        break;
                    case 3:
                        if (pakudex.getSize() == pakudex.getCapacity()) { // check if capacity is full
                            System.out.println("Error: Pakudex is full!\n");
                            continue;
                        }
                        System.out.print("Enter the name of the species to add: ");
                        species = scnr.next(); // add species input

                        boolean toAdd = pakudex.addPakuri(species); // add species
                        if (toAdd) {
                            System.out.println("Pakuri species " + species + " successfully added!\n"); // species added
                        } else {
                            System.out.println("Error: Pakudex already contains this species!\n"); // already contains species
                        }
                        break;
                    case 4:
                        System.out.print("Enter the name of the species to evolve: ");
                        species = scnr.next(); // evolve species input
                        boolean toEvolve = pakudex.evolveSpecies(species); // evolve species
                        if (toEvolve) {
                            System.out.println(species + " has evolved!\n"); // species evolved
                        } else {
                            System.out.println("Error: No such Pakuri!\n"); // no species to evolve
                        }
                        break;
                    case 5:
                        pakudex.sortPakuri(); // sort pakuri
                        System.out.println("Pakuri have been sorted!\n"); // pakuri sorted
                        break;
                    case 6:
                        break;
                    default:
                        System.out.println("Unrecognized menu selection!\n"); // wrong menu selection
                }
            }
            System.out.println("Thanks for using Pakudex! Bye!"); // outro
        }
}
