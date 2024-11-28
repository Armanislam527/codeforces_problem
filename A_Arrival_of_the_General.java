import java.util.*;

public class A_Arrival_of_the_General {
    public static int calculateSwaps(int n, int[] heights) {
        int maxIdx = 0, minIdx = 0;

        for (int i = 1; i < n; i++) {
            if (heights[i] > heights[maxIdx]) maxIdx = i;
            if (heights[i] <= heights[minIdx]) minIdx = i;
        }

        int swaps = maxIdx + (n - 1 - minIdx);
        if (maxIdx > minIdx) swaps--;

        return swaps;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] heights = new int[n];
        for (int i = 0; i < n; i++) {
            heights[i] = sc.nextInt();
        }

        System.out.println(calculateSwaps(n, heights));
        sc.close();
    }
}
