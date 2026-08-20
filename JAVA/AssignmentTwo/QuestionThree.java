import java.util.Scanner;
import java.util.Random;

class QuestionThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Account Holder Name: ");
        String name = sc.nextLine();

        System.out.println("Select Account Type:");
        System.out.println("1. Saving");
        System.out.println("2. Current");
        int typeChoice = sc.nextInt();
        String type = (typeChoice == 1) ? "saving" : "current";

        System.out.print("Enter Initial Balance: ");
        double initialBalance = sc.nextDouble();

        BankAccount account = new BankAccount(name, type, initialBalance);

        int choice;
        do {
            System.out.println("\nDear " + name + "!! Please select from the following:");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Check Balance");
            System.out.println("4. Display Account Details");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter amount to deposit: ");
                    double dep = sc.nextDouble();
                    account.deposit(dep);
                    break;
                case 2:
                    System.out.print("Enter amount to withdraw: ");
                    double wit = sc.nextDouble();
                    account.withdraw(wit);
                    break;
                case 3:
                    System.out.println("Current Balance: " + account.checkBalance());
                    break;
                case 4:
                    account.displayAccountDetails();
                    break;
                case 5:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 5);

        sc.close();
    }
}

class BankAccount {
    private String accountHolderName;
    private String accountNumber;
    private String accountType;
    private double balance;

    public BankAccount(String name, String type, double initialBalance) {
        accountHolderName = name;
        accountNumber = generateAccountNumber();
        accountType = type;
        balance = initialBalance;

        if (accountType.equals("saving") && balance < 1000) {
            System.out.println("Savings account must have minimum opening balance of 1000.");
            balance = 1000; 
        }
    }

    private String generateAccountNumber() {
        Random rand = new Random();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 12; i++) {
            sb.append(rand.nextInt(10));
        }
        return sb.toString();
    }

    public double checkBalance() {
        return balance;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount");
        }
    }

    public void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid withdrawal amount");
            return;
        }
        if (accountType.equals("saving")) {
            if (balance - amount >= 1000) {
                balance -= amount;
                System.out.println("Withdrawn: " + amount);
            } else {
                System.out.println("Cannot withdraw, minimum balance of 1000 required.");
            }
        } else if (accountType.equals("current")) {
            if (balance - amount >= -20000) {
                balance -= amount;
                System.out.println("Withdrawn: " + amount);
                if (balance < 0) {
                    System.out.println("Overdraft used! Please repay within a week.");
                }
            } else {
                System.out.println("Overdraft limit of 20000 exceeded.");
            }
        }
    }

    public void displayAccountDetails() {
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Type: " + accountType);
        System.out.println("Balance: " + balance);
    }
}


