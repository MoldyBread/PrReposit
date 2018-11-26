import java.text.DecimalFormat;
import java.util.ArrayList;

public class Main {


    public static void main(String[] args) {

        DecimalFormat df = new DecimalFormat("#.##");
        double ar;
        Stopwatch stopwatch = new Stopwatch();
        for (int i = 2 50; i <= 16000; i*=2) {
            Timing.trial(i, 777280);
            ar=stopwatch.elapsedTime();
            System.out.println("Test "+i+": "+ar+" lgT "+ df.format(Math.log10(ar))+" lgN "+df.format(Math.log10(i)));

        }

       /* ArrayList<double[]> as = new ArrayList<>();


        double cur=ar[0];
        int count=1;
        for (int i = 0; i < 99; i++) {
            if(cur == ar[i+1])
                count++;
            else{ double[] b = new double[]{Math.log10(ar[i]),Math.log10(i)};
                as.add(b);
                count =1;
                cur=ar[i+1];
            }

        }

        DecimalFormat df = new DecimalFormat("#.##");

        for (double[] s:
             as) {
            System.out.println(df.format(s[0])+"; "+df.format(s[1]));
        }

        System.out.println();
        System.out.println("2 Task = N^2");
        System.out.println();
        System.out.println("3 Task = 4xlong - 32, 4xdouble - 32, 2xboolean - 2, int[288] - 1176, adding - 6 => result ~ 1.23 Kb");*/
    }
}
