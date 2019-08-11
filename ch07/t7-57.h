#include <string>
#include <vector>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate);

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr int period = 30;
    double daily_tbl[period];
    static double initRate() { return 0; }
};


double Account::interestRate = Account::initRate();
constexpr int Account::period;

void Account::rate(double newRate) {
    interestRate = newRate;
}

double initRate() { 
    return 0; 
}
