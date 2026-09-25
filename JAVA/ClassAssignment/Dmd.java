class Parent {
    void show() {
        System.out.println("Parent's show method");
    }
}

class Child extends Parent {
    @Override
    void show() {
        System.out.println("Child's show method");
    }
}

class Dmd {
    public static void main(String args[]) {
        Parent obj;
        obj = new Parent();
        obj.show();

        obj = new Child();
        obj.show();
    }
}
