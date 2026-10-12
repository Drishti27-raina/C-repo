import java.util.Scanner;

public class S1p6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = sc.nextInt();
        
        boolean prime = true;
        

        if (n <= 1) {
            prime = false;
        } else {

            for (int i = 2; i <= Math.sqrt(n); i++) {
                if (n % i == 0) {
                    prime = false;
                    break; 
                }
            }
        }
        
        if (prime) { 
            System.out.println("Number is prime");
        } else {
            System.out.println("Number is not prime");
        }
        
        sc.close();
    }
}
