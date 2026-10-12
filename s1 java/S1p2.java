import java .util.Scanner;
public class S1p2{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            System.out.print(i+1+" ");
        }
        sc.close();
        
    }
}
