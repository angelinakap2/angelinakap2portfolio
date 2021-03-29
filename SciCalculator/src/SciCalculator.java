import java.util.Scanner;
import java.lang.Math;

public class SciCalculator {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        double result = 0.0;
        int menuNum;
        boolean exitCalculator = false;
        double firstOperand;
        double secondOperand;
        double storedResult = 0;
        double calculations = 0;

        System.out.println("Current Result: " + result +"\n");

        while (!exitCalculator)
        {
            System.out.println("Calculator Menu\n" + "---------------");
            System.out.println("0. Exit Program");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exponentiation");
            System.out.println("6. Logarithm");
            System.out.println("7. Display Average\n");

            System.out.print("Enter Menu Selection: ");
            menuNum = scnr.nextInt();

            while (menuNum == 7)
            {
                if (calculations == 0)
                {
                    System.out.println("\nError: No calculations yet to average!\n");
                }
                else
                {

                    System.out.println("\nSum of calculations: " + storedResult);
                    result = storedResult / calculations;
                    storedResult += result;
                    double roundResult = Math.round(result * 100.0) / 100.0;
                    System.out.println("Number of calculations: " + (int)calculations);
                    System.out.println("Average of calculations: " + roundResult + "\n");
                    calculations += 1;
                }
                System.out.print("Enter Menu Selection: ");
                menuNum = scnr.nextInt();
            }



            while (menuNum < 0 || menuNum > 7)
            {
                System.out.println("\nError: Invalid selection!\n");
                System.out.print("Enter Menu Selection: ");
                menuNum = scnr.nextInt();
            }

                if (menuNum == 0)
                {
                    exitCalculator = true;
                }
                else if (menuNum == 1)
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = firstOperand + secondOperand;
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
                else if (menuNum == 2)
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = firstOperand - secondOperand;
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
                else if (menuNum == 3)
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = firstOperand * secondOperand;
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
                else if (menuNum == 4)
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = firstOperand / secondOperand;
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
                else if (menuNum == 5)
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = Math.pow(firstOperand, secondOperand);
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
                else
                {
                    System.out.print("Enter first operand: ");
                    String str1 = scnr.next();
                    System.out.print("Enter second operand: ");
                    String str2 = scnr.next();

                    if (str1.equals("RESULT"))
                    {
                        firstOperand = result;
                    }
                    else
                    {
                        firstOperand = Double.parseDouble(str1);
                    }

                    if (str2.equals("RESULT"))
                    {
                        secondOperand = result;
                    }
                    else
                    {
                        secondOperand = Double.parseDouble(str2);
                    }
                    result = Math.log(secondOperand)/Math.log(firstOperand);
                    storedResult += result;
                    calculations+= 1;
                    System.out.println("\nCurrent Result: " + result + "\n");
                }
        }
        System.out.println("\nThanks for using this calculator. Goodbye!");
    }
}
