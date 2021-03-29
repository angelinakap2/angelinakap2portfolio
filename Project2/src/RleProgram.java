import java.util.Scanner;

public class RleProgram {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        //1. Display welcome message
        System.out.println("Welcome to the RLE image encoder!\n");
        System.out.println("Displaying Spectrum Image:");

        //2. Display color test with the message
        ConsoleGfx.displayImage(ConsoleGfx.testRainbow);

        byte[] imageData = null;
        int choice = 10;
        //3. Display the menu - Part A: while loop
        while (choice != 0)
        {
            System.out.println("\n\nRLE Menu");
            System.out.println("--------");
            System.out.println("0. Exit");
            System.out.println("1. Load File");
            System.out.println("2. Load Test Image");
            System.out.println("3. Read RLE String");
            System.out.println("4. Read RLE Hex String");
            System.out.println("5. Read Data Hex String");
            System.out.println("6. Display Image");
            System.out.println("7. Display RLE String");
            System.out.println("8. Display Hex RLE Data");
            System.out.println("9. Display Hex Flat Data\n");
            System.out.print("Select a Menu Option: ");
            choice = scnr.nextInt(); //4. Prompt for input

            String userInput;

            switch (choice)
            {
                case 0:
                    break;
                case 1: // 3.1 - option 1
                    System.out.print("Enter name of file to load: ");
                    userInput = scnr.next();
                    // ConsoleGfx.loadFile(userInput) and store the returned byte[] array into the imageData array
                    ConsoleGfx.loadFile(userInput);
                    imageData = ConsoleGfx.loadFile(userInput);
                    break;
                case 2: // 3.2 - option 2
                    // store ConsoleGfx.testImage into the imageData array
                    imageData = ConsoleGfx.testImage;
                    System.out.println("Test image data loaded.");
                    break;
                case 3:
                    System.out.print("Enter an RLE string to be decoded: ");
                    userInput = scnr.next();
                    imageData = decodeRle(stringToRle(userInput));
                    break;
                case 4:
                    System.out.print("Enter the hex string holding RLE data: ");
                    userInput = scnr.next();
                    imageData = decodeRle(stringToData(userInput));
                    break;
                case 5:
                    System.out.print("Enter the hex string holding flat data: ");
                    userInput = scnr.next();
                    imageData = stringToData(userInput);
                    break;
                case 6: // 3.6 - option 6
                    System.out.println("Displaying image...");
                    ConsoleGfx.displayImage(imageData);
                    break;
                case 7:
                    System.out.print("RLE representation: ");
                    System.out.println(RleProgram.toRleString(encodeRle(imageData)));
                    break;
                case 8:
                    System.out.print("RLE hex values: ");
                    System.out.println(RleProgram.toHexString(encodeRle(imageData)));
                    break;
                case 9:
                    System.out.print("Flat hex values: ");
                    System.out.println(RleProgram.toHexString(imageData));
                    break;
            }
        }

    }

    public static String toHexString(byte[] data) {
        String result = "";
        char[] hex = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}; // decimal to hex

        for(int i = data.length - 1; i >= 0; i--) {

            int num = data[i]; // assign data elements to num
            int rem = num % 16; // remainder from division of 16
            result = String.valueOf(hex[rem]).concat(result); // add remainder to result
        }
        return result; // return hex number
    }

    public static int countRuns(byte[] flatData) {
        int count = 0;
        int checkIn = 0;

        for (int i = 0; i < flatData.length; i++) {
            if (i == 0 || flatData[i] != flatData[i - 1]) { // number has changed
                ++count; // update count
                checkIn = 0;
            }

            if (checkIn == 15) { // update count once number has shown 15 times
                ++count;
                checkIn = 0;
            }
            ++checkIn;
        }
        return count; // return count
    }

    public static byte[] encodeRle(byte[] flatData) {
        byte[] arr = new byte[countRuns(flatData)*2]; // array size is double countRuns
        int amount = 0;
        int placement = 0;

        for (int i = 0; i < flatData.length; i++) {
            if (i!= 0 && flatData[i] != flatData[i - 1]) {
                arr[placement++] = (byte) amount; // assign first element to count
                arr[placement++] = flatData[i - 1]; // assign next element to last digit element
                amount = 0;
            }

            if (amount == 15) { // update array elements when amount is 15
                arr[placement++] = (byte) amount;
                arr[placement++] = flatData[i - 1];
                amount = 0;
            }
            ++amount; // increment amount

            if (i == flatData.length - 1) { // update elements if last array
                arr[placement++] = (byte) amount;
                arr[placement] = flatData[i];
            }
        }
        return arr; // return new array
    }

    public static int getDecodedLength(byte[] rleData) {
        int length = 0;

        for (int i = 0; i < rleData.length; i += 2) { // increment i
            length += rleData[i]; // apply array element value to length
        }
        return length; // return length
    }

    public static byte[] decodeRle(byte[] rleData) {
        int length = getDecodedLength(rleData); // assign array length with output of getDecodedLength function
        byte[] arr = new byte[length];
        int count = 0;

        for (int i = 0; i < rleData.length; i+= 2) {
            for (int j = 0; j < rleData[i]; j++) {
                arr[count++] = rleData[i + 1]; // assign incremented rleData element to new array element
            }
        }
        return arr; // return array
    }

    public static byte[] stringToData(String dataString) {
        byte[] ans = new byte[dataString.length()];

        for(int i = 0;i < dataString.length(); i++) {

            if (Character.isDigit(dataString.charAt(i))) { // if character is digit assign character w/ 0 to array
                ans[i] = (byte)(dataString.charAt(i) - '0');
            }

            else {
                ans[i] =(byte)(Character.toLowerCase(dataString.charAt(i)) - 'a' + 10); // else make letter lowercase
            }
        }
        return ans; // return array
    }

    public static String toRleString(byte[] rleData) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < rleData.length; i += 2) {
            result.append(rleData[i]);
            if (rleData[i + 1] >= 0 && rleData[i + 1] <= 9) {
                result.append((char) ('0' + rleData[i + 1]));
            } else {
                result.append((char) ('a' + (rleData[i + 1] - 10)));
            }
            if (i != rleData.length - 2) {
                result.append(":");
            }
        }
        return result.toString();
    }

    public static byte[] stringToRle(String rleString) {
        String[] tokens = rleString.split(":");
        byte[] result = new byte[2 * tokens.length];
        char ch;
        for (int i = 0; i < tokens.length; i++) {
            result[2 * i] = Byte.parseByte(tokens[i].substring(0, tokens[i].length() - 1));
            ch = tokens[i].charAt(tokens[i].length() - 1);
            if (ch <= '9') {
                result[2 * i + 1] = (byte) (ch - '0');
            }
            else {
                result[2 * i + 1] = (byte) (10 + (ch - 'a'));
            }
        }
        return result;
    }
}
