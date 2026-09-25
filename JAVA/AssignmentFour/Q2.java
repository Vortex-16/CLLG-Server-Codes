class Point {
    double x;
    double y;

    Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    static double distance(Point p1, Point p2) {
        double dx = p2.x - p1.x;
        double dy = p2.y - p1.y;

        return Math.sqrt(dx * dx + dy * dy);
    }
}

class Q2 {
    public static void main(String[] args) {

        Point p1 = new Point(3, 4);
        Point p2 = new Point(6, 8);
        double d = Point.distance(p1, p2);
        System.out.println("Point 1: (" + p1.x + ", " + p1.y + ")");
        System.out.println("Point 2: (" + p2.x + ", " + p2.y + ")");
        System.out.println("Distance between the two points = " + d);
    }
}
