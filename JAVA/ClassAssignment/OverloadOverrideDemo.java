class OverloadExample {
    void display(int a) {
        System.out.println("Display with int: " + a);
    }

    void display(String s) {
        System.out.println("Display with String: " + s);
    }
}

class OverrideExample extends OverloadExample {
    @Override
    void display(int a) {
        System.out.println("Overridden display with int: " + a);
    }
}

public class OverloadOverrideDemo {
    public static void main(String[] args) {
        OverloadExample obj1 = new OverloadExample();
        obj1.display(10);
        obj1.display("Hello");

        OverrideExample obj2 = new OverrideExample();
        obj2.display(20);
        obj2.display("World");
    }
}
