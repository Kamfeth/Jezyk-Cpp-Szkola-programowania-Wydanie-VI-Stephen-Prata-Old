#include "sales.h"

int main() {
    SALES::Sales nokia;
    SALES::Sales sony;
    SALES::setSales(nokia);
    const double values[4] = {21.37, 13.37, 3.22, 4.20};
    SALES::setSales(sony, values, 4);
    SALES::showSales(nokia);
    SALES::showSales(sony);
}
