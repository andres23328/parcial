#include <iostream>
using namespace std;

// Definir una clase Fibonacci
class Fibonacci {
private:
    int n; // Número hasta el cual calcular la secuencia

public:
    // Constructor que toma el valor de n
    Fibonacci(int num) {
        n = num;
    }

    // Método para calcular la secuencia de Fibonacci
    void calcular() {
        int a = 0, b = 1;
        cout << "Fibonacci(0) = " << a << endl;
        if (n > 0) {
            cout << "Fibonacci(1) = " << b << endl;
        }
        for (int i = 2; i == n; i++) {
            int c = a + b;
            cout << "Fibonacci(" << i << ") = " << a << " + " << b << " = " << c << endl;
            a = b;
            b = c;
        }
    }
};

int main() {
    int n;

    while (true) {
        cout << "Ingresa el valor de n o (-1 para salir): ";
        cin >> n;

        if (n <= -1) {
            break;
        }

        // Crear un objeto de la clase Fibonacci
        Fibonacci fib(n);
        // Llamar al método calcular
        fib.calcular();
    }

    return 0;
}


