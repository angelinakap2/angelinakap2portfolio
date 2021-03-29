public class Cowsay {

    public static void main(String[] args) {
        Cow[] cows = HeiferGenerator.getCows(); // call heifer generator class
        if (args.length > 0) {
            switch (args[0]) {
                case "-l":
                    listCows(cows); // call listCows
                    break;
                case "-n":
                    Cow cow = findCow(args[1], cows);
                    if (cow == null) { // cow not found
                        System.out.println("Could not find " + args[1] + " cow!");
                    }
                    else {
                        for (int i = 2; i < args.length; i++){
                            System.out.print(args[i] + " "); // display message
                        }
                        System.out.println();
                        System.out.println(cow.getImage()); // display cow image
                    }
                    break;

                default: // default
                    for (String s:args){
                        System.out.print(s + " "); // display message
                    }
                    System.out.println();
                    System.out.println(cows[0].getImage()); // display first cow image
            }
        }
    }

    private static void listCows(Cow[] cows) { // list cows

        System.out.print("Cows available: ");

        for (Cow cow : cows) { // display each cow name
            System.out.print(cow.getName() + " ");
        }

        System.out.println();
    }

    private static Cow findCow(String name, Cow[] cows) { // find cows

        for (Cow cow : cows) { // navigate through each cow
            if (cow.getName().equals(name)) { // search if input name matches cow name
                return cow; // return cow name
            }
        }
        return null; // else return null
    }
}
