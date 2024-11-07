#include <iostream>
#include <cmath> 

int main() {
    setlocale(0, "ru");
    double val = 0; 
    int n = 99;     

    do{
        val = sqrt(n + val); 
        n -= 3;              
    } while (n > 0);        

    double y = sin(val); 

    std::cout << "Результат y = " << y << std::endl;

    return 0;
}
