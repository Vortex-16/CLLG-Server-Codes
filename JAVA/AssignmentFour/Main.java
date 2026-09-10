class Complex {
    static int numberCreated = 0;
    double real;
    double imag;
    Complex() {
        real = 0;
        imag = 0;
        numberCreated++;
    }
    Complex(double real, double imag) {
        this.real = real;
        this.imag = imag;
        numberCreated++;
    }
    Complex(Complex c) {
        this.real = c.real;
        this.imag = c.imag;
        numberCreated++;
    }
    static void displayNumberCreated() {
        System.out.println("Number of Complex objects created: " + numberCreated);
    }
    void display() {
        if (imag >= 0)
            System.out.println(real + " + " + imag + "i");
        else
            System.out.println(real + " - " + (-imag) + "i");
    }
    static Complex sum(Complex c1, Complex c2) {
        return new Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
    static Complex difference(Complex c1, Complex c2) {
        return new Complex(c1.real - c2.real, c1.imag - c2.imag);
    }
    static Complex product(Complex c1, Complex c2) {
        double r = (c1.real * c2.real) - (c1.imag * c2.imag);
        double i = (c1.real * c2.imag) + (c1.imag * c2.real);

        return new Complex(r, i);
    }
    double modulus() {
        return Math.sqrt((real * real) + (imag * imag));
    }
    Complex complement() {
        return new Complex(real, -imag);
    }
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Complex object destroyed.");
        super.finalize();
    }
}
class Main {
    public static void main(String args[]) {
        Complex c1 = new Complex(5, 3);
        Complex c2 = new Complex(2, 4);

        System.out.print("First complex number: ");
        c1.display();

        System.out.print("Second complex number: ");
        c2.display();

        Complex s = Complex.sum(c1, c2);
        System.out.print("\nSum: ");
        s.display();

        Complex d = Complex.difference(c1, c2);
        System.out.print("Difference: ");
        d.display();

        Complex p = Complex.product(c1, c2);
        System.out.print("Product: ");
        p.display();

        System.out.println("Modulus of first complex number: " + c1.modulus());

        Complex conjugate = c1.complement();
        System.out.print("Complement (Conjugate) of first complex number: ");
        conjugate.display();

        System.out.println();
        Complex.displayNumberCreated();
    }
}
