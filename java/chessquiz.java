import java.util.Scanner;

public class ChessQuiz {

    public static void main(String[] args) {
        int score = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Chess Quiz!");

        // Question 1
        System.out.println("\nQuestion 1: How many squares are there on a standard chessboard?");
        System.out.print("Your answer: ");
        int answer1 = scanner.nextInt();
        if (answer1 == 64) {
            System.out.println("Correct!");
            score++;
        } else {
            System.out.println("Incorrect. The correct answer is 64.");
        }

        // Question 2
        System.out.println("\nQuestion 2: How many pieces does each player start with in a standard game of chess?");
        System.out.print("Your answer: ");
        int answer2 = scanner.nextInt();
        if (answer2 == 16) {
            System.out.println("Correct!");
            score++;
        } else {
            System.out.println("Incorrect. The correct answer is 16.");
        }

        // Question 3
        System.out.println("\nQuestion 3: Which piece can move in an L-shape?");
        System.out.print("Your answer: ");
        String answer3 = scanner.next();
        if (answer3.equalsIgnoreCase("knight")) {
            System.out.println("Correct!");
            score++;
        } else {
            System.out.println("Incorrect. The correct answer is Knight.");
        }

        // Display final score
        System.out.println("\nYour final score is: " + score + " out of 3");

        // Close the scanner
        scanner.close();
    }
}
