#include <bits/stdc++.h>
using namespace std;

int highest_frequency(int array[], const int& arr_size) {
    int max = array[0], index = 0;
    for (int i = 0; i < arr_size; i++) {
        if (max < array[i]) {
            max = array[i];
            index = i;
        }
    }
    return index;
}

int main() {
    const int total_alphabets = 26;
    char alphabet_array[total_alphabets];
    std::memset(alphabet_array, ' ', sizeof(alphabet_array));
    for (int i = 0; i < total_alphabets; i++) alphabet_array[i] = char(i + 97);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int no_of_elements;
        std::cin >> no_of_elements;
        char array[no_of_elements];

        for (int j = 0; j < no_of_elements; j++) {
            char element;
            std::cin >> element;
            array[j] = element;
        }

        int count[total_alphabets];
        std::memset(count, 0, sizeof(count));

        for (int z = 0; z < no_of_elements; z++) {
            count[alphabet_array[array[z] - 97] - 97]++;
        } /* this loop is the solution part of the question */

        int highest_frequency_index = highest_frequency(count, total_alphabets);
        if (count[highest_frequency_index] == 1)
            std::cout << "No Duplicates Present.\n";
        else
            std::cout << alphabet_array[highest_frequency_index] << " - " << count[highest_frequency_index] << "\n";
    }
    return 0;
}