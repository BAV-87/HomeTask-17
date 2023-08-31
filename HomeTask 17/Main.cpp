//HomeTask 17
#include <iostream>;

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

int mean_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum / length;
}

void powers(int N, int M) {
	for (int i = 0; i <= M; i++) {
		int v = 1;
		for (int j = 0; j < i; j++) {
			v *= N;
		}
		std::cout << N << " ^ " << i << " = " << v << std::endl;
	}
}

void positive_arr(int arr[], int length1) {
	for (int i = 0; i < length1; i++) {
		if (arr[i] < 0)
			std::cout << -arr[i] << ' ';
	}
}

int main() {
	std::cout << "Task 17.1\n";
	int n, m;
	std::cout << "Enter first number -> ";
	std::cin >> n;
	std::cout << "Enter second number -> ";
	std::cin >> m;
	std::cout << "Arithmetic mean numbers = " << mean(m, n) << std::endl;

	std::cout << "\nTask 17.2\nArray:";
	int const size = 5;
	int arr[size]{ 2, 4, 6, 8, 10 };
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\nArithmetic mean array: " << mean_arr(arr, size) << std::endl;

	std::cout << "\nTask 17.3\n";
	std::cout << "Enter number N -> ";
	int N;
	std::cin >> N;
	std::cout << "Enter number M -> ";
	int M;
	std::cin >> M;
	powers(N, M);

	std::cout << "\nTask 17.4\nArray: ";
	int const size1 = 5;
	int arr1[size1]{ -7, -8, 6, -5, -4 };
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << std::endl;
	std::cout << "Conversion to positive numbers: ";
	positive_arr(arr1, size1);
	std::cout << "\n";

	return 0;
}