interface Father {
    void fatherMethod();
}

interface Mother {
    void motherMethod();
}

class Child implements Father, Mother {
    public void fatherMethod() {
        System.out.println("Father method");
    }

    public void motherMethod() {
        System.out.println("Mother method");
    }
}

public class Qtwo {
    public static void main(String[] args) {
        Child c = new Child();
        c.fatherMethod();
        c.motherMethod();
    }
}
