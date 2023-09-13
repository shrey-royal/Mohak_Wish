#include <math.h>

class LoanCalculator {
public:
    static double calculateLoan(double carPrice, double downPayment, double annualInterestRate, int loanTermMonths) {
        double loanAmount = carPrice - downPayment;
        double monthlyInterestRate = annualInterestRate / 12 / 100;
        double monthlyPayment = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -loanTermMonths));

        return monthlyPayment;
    }
};