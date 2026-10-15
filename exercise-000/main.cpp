#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    int var =  4711;
    int x = 10;
    int *p;
    p = &x;

    fmt::print("{}\n", x);
    fmt::print("Die Adresse von x ist: {}\n", fmt::ptr(&x));

    fmt::print("{}\n", *p);
    fmt::print("Die Adresse von p ist: {}\n", fmt::ptr(p));

    *p = 42;
    fmt::print("Wert von x nach der Änderung: {}\n", x);
    fmt::print("Wert, auf den p zeigt: {}\n", *p);

    double* d = new double(3.1415);   // Speicher im Heap reservieren
fmt::println("Wert: {}", *d);    // Zugriff über Dereferenzierung  
fmt::println("Adresse: {}", fmt::ptr(d));

delete d;                         // Speicher wieder freigeben

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    fmt::print("Value of var: {}!\n", var);

    return 0; /* exit gracefully*/


}
