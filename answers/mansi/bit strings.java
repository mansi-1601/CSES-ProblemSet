import java.util.Scanner;
public class bits
{
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n=sc.nextInt();
           int m=1000000007,s=1;
           for(int i=1;i<=n;i++)
           {
            s=(s*2)%m;
           }
           System.out.println(s);
        }
        
    }
}

