#include <bits/stdc++.h>
using namespace std;

bool two_sum(int array[], int left, int right, const int key) {
    bool flag = false;
    while (left <= right) {
        int temp_sum = array[left] + array[right];
        if (temp_sum == key) {
            flag = true;
            cout << "(" << array[left] << ", " << array[right] << ") ";
            if (array[left] == array[left + 1] && array[right] != array[right - 1])
                left++;
            else if (array[left] != array[left + 1] && array[right] == array[right - 1])
                right--;
            else {
                left++;
                right--;
            }
        } else if (temp_sum > key)
            right--;
        else
            left++;
    }
    return flag;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int no_of_elements;
        cin >> no_of_elements;
        int array[no_of_elements];

        for (int j = 0; j < no_of_elements; j++) {
            int element;
            cin >> element;
            array[j] = element;
        }

        sort(array, array + no_of_elements);

        int key;
        cin >> key;
        bool pair_exist = two_sum(array, 0, no_of_elements - 1, key);

        if (!pair_exist) cout << "No such pair exist.";
        cout << "\n";
    }
    return 0;
}