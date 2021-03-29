public class Cow {

    private String name; // private name
    private String image; // private image

    public Cow(String name) {  // default constructor
        this.name = name;
    }

    public String getName() { // name accessor
        return name;
    }

    public String getImage() { // image accessor
        return image;
    }

    public void setImage(String _image) { // image mutator
        this.image = _image;
    }
}
