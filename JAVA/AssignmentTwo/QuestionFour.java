class Main {
    public static void main(String viks[]) {
        // Call default constructor
        Student s1 = new Student();
        System.out.println("Default Constructor:");
        s1.display();

        // Call parameterized constructor
        Student s2 = new Student("Adhish", 69, 9.5);
        System.out.println("Parameterized Constructor:");
        s2.display();

        // Call copy constructor
        Student s3 = new Student(s2);
        System.out.println("Copy Constructor:");
        s3.display();
    }
}

class Student {
    private String name;
    private int roll;
    private double marks;

    // Default constructor
    public Student() {
        name = "Unknown";
        roll = 0;
        marks = 0.0;
    }

    // Parameterized constructor
    public Student(String name, int roll, double marks) {
        this.name = name;
        this.roll = roll;
        this.marks = marks;
    }

    // Copy constructor
    public Student(Student other) {
        this.name = other.name;
        this.roll = other.roll;
        this.marks = other.marks;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll: " + roll);
        System.out.println("CGPA: " + marks);
        System.out.println();
    }
}


