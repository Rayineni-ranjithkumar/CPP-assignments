#include <iostream>
#include <vector>
using namespace std;

// Function to find two indices where the numbers add up to the target
vector<int> twoSum(vector<int>& numbers, int target) {
    int size = numbers.size();

    // Check all pairs of numbers
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] + numbers[j] == target) {
                return {i, j};  // Return indices if found
            }
        }
    }

    return {};  // Return empty if no solution found (should not happen here)
}

int main() {
    int size, target;

    // Get the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Validate size
    if (size < 2) {
        cout << "You need at least 2 numbers to solve this problem!" << endl;
        return 0;
    }

    vector<int> numbers(size);

    // Get the array elements from the user
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Get the target value from the user
    cout << "Enter the target value: ";
    cin >> target;

    // Find indices using twoSum function
    vector<int> result = twoSum(numbers, target);

    // Display the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Numbers: " << numbers[result[0]] << " + " << numbers[result[1]]
             << " = " << target << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}

