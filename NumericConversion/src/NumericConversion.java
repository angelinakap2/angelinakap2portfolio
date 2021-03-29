import java.util.Scanner;

public class NumericConversion {

    public static long hexStringDecode(String hex) // hexStringDecode method
    {
        long result = 0;
        int power = 0;

        if (hex.startsWith("0x")) // if "0x" condition
            hex = hex.substring(2);

        for(int i = 0; i < hex.length(); i++) // loop between additions
        {
            if (i == 0)
            {
                power = hex.length()-1; // set up power
            }

            char digit = hex.charAt(i);
            short d = hexCharDecode(digit);
            result += d*(long)Math.pow(16,power); // multiply digits by powers of 16
            power--; // update power
        }
        return result; // return hex
    }


    public static short hexCharDecode(char digit)
    {
        short result = 0;

        // numbers to hex numbers/ letters
        if (digit == '1')
            result = 1;
        else if (digit == '2')
            result = 2;
        else if (digit == '3')
            result = 3;
        else if (digit == '4')
            result = 4;
        else if (digit == '5')
            result = 5;
        else if (digit == '6')
            result = 6;
        else if (digit == '7')
            result = 7;
        else if (digit == '8')
            result = 8;
        else if (digit == '9')
            result = 9;
        else if (digit == 'A' || digit == 'a')
            result = 10;
        else if (digit == 'B' || digit == 'b')
            result = 11;
        else if (digit == 'C' || digit == 'c')
            result = 12;
        else if (digit == 'D' || digit == 'd')
            result = 13;
        else if (digit == 'E' || digit == 'e')
            result = 14;
        else if (digit == 'F' || digit == 'f')
            result = 15;

        return result; // return hex number/letter
    }


    public static short binaryStringDecode(String binary)
    {
        short result = 0;
        if (binary.startsWith("0b")) // if "0b" condition
            binary = binary.substring(2);

        int power = 0;
        for(int i = 0; i < binary.length(); i++)  // loop between additions
        {
            if (i == 0)
            {
                power = binary.length()-1; // set up power
            }

            char digit = binary.charAt(i);
            int d = Integer.parseInt(String.valueOf(digit));
            result += (short)d * Math.pow(2, power); // multiply digits by powers of 2
            power--; // update power
        }
        return result; // return binary
    }


    public static String binaryToHex(String binary)
    {
        int num = Integer.parseInt(String.valueOf(binary));
        String result = "";

        while (num > 0)
        {
            char[] hex = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; // numbers to hex numbers to letters
            int rem = num % 16; // remainder from division by 16
            result = String.valueOf(hex[rem]).concat(result); // add remainder to result
            num /= 16; // divide by 16
        }

        return result; // return hex
    }


    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int choice;

        do { // display menu
            System.out.println("Decoding Menu");
            System.out.println("-------------");
            System.out.println("1. Decode hexadecimal");
            System.out.println("2. Decode binary");
            System.out.println("3. Convert binary to hexadecimal");
            System.out.println("4. Quit \n");
            System.out.print("Please enter an option: ");
            choice = scnr.nextInt(); // user input

            switch(choice)
            {
                case 1: // decimal to hex
                    System.out.print("Please enter the numeric string to convert: ");
                    String hex = scnr.next();
                    System.out.println("Result: " + hexStringDecode(hex) + "\n");
                    break;
                case 2: // decimal to binary
                    System.out.print("Please enter the numeric string to convert: ");
                    String binary = scnr.next();
                    System.out.println("Result: " + binaryStringDecode(binary) + "\n");
                    break;
                case 3: // binary to hex
                    System.out.print("Please enter the numeric string to convert: ");
                    binary = scnr.next();
                    int value = binaryStringDecode(binary); // direct input to binary method first
                    String decimal = String.valueOf(value);
                    System.out.println("Result: " + binaryToHex(decimal) + "\n");
                    break;
                case 4: // exit program
                    System.out.println("Goodbye!");
                    break;
            }
        } while (choice != 4);
    }
}
