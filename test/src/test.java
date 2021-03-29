import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);

        int forward;
        int reverse;
        SimpleCar car = new SimpleCar();

        forward = scnr.nextInt();
        reverse = scnr.nextInt();
        car.drive(forward);
        car.reverse(reverse);
        car.honkHorn();
        car.report();
    }
}
