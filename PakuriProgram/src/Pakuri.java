
public class Pakuri {
    private final String species;
    private int attack, defense, speed;

    public Pakuri(String species) { // Pakuri parameter constructor
        this.species = species;
        attack = (species.length() * 7) + 9;
        defense = (species.length() * 5) + 17;
        speed = (species.length() * 6) + 13;
    }

    public String getSpecies() { return this.species; } // species accessor

    public int getAttack() {
        return this.attack;
    } // attack accessor

    public int getDefense() {
        return this.defense;
    } // defense accessor

    public int getSpeed() { return this.speed; } // speed accessor

    public void setAttack(int newAttack) {
        this.attack = newAttack;
    } // attack mutator

    public void evolve() { // evolve method
        this.attack = attack * 2; // double attack
        this.defense = defense * 4; // quadruple defense
        this.speed = speed * 3; // triple speed
    }
}
