import java.util.Scanner;

public class Krolyki {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt(), k=sc.nextInt(), rabbits=1;

        for (int i = 0; i < n; i++) {
            if(rabbits>k)
                rabbits-=k;
            rabbits*=2;
        }

        System.out.println(rabbits);
    }
}