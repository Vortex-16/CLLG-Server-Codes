class Demo {

    Demo getObject() {
        Demo obj = new Demo();
        return obj;
    }

    public static void main(String args[]) {
        Demo d1 = new Demo();
        Demo d2 = d1.getObject();

        System.out.println("Object returned successfully.");
        System.out.println("Class of returned object: " + d2.getClass().getName());
    }
}
