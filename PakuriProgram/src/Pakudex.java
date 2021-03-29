public class Pakudex {
    private int size;
    private final Pakuri[] pakudex; // private Pakuri array available

    public Pakudex() {
        pakudex = new Pakuri[20]; // default pakuri array size
    }

    public Pakudex(int capacity) {
        pakudex = new Pakuri[capacity]; // set pakudex with capacity size
    }

    public int getSize() { // size accessor
        return size;
    }

    public int getCapacity() {
        return pakudex.length;
    }

    public String[] getSpeciesArray() { // obtain species list
        if (size <= 0) {
            return null; // no species
        }

        String[] speciesArray = new String[size];
        for (int i = 0; i < size; i++) {
                speciesArray[i] = pakudex[i].getSpecies(); // add species to array
        }
        return speciesArray; // return species array
    }

    public int[] getStats(String species) {
        int[] stats = null;
        Pakuri findPakuri = null;
        String[] speciesArray = getSpeciesArray(); // get species

        for (int i = 0; i < size; i++) {
            if (pakudex[i] != null) {
                String pakuriSpecies = pakudex[i].getSpecies();

                if (pakuriSpecies.equals(species)) {
                    findPakuri = pakudex[i]; // find pakudex for stats
                }
            }
        }

        if (findPakuri == null) {
            return null; // return no pakudex
        }

        for (int i = 0; i < size; i++) {
            if (speciesArray[i] != null) {
                if (speciesArray[i].equals(species)) { // check for species
                    int aStats = findPakuri.getAttack();
                    int dStats = findPakuri.getDefense();
                    int sStats = findPakuri.getSpeed();
                    stats = new int[] {aStats, dStats, sStats};// attack, defense, speed stats
                }
            }
        }
        return stats; // return stats
    }

    public void sortPakuri() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (pakudex[i] != null && pakudex[j] != null) {
                    String firstSpecies = pakudex[i].getSpecies();
                    String nextSpecies = pakudex[j].getSpecies();

                    if (firstSpecies.compareTo(nextSpecies) > 0) { // sort species in alphabetical order
                        Pakuri temp = pakudex[j];
                        pakudex[j] = pakudex[i];
                        pakudex[i] = temp;
                    }
                }
            }
        }
    }

    public boolean addPakuri(String species) {
        for (int i = 0; i < size; i++) {
            if (pakudex[i] != null) {
                String exists = pakudex[i].getSpecies();

                if (exists.equals(species)) { // if species exists, cannot add
                    return false;
                }
            }
        }
        pakudex[size] = new Pakuri(species);
        size++; // update pakuri size
        return true; // species added
    }


    public boolean evolveSpecies(String species) {
        Pakuri findPakuri = null;

        if (size <= 0) {
            return false; // no species to evolve
        }

        for (int i = 0; i < size; i++) {
            if (pakudex[i] != null) {
                String exists = pakudex[i].getSpecies();
                if (exists.equals(species)) {
                    findPakuri = pakudex[i]; // species found
                }
            }
        }
        if (findPakuri == null) { // species not found
            return false;
        }
        findPakuri.evolve(); // species evolved
        return true;
    }
}
