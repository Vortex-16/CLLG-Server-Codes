class Complex {
    // Static member to count number of Complex objects created
    static int numberCreated = 0;

    // Real and imaginary parts
    double real;
    double imag;

    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
        numberCreated++;
    }

    // Parameterized constructor
    Complex(double real, double imag) {
        this.real = real;
        this.imag = imag;
        numberCreated++;
    }

    // Copy constructor
    Complex(Complex c) {
        this.real = c.real;
        this.imag = c.imag;
        numberCreated++;
    }

    // Static function to display number of objects created
    static void displayNumberCreated() {
        System.out.println("Number of Complex objects created: " + numberCreated);
    }

    // Display complex number
    void display() {
        if (imag >= 0)
            System.out.println(real + " + " + imag + "i");
        else
            System.out.println(real + " - " + (-imag) + "i");
    }

    // Sum of two complex numbers
    static Complex sum(Complex c1, Complex c2) {
        return new Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    // Difference of two complex numbers
    static Complex difference(Complex c1, Complex c2) {
        return new Complex(c1.real - c2.real, c1.imag - c2.imag);
    }

    // Product of two complex numbers
    static Complex product(Complex c1, Complex c2) {
        double r = (c1.real * c2.real) - (c1.imag * c2.imag);
        double i = (c1.real * c2.imag) + (c1.imag * c2.real);

        return new Complex(r, i);
    }

    // Modulus of a complex number
    double modulus() {
        return Math.sqrt((real * real) + (imag * imag));
    }

    // Conjugate (complement) of a complex number
    Complex complement() {
        return new Complex(real, -imag);
    }

    // Destructor equivalent in Java
    // Java does not have destructors. finalize() is shown only
    // for academic demonstration.
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Complex object destroyed.");
        super.finalize();
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        // Creating two complex numbers
        Complex c1 = new Complex(5, 3);
        Complex c2 = new Complex(2, 4);

        System.out.print("First complex number: ");
        c1.display();

        System.out.print("Second complex number: ");
        c2.display();

        // Sum
        Complex s = Complex.sum(c1, c2);
        System.out.print("\nSum: ");
        s.display();

        // Difference
        Complex d = Complex.difference(c1, c2);
        System.out.print("Difference: ");
        d.display();

        // Product
        Complex p = Complex.product(c1, c2);
        System.out.print("Product: ");
        p.display();

        // Modulus
        System.out.println("Modulus of first complex number: " + c1.modulus());

        // Complement / Conjugate
        Complex conjugate = c1.complement();
        System.out.print("Complement (Conjugate) of first complex number: ");
        conjugate.display();

        // Display total number of objects created
        System.out.println();
        Complex.displayNumberCreated();
    }
}
