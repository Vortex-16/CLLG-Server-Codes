class palindrome {
    static boolean isPalindrome(int n) {
        int reverse = 0;
        int temp = Math.abs(n);
        while (temp != 0) {
            reverse = (reverse * 10) + (temp % 10);
            temp = temp / 10;
        }
        return (reverse == Math.abs(n));
    }

    public static void main(String[] args) {
        int n = 12321;
        if (isPalindrome(n) == true) {
            System.out.println("True");
        }
        else {
            System.out.println("False");
        }
    }
}
