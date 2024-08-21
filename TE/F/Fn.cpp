/*

Írd meg a következő függvényeket rekurzívan:
+ Kiszámolja egy adott `n` számig a számok összegét 
    `sum(5) = 1+2+3+4+5 = 15`
+ Kiszámolja egy számtani sorozat `n.` elemét, ha a sorozat első eleme 7, a különbsége pedig 3. 
  $ a_{n}=a_{n-1}+d $
    `arithmeticProgression73(5) = 19`
+ Kiszámolja egy számtani sorozat `n.` elemét, ha a sorozat első eleme és különbsége is paraméterként van megadva.
    `arithmeticProgression(5,7,3) = 19`
+ Kiszámolja egy mértani sorozat `n.` elemét, ha a sorozat első eleme 5, hányadosa pedig 3.
  $ a_n=a_{n-1}*q $
    `geometricProgression53(5) = 20`
+ Kiszámolja egy mértani sorozat `n.` elemét, ha a sorozat első eleme és hányadosa is paraméterként van megadva.
    `geometricProgression53(5,3,5) = 20`
+ Kiszámolja `n` szám faktoriálisát.
    `factorial(4) = 1*2*3*4 = 24`
+ Kiszámolja `2` `n.` hatványát.
    `twoToThePower(4) = 16`
+ Kiszámolja egy adott szám `n.` hatványát.
    `toThePowerOf(2,4) = 16`
+ Kiszámolja két szám szorzatát (* operátor hasznalata nelkül)
    `product(7,8) = 42`
+ Kiszámolja az összes páratlan szám összegét két adott szám közt
    `sumOddInRange(5,14) = 5+7+9+11+13 = 45`
+ Kiszámolja a Fibonacci sorozat `n.` elemét.
    `fibonacci(6) = 8`
+ Visszaadja egy szám legnagyobb számjegyét
    `greatestDigit(85634278) = 8`
+ Visszaadja egy szám utolsó páros számjegyét
    `lastEvenDigit(85634287) = 8`
+ Visszaadja egy szám utolsó páros számjegyét
    lastEvenDigit(85634287) = 8
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int sum(int n) {
    if (n == 0){ 
        return 0;
    } else {
        return n + sum(n-1);
    }
}

int arithmeticProgression73(int n) {
    if (n == 1) {
        return 7;
    } else {
        return arithmeticProgression73(n-1) + 3;
    }
}

int arithmeticProgression(int n, int a, int d) {
    if (n == 1) {
        return a;
    } else {
        return arithmeticProgression(n-1, a, d) + d;
    }
}

int geometricProgression53(int n) {
    if (n == 1) {
        return 5;
    } else {
        return geometricProgression53(n-1) * 3;
    }
}

int geometricProgression(int n, int a, int q) {
    if (n == 1) {
        return a;
    } else {
        return geometricProgression(n-1, a, q) * q;
    }
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int twoToThePowerOf(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * twoToThePowerOf(n-1);
    }
}

int toThePowerOf(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * toThePowerOf(a, n-1);
    }
}

int product(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + product(a, b-1);
    }
}

int sumOddInRange(int a, int b) {
    if (a > b) {
        return 0;
    } else {
        if (a % 2 == 1) {
            return a + sumOddInRange(a+1, b);
        } else {
            return sumOddInRange(a+1, b);
        }
    }
}

uint fibonacci(uint n) {
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    } 
    return (fibonacci(n-1) + fibonacci(n-2));
}

int greatestDigit(int n) {
    if (n < 10) {
        return n;
    } else {
        return max(n % 10, greatestDigit(n / 10));
    }
}

int lastEvenDigit(int n) {
    
}

int main() {
    cout << endl;
    cout <<  "============================ n = 5 ============================" << endl;
    cout <<  "                        sum(n) =  " << sum(5) << endl;
    cout <<  "    arithmeticProgression73(n) =  " << arithmeticProgression73(5) << endl;
    cout <<  "  arithmeticProgression(n,7,3) =  " << arithmeticProgression(5,7,3) << endl;
    cout <<  "     geometricProgression53(n) =  " << geometricProgression53(5) << endl;
    cout <<  "   geometricProgression(n,5,3) =  " << geometricProgression(5,5,3) << endl;
    cout <<  "                  factorial(n) =  " << factorial(5) << endl;
    cout <<  "            twoToThePowerOf(n) =  " << twoToThePowerOf(5) << endl;
    cout <<  "             toThePowerOf(2,n) =  " << toThePowerOf(2,5) << endl;
    cout <<  "                  product(7,8) =  " << product(7,8) << endl;
    cout <<  "           sumOddInRange(5,14) =  " << sumOddInRange(5,14) << endl;
    cout <<  "                 fibonacci(10) =  " << fibonacci(10) << endl;
    cout <<  "       greatestDigit(85634278) =  " << greatestDigit(85634278) << endl;
    cout << endl;


    return 0;
}