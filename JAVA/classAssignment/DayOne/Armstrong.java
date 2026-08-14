class Armstrong{
    public static void main(String[] args) {
        for (int num = 1; num <= 1000; num++) {
            int temp = num, sum = 0, digits = 0;

            while (temp > 0) {
                digits++;
                temp /= 10;
            }

            temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                sum += Math.pow(digit, digits);
                temp /= 10;
            }

            if (sum == num) {
                System.out.println(num);
            }
        }
    }
}
