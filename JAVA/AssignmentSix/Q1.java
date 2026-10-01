abstract class TwoDShape {
    double dim1;
    double dim2;

    TwoDShape(double d1, double d2) {
        dim1 = d1;
        dim2 = d2;
    }

    abstract double area();
}

class Rectangle extends TwoDShape {

    Rectangle(double d1, double d2) {
        super(d1, d2);
    }

    double area() {
        return dim1 * dim2;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(10, 5);
        Rectangle r2 = new Rectangle(8, 4);

        System.out.println("Area of Rectangle 1: " + r1.area());
        System.out.println("Area of Rectangle 2: " + r2.area());
    }
}
