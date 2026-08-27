class Student {

    int roll;
    String name;

    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
    }

    // Constructor with one parameter
    Student(int r) {
        roll = r;
        name = "Unknown";
    }

    // Constructor with two parameters
    Student(int r, String n) {
        roll = r;
        name = n;
    }

    void display() {
        System.out.println("Roll = " + roll);
        System.out.println("Name = " + name);
    }

    public static void main(String[] args) {

        Student s1 = new Student();
        Student s2 = new Student(101);
        Student s3 = new Student(102, "Ananya");

        s1.display();
        s2.display();
        s3.display();
    }
}