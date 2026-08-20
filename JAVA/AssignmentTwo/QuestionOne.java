class Main {
    public static void main(String args[]) {
        // Rectangle box
        Box rectangleBox = new Box();
        rectangleBox.setData(10, 5, 4);

        // Cube
        Box cube = new Box();
        cube.setData(6, 6, 6); // all sides equal

        double rectVolume = rectangleBox.getVolume();
        double cubeVolume = cube.getVolume();

        System.out.println("Rectangle Box Volume: " + rectVolume);
        System.out.println("Cube Volume: " + cubeVolume);

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
    double length;
    double width;
    double height;
    
    void setData(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    
    double getVolume() {
        return length * width * height;
    }
}

