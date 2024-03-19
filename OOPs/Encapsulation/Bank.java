import bank.Account;
import bank.Transaction;

public class Bank {
    public static void main(String[] args) {
        Account father = new Account("123456789", "Father", 100000);
        Account child = new Account("987654321", "Child", 50000);

        System.out.println("Initial balances: ");
        System.out.println(father.getAccHolderName() + ": " + father.getBalance());
        System.out.println(child.getAccHolderName() + ": " + child.getBalance());
    
        Transaction transaction = new Transaction();
        transaction.transfer(father, child, 25000);

        System.out.println("Final balances after the transfer: ");
        System.out.println(father.getAccHolderName() + ": " + father.getBalance());
        System.out.println(child.getAccHolderName() + ": " + child.getBalance());
        
    }
}
