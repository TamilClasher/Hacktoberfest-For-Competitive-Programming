import java.util.Scanner;

// Q. o find a path from the upper-left corner to the lower-right
// corner of an n × n grid, such that we only move down and right. Each square
// contains a positive integer, and the path should be constructed so that the sum of
// the values along the path is as large as possible

//Ans:- Using dynaminc programming. 

public class pathsInAGrid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //Input
        int n = sc.nextInt();
        int[][] arr = new int[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }

        int[][] maxArr = new int[n][n];
        maxArr[0][0] = arr[0][0];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0)
                {
                    if(j!=0)
                    {
                        maxArr[i][j] = maxArr[i][j-1] + arr[i][j];
                    }

                }

                else if(j==0)
                {
                    maxArr[i][j] = maxArr[i-1][j] + arr[i][j];
                }
                else 
                {
                    maxArr[i][j] = Math.max(maxArr[i-1][j], maxArr[i][j-1]) + arr[i][j];
                }
            }
        }


        System.out.println("Ans is : " + maxArr[n-1][n-1]);

    }
}
