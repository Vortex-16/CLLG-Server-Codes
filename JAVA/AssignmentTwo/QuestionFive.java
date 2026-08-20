class Main {
    public static void main(String wigs[]) {
        Box rectangleBox = new Box(10, 5, 4);
        System.out.print("Rectangle Box:");
        rectangleBox.displayVolume();
        Box cube = new Box(6);
        System.out.print("Cube:");
        cube.displayVolume();
    }
}

class Box {
    private double length;
    private double width;
    private double height;

    public Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    public Box(double side) {
        length = side;
        width = side;
        height = side;
    }

    public double getVolume() {
        return length * width * height;
    }

    void displayVolume() {
        System.out.println("Volume of Box: " + getVolume());
    }
}


