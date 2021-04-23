import java.util.Scanner;

public class ConnectFour {

    public static void printBoard(char[][] array) { // print board method
        for (int i = array.length - 1; i >= 0; i--) {
            for (int j = 0; j < array[0].length; j++) {
                System.out.print(array[i][j] + " "); // loop to print board
            }
            System.out.println();
        }
    }

    public static void initializeBoard(char[][] array) { // initialize board method
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[0].length; j++) {
                array[i][j] = '-'; // loop to initialize board with dashes
            }
        }
    }

    public static int insertChip(char[][] array, int col, char chipType) { // insert chip method
        for (int i = 0; i < array.length; i++) {
            if (array[i][col] == '-') { // if dash space, replace with chip type
                array[i][col] = chipType;
                return i;
            }
        }
        return -1; // else chip doesn't fit in column
    }

    public static boolean checkIfWinner(char[][] array, int col, int row, char chipType) { // check winner method
        int count = 0;

        // loop to check for 4 chips in a column
        for (int i = 0; i < array.length; i++) {
            if (array[i][col] == chipType) {
                count++; // increment count for each chip in chosen column
                if (count == 4) {
                    return true; // if count is 4, game is done
                }
            }
            else
                count = 0; // count restarts to check for next round
        }

        count = 0;

        // loop to check for 4 chips in a row
        for (int i = 0; i < array[0].length; i++) {
            if (array[row][i] == chipType) {
                count++; // increment count for each chip in row
                if (count == 4) {
                    return true; // if count is 4, game is done
                }
            }
            else
                count = 0; // count restarts to check for next round
        }
        return false; // game is not done
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row, col;

        while (true) {
            System.out.print("What would you like the height of the board to be? "); // user height
            row = sc.nextInt();

            if (row >= 4) // make sure row is greater than / equal to 4
                break;
            else
                System.out.println("Height should be at least 4. Please try again!"); // retry input
        }

        while (true) {
            System.out.print("What would you like the length of the board to be? "); // user length
            col = sc.nextInt();

            if (col >= 4) // make sure column is greater than / equal to 4
                break;
            else
                System.out.println("Length should be at least 4. Please try again!"); // retry input
        }

        char[][] board = new char[row][col]; // implement user height & length to board
        initializeBoard(board); // use measurements for methods
        printBoard(board);

        System.out.println();
        // display players chip type
        System.out.println("Player 1: x");
        System.out.println("Player 2: o");

        // declare necessary variables
        boolean player1 = true;
        char player;
        int userCol;
        int result;
        boolean isGameDone;
        int totalPlay = 0;

        while (true) {
            System.out.println();
            if (player1) { // if player 1 wins
                System.out.print("Player 1: ");
                player = 'x';
            }
            else { // else player 2 wins
                System.out.print("Player 2: ");
                player = 'o';
            }

            System.out.print("Which column would you like to choose? "); // user column choice
            userCol = sc.nextInt();

            if (userCol < 0 || userCol >= col) { // make sure column choice is between 0 and # of columns - 1
                System.out.println("Please enter choice between 0 and " + (col - 1));
            }

            else
            {
                result = insertChip(board, userCol, player); // return result of insert chip method

                if (result == -1) {
                    System.out.println("There is no room to insert. Please try again."); // full column check
                }
                else {
                    printBoard(board); // print current board
                    isGameDone = checkIfWinner(board, userCol, result, player); // check if game is done

                    if (isGameDone) { // game is over
                        System.out.println();
                        if (player1) {
                            System.out.println("Player 1 won the game!"); // player 1 won
                        }
                        else {
                            System.out.println("Player 2 won the game!"); // player 2 won
                        }
                        break;
                    }
                    player1 = !player1;
                    totalPlay++; // increment after each play
                }
            }

            if (totalPlay == row * col) { // board is full
                System.out.println();
                System.out.println("Draw. Nobody wins."); // game ends in a tie
                break;
            }
        }
        sc.close(); // exit game
    }
}
