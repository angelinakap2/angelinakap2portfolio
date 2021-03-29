import java.util.Scanner;

public class testing {

        public static void main(String[] args) {
            Scanner scnr = new Scanner(System.in);

            System.out.println("Enter first operand: ");
            double firstOperand = scnr.nextDouble();

            System.out.println("Enter second operand: ");
            double secondOperand = scnr.nextDouble();

            System.out.println("Calculator Menu");
            System.out.println("---------------");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");

            System.out.println("Which operation do you want to perform?");
            int operation = scnr.nextInt();

            double result = 0;

            switch (operation)
            {
                case '1':
                    result = firstOperand + secondOperand;
                    break;
                case '2':
                    result = secondOperand - firstOperand;
                    break;
                case '3':
                    result = firstOperand * secondOperand;
                    break;
                case '4':
                    result = secondOperand / firstOperand;
                    break;
                default:
                    System.out.println("Error: Invalid selection! Terminating program.");
            }

            System.out.print("The result of the operation is " + result);
        }
    }
