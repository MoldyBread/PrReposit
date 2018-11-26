import java.lang.reflect.Array;
import java.util.Arrays;

public class Percolation {
    boolean[][] Cells;
    QuickFindUF qf;
    private int[] opening;

    public Percolation(int N){
        qf = new QuickFindUF((N*N)+2);
        Cells = new boolean[N][N];
        for (int i = 0; i < N; i++) {
            Arrays.fill(Cells[i], true);
        }
        process();
    }
    // створюємо матрицю N-на-N, з усіма заблокованими об’єктами




    public boolean percolates(){
        if(qf.connected(0,Cells.length*Cells.length+1))
            return true;
        else
            return false;
    }
// чи протікає система?

    public int countQueue(int x,int y){
        int result=0;

        for (int i = 0; i < Cells.length; i++) {
            for (int j = 0; j < Cells.length; j++) {
                result++;
                if(x==j&&y==i)
                    return result;
            }

        }
        return -1;
    }

    public int[] countCell(int n){
        int result=0;

        for (int i = 0; i < Cells.length; i++) {
            for (int j = 0; j < Cells.length; j++) {
                if(n==result) {
                    return new int[]{j, i};
                }
                result++;
            }

        }
        return null;
    }


    private void process(){
        int[] cell;

        queueGeneration();
        for (int i = 0; i < opening.length; i++) {
            openedCount++;
            cell=countCell(opening[i]);
            Cells[cell[0]][cell[1]]=false;
            if(cell[1]==0){
                qf.union(0,opening[i]+1);
            }

            if(cell[1]==Cells.length-1){
                qf.union(Cells.length*Cells.length+1,opening[i]+1);
            }

                try {
                    if (!Cells[cell[0] - 1][cell[1]]) {
                        qf.union(countQueue(cell[0] - 1, cell[1]), opening[i]+1);
                    }
                } catch (Exception ee) { }
                try {
                    if (!Cells[cell[0]][cell[1] - 1]) {
                        qf.union(countQueue(cell[0], cell[1] - 1), opening[i]+1);
                    }
                } catch (Exception ee) { }
                try {
                    if (!Cells[cell[0] + 1][cell[1]]) {
                        qf.union(countQueue(cell[0] + 1, cell[1]), opening[i]+1);
                    }
                } catch (Exception ee) { }
                try {
                    if (!Cells[cell[0]][cell[1] + 1]) {
                        qf.union(countQueue(cell[0], cell[1] + 1), opening[i]+1);
                    }
                } catch (Exception ee) { }

            //draw();
            if(percolates()){
                System.out.println("YES");

                break;
            }

        }
    }

    double openedCount=0;
    public double getAll(){
        return Cells.length*Cells.length;
    }

    public double getOpened(){
        return openedCount;
    }

    public void draw(){
        System.out.println();
        String s="";
        for (int i = 0; i < Cells.length; i++) {
            for (int j = 0; j < Cells.length; j++) {
                if(Cells[j][i])
                    s+="1 ";
                else
                    s+="0 ";
            }
            s+="\n";
        }
        System.out.println(s);
    }

    private void queueGeneration(){
        opening = new int[Cells.length*Cells.length];
        for (int i = 0; i < opening.length; i++) {
            opening[i]=i;
        }

        int tmp;
        int rand;
        for (int i = 0; i < opening.length; i++) {
            rand = 0 + (int) (Math.random() * (Cells.length*Cells.length-1));
            tmp=opening[i];
            opening[i]=opening[rand];
            opening[rand]=tmp;
        }
    }
}
