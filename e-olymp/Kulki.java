import java.util.Arrays;
import java.util.Scanner;

public class Kulki {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int[] cl = new int[9];
        Arrays.fill(cl,0);

        int var;
        for (int i = 0; i < n; i++) {
            var=sc.nextInt();
            cl[var-1]++;
        }

        var=cl[0];
        for (int i = 1; i < cl.length; i++) {
            if(cl[i]>var)
                var=cl[i];
        }

        System.out.println(n-var);
    }
}