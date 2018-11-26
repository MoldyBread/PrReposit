import java.util.*;

public class Fast {
    static Point[] p;
    public static void main(String[] args){
        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);

        Random z = new Random();
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        p = new Point[n];
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
        int[] curr;
        for (int i = 0; i < n; i++) {
            pointSortedSlopes(i);
        }
    }

    public static void pointSortedSlopes(int pnum){
        Point[] ourP = p;


        double tmp;



        double[][] slopes = new double[p.length-1][2];
        for (int i = 0; i < p.length; i++) {
            if(i<pnum){
                slopes[i][0]=ourP[pnum].slopeTo(ourP[i]);
                slopes[i][1]=i;
            }else if(i>pnum){
                slopes[i-1][0]=ourP[pnum].slopeTo(ourP[i]);
                slopes[i-1][1]=i;
            }
        }

        Arrays.sort(slopes, Comparator.comparingDouble(arr -> arr[0]));

        for (int i = 0; i < slopes.length; i++) {
            System.out.println(slopes[i][1]+" "+slopes[i][0]);
        }

        for (int i = 0; i < slopes.length-2; i++) {
            if(slopes[i][0]==slopes[i+1][0]&&slopes[i+1][0]==slopes[i+2][0]){
                p[pnum].drawN();
                p[(int)slopes[i][1]].drawN();
                p[(int)slopes[i+1][1]].drawN();
                p[(int)slopes[i+2][1]].drawN();
                p[pnum].drawTo(p[(int)slopes[i][1]]);
                p[(int)slopes[i][1]].drawTo(p[(int)slopes[i+1][1]]);
                p[(int)slopes[i+1][1]].drawTo(p[(int)slopes[i+2][1]]);
                System.out.println("("+p[pnum].getX()+", "+p[pnum].getY()+") -> "+"("+p[(int)slopes[i][1]].getX()+", "+p[(int)slopes[i][1]].getY()+") -> "+"("+p[(int)slopes[i+1][1]].getX()+", "+p[(int)slopes[i+1][1]].getY()+") -> "+"("+p[(int)slopes[i+2][1]].getX()+", "+p[(int)slopes[i+2][1]].getY()+") -> ");
            }
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






        System.out.println();
    }

}


