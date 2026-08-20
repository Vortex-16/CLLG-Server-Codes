class Main {
    public static void main(String[] args) {
        // Parameterized constructor
        Student s1 = new Student("Avdhesh", 69, 9.5);
        System.out.println("Parameterized Constructor:");
        s1.display();

        // Copy constructor
        Student s2 = new Student(s1);
        System.out.println("Copy Constructor:");
        s2.display();

        // Equality check
        if (s1.isEqual(s2)) {
            System.out.println("s1 and s2 have equal data.");
        } else {
            System.out.println("s1 and s2 are different.");
        }

        // Another object with different values
        Student s3 = new Student("Ravi", 70, 8.0);
        System.out.println("Another Student:");
        s3.display();

        if (s1.isEqual(s3)) {
            System.out.println("s1 and s3 have equal data.");
        } else {
            System.out.println("s1 and s3 are different.");
        }
    }
}

class Student {
    private String name;
    private int roll;
    private double cgpa;

    // Parameterized constructor
    public Student(String name, int roll, double cgpa) {
        this.name = name;
        this.roll = roll;
        this.cgpa = cgpa;
    }

    // Copy constructor
    public Student(Student other) {
        this.name = other.name;
        this.roll = other.roll;
        this.cgpa = other.cgpa;
    }

    public boolean isEqual(Student other) {
        return this.name.equals(other.name) &&
               this.roll == other.roll &&
               this.cgpa == other.cgpa;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll: " + roll);
        System.out.println("CGPA: " + cgpa);
        System.out.println();
    }
}

