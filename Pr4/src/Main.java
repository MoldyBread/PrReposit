import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {


        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);

        Random z = new Random();
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        Point[] p = new Point[n];
        for (int i = 0; i < n; i++) {
            //p[i]=new Point(z.nextInt(32768),z.nextInt(32768));
            p[i]=new Point(sc.nextInt(),sc.nextInt());
            p[i].draw();
        }



        /*
9
19000 2000
19000 5000
19000 15000
19000 10000
18000 10000
21000 10000
32000 10000
1234 5678
14000 10000
*/

        Arrays.sort(p,Point::compareTo);

        for (int i = 0; i <n-3; i++) {
            for (int j = i + 1; j < n-2; j++) {
                for (int k = j + 1; k < n-1; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if (p[i].slopeTo(p[j]) == p[i].slopeTo(p[k]) && p[i].slopeTo(p[k]) == p[i].slopeTo(p[l])) {
                            p[i].drawN();
                            p[j].drawN();
                            p[k].drawN();
                            p[l].drawN();
                            p[i].drawTo(p[j]);
                            p[j].drawTo(p[k]);
                            p[k].drawTo(p[l]);
                        }
                    }
                }
            }
        }
    }
}
