class Parent {
    void show() {
        System.out.println("Parent show() method");
    }
}

class Child extends Parent {

    void show(int x) {
        System.out.println("Child show(int) method");
    }

    void show(String s) {
        System.out.println("Child show(String) method");
    }
}

public class QTwo {
    public static void main(String args[]) {

        Child c = new Child();

        c.show();
        c.show(10);
        c.show("Hello");
    }
}
