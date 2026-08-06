import java.util.Scanner;

class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter First Value: ");
        int a = sc.nextInt();
        System.out.print("Enter Second Value: ");
        int b = sc.nextInt();
        
        System.out.println("Sum: " + (a + b));
        System.out.println("Diff: " + (a - b));
        System.out.println("Product: " + (a * b));
    }
}
