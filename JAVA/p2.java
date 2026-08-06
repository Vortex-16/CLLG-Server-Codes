import java.util.Scanner;

class p2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Integer Value: ");
        int a = sc.nextInt();
        System.out.print("Enter String: ");
        sc.nextLine();
        String b = sc.nextLine();
        
        for (int i = 0; i < a; i++) {
            System.out.println(b);
        }
    }
}
