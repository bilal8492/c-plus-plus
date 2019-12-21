// C++ Program to draw a hut pattern 

#include <iostream> 
using namespace std; 

// Program to print the Hut 
int hut_pattern(int n) 
{ 
	int i, j, t; 

	if (n % 2 == 0) { 

		n++; 
	} 

	for (i = 0; i <= n - n / 3; i++) { 

		for (j = 0; j < n; j++) { 
			t = 2 * n / 5; 

			if (t % 2 != 0) { 

				t--; 
			} 

			if (i == n / 5 
				|| i == n - n / 3 
				|| (j == n - 1 && i >= n / 5) 
				|| (j >= n / 5 && j < n - n / 5 && i == 0) 
				|| (j == 0 && i >= n / 5) 
				|| (j == t && i > n / 5) 
				|| (i <= n / 5 && (i + j == n / 5 || j - i == n / 5)) 
				|| (j - i == n - n / 5)) { 

				cout << "*"; 
			} 

			else if (i == n / 5 + n / 7 
					&& (j >= n / 7 && j <= t - n / 7)) { 

				cout << "_"; 
			} 

			else if (i >= n / 5 + n / 7 
					&& (j == n / 7 || j == t - n / 7)) { 

				cout << "|"; 
			} 

			else { 

				cout << " "; 
			} 
		} 
		cout << "\n"; 
	} 
} 

// Driver method 
int main() 
{ 

	// Get the width of the Hut in n 
	int n = 15; 

	// Print the Hut 
	hut_pattern(n); 
} 
