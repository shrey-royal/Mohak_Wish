import java.util.Arrays;
import java.util.Scanner;

public class One {
    public static void main(String[] args) {
        // int[] arr = new int[5];
        // Scanner sc = new Scanner(System.in);

        // for (int i = 0; i < arr.length; i++) {
        //     System.out.print("\nEnter arr["+i+"] = ");
        //     arr[i] = sc.nextInt();
        // }

        // for (int i = 0; i < arr.length; i++) {
        //     System.out.print(arr[i] + ", ");
        // }
        // System.out.println();

        // Arrays.sort(arr);   //sort array
        // for (int i : arr) {
        //     System.out.print(i + ", ");
        // }

        // System.out.println(Arrays.toString(arr));

        // int[] arr[] = new int[2][2];
        int[][] arr = { {1, 2}, {3, 4} };
        for (int[] is : arr) {
            // System.out.println(Arrays.toString(is));
            // System.out.println(is);
            for (int a : is) {
                System.out.print(a + ", ");
            }
        }
    
    }
}

/*
Array: 

Scenario 1: Student Grades
In a school grading system, create an array to store the grades of students in a class. Perform operations such as calculating the average grade, finding the highest and lowest grades, and identifying students who scored above a certain threshold.

Scenario 2: Sales Data Analysis
In a retail business, create an array to store the daily sales data for different products. Perform operations such as calculating the total sales, finding the best-selling product, and generating a sales report for a specific period.

Scenario 3: Weather Tracking
In a weather monitoring system, create an array to store temperature data for a specific location over a period of time. Perform operations such as finding the average temperature, identifying the hottest and coldest days, and generating a temperature graph.

Scenario 4: Contact Management
In a contact management application, create an array to store contact information such as names, phone numbers, and email addresses. Implement features such as adding new contacts, searching for a specific contact, and deleting contacts from the array.

Scenario 5: Inventory Management
In an inventory management system, create an array to store the quantities of different products in stock. Perform operations such as updating stock levels, searching for products based on certain criteria, and generating an inventory report.

Scenario 6: Student Enrollment
In a university enrollment system, create an array to store the courses in which students are enrolled. Perform operations such as adding or dropping courses, checking the number of enrolled students in each course, and generating enrollment reports.

Scenario 7: Product Ratings
In an e-commerce platform, create an array to store the ratings given by users for different products. Perform operations such as calculating the average rating for a product, identifying highly rated products, and allowing users to submit their ratings.

Scenario 8: Stock Portfolio Management
In a stock portfolio management system, create an array to store the number of shares and prices of different stocks in a portfolio. Perform operations such as calculating the total portfolio value, identifying the best-performing stocks, and generating performance reports.

Scenario 9: Event RSVPs
In an event management system, create an array to store the RSVP status of attendees for an event. Perform operations such as counting the number of confirmed attendees, generating a guest list, and checking the availability of seats.

Scenario 10: Survey Data Analysis
In a survey data analysis application, create an array to store the responses of participants to survey questions. Perform operations such as calculating the percentage of participants with specific responses, generating charts or graphs based on the survey data, and extracting insights from the responses.

*/
