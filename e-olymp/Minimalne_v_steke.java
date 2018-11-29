import javafx.util.Pair;

import java.util.Scanner;
import java.util.Stack;

public class Minimalne_v_steke {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        long  n= scanner.nextInt(),a= scanner.nextInt(),b= scanner.nextInt(),c= scanner.nextInt(),x= scanner.nextInt(),res=0;
        Stack<Pair<Long, Long>> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            x=(a*x*x+b*x+c)/100%1000000;
            if (x%5<2) {
                if (!st.empty()) st.pop();
            }
            else {
                long  mini= st.empty() ? x : Math.min(x, st.peek().getValue());
                st.push(new Pair<>(x,mini));
            }

            if (!st.empty()) res+=st.peek().getValue();
        }
        System.out.println(res);

    }
}