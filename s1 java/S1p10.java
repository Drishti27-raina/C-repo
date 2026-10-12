import java.util.Scanner;
public class S1p10{
    public static void main(){
        Scanner sc=new Scanner (System.in);
        System.out.print("Enter a number");
        int num1=sc.nextInt();
        System.out.print("Enter a number");
        int num2=sc.nextInt();
        
        while(num2!=0){
                int remainder=num1%num2;
                num1=num2;
                num2=remainder;
            }
            
        System.out.print(num1);
        sc.close();
        
    }
}