public class SalesDataAnalysis {
    public static final int NUM_PRODUCTS = 5;
    public static final int NUM_DAYS = 7;
    
    public static void main(String[] args) {
        int[][] salesData = {
            {100, 150, 200, 180, 220, 250, 300}, // Product 1 sales for 7 days
            {80, 90, 100, 110, 120, 130, 140},   // Product 2 sales for 7 days
            {120, 130, 140, 150, 160, 170, 180}, // Product 3 sales for 7 days
            {70, 80, 90, 100, 110, 120, 130},    // Product 4 sales for 7 days
            {200, 220, 240, 260, 280, 300, 320}  // Product 5 sales for 7 days
        };

        int totalSales = calculateTotalSales(salesData);
        System.out.println("Total sales: $" + totalSales);

        int bestSellingProductIndex = findBestSellingProduct(salesData);
        System.out.println("Best selling product: Product " + bestSellingProductIndex);

        int[] salesReport = generateSalesReport(salesData, 0, 2);
        System.out.println("Sales report for first 3 days: ");
        for (int i=0; i<salesReport.length; i++) {
            System.out.println("Product " + (i+1) + ": $" + salesReport[i]);
        }
    }

    private static int calculateTotalSales(int[][] salesData) {
        int total = 0;
        for (int i = 0; i < NUM_PRODUCTS; i++) {
            for (int j = 0; j < NUM_DAYS; j++) {
                total += salesData[i][j];
            }
        }
        return total;
    }
    
    private static int findBestSellingProduct(int[][] salesData) {
        int maxSales = 0;
        int bestProductIndex = 0;
        for (int i = 0; i < NUM_PRODUCTS; i++) {
            int productTotalSales = 0;
            for (int j = 0; j < NUM_DAYS; j++) {
                productTotalSales += salesData[i][j];
            }

            if(productTotalSales > maxSales) {
                maxSales = productTotalSales;
                bestProductIndex = i;
            }
        }
        return bestProductIndex+1;
    }
    
    private static int[] generateSalesReport(int[][] salesData, int startDay, int endDay) {
        int[] salesReport = new int[NUM_PRODUCTS];
        for (int i = 0; i < NUM_PRODUCTS; i++) {
            for (int j = startDay; j <= endDay; j++) {
                salesReport[i] += salesData[i][j];
            }
        }
        return salesReport;
    }
}
