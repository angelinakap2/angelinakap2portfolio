import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);

        System.out.print("Enter first operand: ");
        double firstOperand = scnr.nextDouble();

        System.out.print("Enter second operand: ");
        double secondOperand = scnr.nextDouble();

        System.out.println();
        System.out.println("Calculator Menu");
        System.out.println("---------------");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println();

        System.out.print("Which operation do you want to perform? ");
        int operation = scnr.nextInt();
        System.out.println();

        double result;

        switch (operation) {
            case 1:
                result = firstOperand + secondOperand;
                System.out.print("The result of the operation is " + result + ". Goodbye!");
                break;
            case 2:
                result = firstOperand - secondOperand;
                System.out.print("The result of the operation is " + result + ". Goodbye!");
                break;
            case 3:
                result = firstOperand * secondOperand;
                System.out.print("The result of the operation is " + result + ". Goodbye!");
                break;
            case 4:
                result = firstOperand / secondOperand;
                System.out.print("The result of the operation is " + result + ". Goodbye!");
                break;
            default:
                System.out.print("Error: Invalid selection! Terminating program.");
        }
    }
}
