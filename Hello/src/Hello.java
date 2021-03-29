import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in); // scanner statement

        System.out.print("Hello. What is your name? "); // print statement
        String input = scnr.next(); //user input

        System.out.print("It's nice to meet you, " + input + ". How old are you? ");
        String age = scnr.next();

        System.out.println("I see that you are still quite young at only " + age + ".");
        System.out.print("Where do you live? ");
        String live = scnr.next();

        System.out.print("Wow! I've always wanted to go to " + live + ". Thanks for chatting with me. Bye!");
    }
}
