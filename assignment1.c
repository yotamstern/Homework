#include <stdio.h>
#include <stdbool.h>


void main() {
	printf("Hello world. \n");
	
	print("%d\n", mult(5, 20));
	print("%d\n", power(2, 5));
	power2(0);
	power3(9);
	print("%d\n", factorial(5));
	printreverse(10);
	print(hasRemainder(10, 5));
	print("%d\n", quotient(5, 4));
	print("%d\n", remainder(4, 5));
	print("%d\n", fibonacci(5));
	print("%d\n", customFibonacci(6, 7,9));


}

// recursive function for number * another number using addition
int mult(int i, int j) {
	if (j == 0)
		return 0;
	return i + mult(i, j - 1);
}

// recursive function for number ** another number using multiplication
int power(int i, int j) {
	if (j == 0)
		return 1;
	return i * power(i, j - 1);
	
}

// recursive function that prints 2**0-10
int power2(int n){
	if (n > 10)
		return 0;
	printf("%d\n", power(2, n));
	return power2(n + 1);
}

//recursive function that prints 2**0-number in input 
int power3(int n) {
	if (n > 10)
		return 0;
	printf(power(2, n));
	return power3(n + 1);
}

// recursive function that recieves a number and returns its factorial
int factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
// recursive function that prints the reverse order (num until zero)
int printreverse(int n) {
	if (n == 0)
		printf("%d\n", 0);
	printf("%d\n", n);
	return(printreverse(n - 1));
}

//recursive function that returns true if number divided by another number has a remainder or false if not
bool hasRemainder(int i, int j) {
	if (j == 0)
		return false;         
	if (i < j) 
		return true;           
	if (i == j) 
		return false;         
	return hasRemainder(i - j, j);   
}

// recursive function that recieves two numbers and returns theie quotient
int quotient(int i, int j) {
	if (j == 0) {
		printf("Error!");
		return -1;
	}
	if (i < j)
		return 0;
	return 1 + quotient(i - j, j);
}

// recursive function that recieves two numbers and returns their remainder from (num/num)
int remainder(int i, int j) {
	if (i == 0) {
		printf("Error!");
		return -1;
	}
	if (i == j)
		return 0;
	if (i < j)
		return i;
	return remainder(i - j, j);
}

//recursive function that returns the value of the (n) number according to the fibonacci series
int fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

// recursive function that returns the value of the (n) number in a custom fibonacci series
int customFibonacci(int n, int first, int second) {
	if (n == 0)
		return first;
	if (n == 1)
		return second;
	return customFibonacci(n - 1, first, second) + customFibonacci(n - 2, first, second);
}

