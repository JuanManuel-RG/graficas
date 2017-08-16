#include <iostream>
#include <string>


int PerimetroRectangulo(int base, int altura) {
	int p = 2 * base + 2 * altura;
	return p;
}

float AreaTriangulo(float base, float altura) {
	float a = (base*altura) / (2);
	return a;
}

int Mayor(int numero1, int numero2, int numero3) {
	if (numero1 > numero2 && numero1 > numero3) {
		return numero1;
	}
	if (numero2 > numero1 && numero2 > numero3) {
		return numero2;
	}
	if (numero3 > numero1 && numero3 > numero2) {
		return numero3;
	}
	return 0;
}

int Menor(int numero1, int numero2, int numero3) {
	if (numero1 < numero2 && numero1 < numero3) {
		return numero1;
	}
	if (numero2 < numero1 && numero2 < numero3) {
		return numero2;
	}
	if (numero3 < numero1 && numero3 < numero2) {
		return numero3;
	}
	return 0;
}

void FilaEstrellas(int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << "* ";
	}
	std::cout << "" << std::endl;
	std::cin.get();
}

void MatrizEstrellas(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j<n; ++j) {
			std::cout << "* ";
		}
		std::cout << "" << std::endl;
		std::cin.get();
	}
}

void PiramideEstrellas(int n) {
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j<i; ++j) {
			std::cout << "* ";
		}
		std::cout << "" << std::endl;
		std::cin.get();
	}
}

void FlechaEstrellas(int num) {
	int count = 1;
	while (num >= count) {
		std::string starString(count, '*');
		std::cout << starString << std::endl;
		std::cin.get();
		count++;
	}
	count--;
	while (count >= 1) {
		count--;
		std::string starString(count, '*');
		std::cout << starString << std::endl;
		std::cin.get();
	}
}

void Fibonacci(int n) {
	int suma = 0;
	int prev = -1;
	int sig = 1;
	for (int i = 0; i <= n; ++i) {
		suma = sig + prev;
		prev = sig;
		sig = suma;
		std::cout << suma << " ";
	}
	std::cout << "" << std::endl;
	std::cin.get();
}

bool EsPrimo(int numero) {
	int i = 2;
	while (i < numero) {
		if (numero % i == 0) return 0;
		i++;
	}
	return 1;
}



int main(int argc, const char * argv[]) {

	

	return 0;
}