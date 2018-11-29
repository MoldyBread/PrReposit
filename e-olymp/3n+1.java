import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        int n,n1;

        while (sc.hasNextInt()) {

            n = sc.nextInt();
            n1 = sc.nextInt();



            int length;

            int maxLength = 0;


            for (int i = Math.min(n,n1); i <= Math.max(n,n1); i++) {
                length = solve(i);

                if (length > maxLength) {
                    maxLength = length;
                }
            }


            System.out.println(n + " " + n1 + " " + maxLength);

        }

    }

    public static int solve(long current){
        int length = 1;

        while (current != 1) {
            if (current % 2 == 0) {
                current /= 2;
            } else {
                current *= 3;
                ++current;
            }
            ++length;
        }
        
        return length;
    }
}