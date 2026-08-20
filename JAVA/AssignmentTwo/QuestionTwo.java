class Main {
    public static void main(String[] args) {
        // Using parameterized constructor
        Box rectangleBox = new Box(10, 5, 4);
        Box cube = new Box(6, 6, 6);

        // Using default constructor
        Box defaultBox = new Box();

        double rectVolume = rectangleBox.getVolume();
        double cubeVolume = cube.getVolume();
        double defaultVolume = defaultBox.getVolume();

        System.out.println("Rectangle Box Volume: " + rectVolume);
        System.out.println("Cube Volume: " + cubeVolume);
        System.out.println("Default Box Volume: " + defaultVolume);

        if (rectVolume > cubeVolume) {
            System.out.println("Rectangle Box is larger.");
        } else if (cubeVolume > rectVolume) {
            System.out.println("Cube is larger.");
        } else {
            System.out.println("Both are equal in volume.");
        }
    }
}

class Box {
    private double length;
    private double width;
    private double height;

    public Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    public Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    public double getVolume() {
        return length * width * height;
    }
}


