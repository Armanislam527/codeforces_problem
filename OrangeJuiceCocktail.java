import java.util.Scanner;

public class OrangeJuiceCocktail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // Number of drinks
        double sum = 0; // Sum of percentages

        for (int i = 0; i < n; i++) {
            int pi = sc.nextInt();
            sum += pi;
        }

        // Calculate the average percentage
        double result = sum / n;

        // Print the result with precision
        System.out.printf("%.120f%n", result);

        sc.close();
    }
}
