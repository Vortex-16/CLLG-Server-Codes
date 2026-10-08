import java.util.Scanner;

class IndexBound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int[] arr = {10, 20, 30, 40, 50};

            System.out.print("Enter array index: ");
            int index = sc.nextInt();

            System.out.println("Element = " + arr[index]);
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index is out of bounds");
        }

        sc.close();
    }
}
