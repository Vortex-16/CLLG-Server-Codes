class patternTwo {
    public static void main(String[] args) {
        int rows = 4; 

        for (int i = 1; i <= rows; i++) {
            for (int n = 1; n <= i; n++) {
                System.out.print(n + " ");
            }
            System.out.println();
        }
    }
}
