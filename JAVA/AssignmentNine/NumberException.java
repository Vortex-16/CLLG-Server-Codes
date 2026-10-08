import java.util.Scanner;

class NumberException {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter a number: ");
            String str = sc.nextLine();

            int num = Integer.parseInt(str);

            System.out.println("Number = " + num);
        }
        catch (NumberFormatException e) {
            System.out.println("Invalid number format");
        }

        sc.close();
    }
}

