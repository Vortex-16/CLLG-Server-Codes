class Calculator {

    // Method with 2 integer parameters
    int add(int a, int b) {
        return a + b;
    }

    // Method with 3 integer parameters
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method with 2 double parameters
    double add(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {

        Calculator obj = new Calculator();

        System.out.println("Sum = " + obj.add(10, 20));
        System.out.println("Sum = " + obj.add(10, 20, 30));
        System.out.println("Sum = " + obj.add(10.5, 20.5));
    }
}