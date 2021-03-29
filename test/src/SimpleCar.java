public class SimpleCar {

    private int miles;

    public SimpleCar() {
        miles = 0;
    }

    public void drive(int dist) {
        miles = miles + dist;
    }

    public void reverse(int dist) {
        miles = miles - dist;
    }

    public int getOdometer() {
        return miles;
    }

    public void honkHorn() {
        System.out.println("beep beep");
    }

    public void report() {
        System.out.println("Car has driven " + miles + " miles");
    }
}
