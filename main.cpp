#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace  std;



    //problem 5

/*
bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int list1[size], list2[size];

    cout << "-------  FIRST ARRAY  --------" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i << ": ";
        cin >> list1[i];
    }

    cout << "-------  SECOND ARRAY  --------" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i << ": ";
        cin >> list2[i];
    }


    strictlyEqual(list1, list2, size) ? cout << "True" << endl : cout << "False" << endl;


    return 0;
}
*/




    //problem 6

/*
int main() {
    int freq[26] = {0};
    char ch;

    cout << "Enter lowercase letters (a-z). Type '0' to stop: ";

    while (cin >> ch && ch != '0') {
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    cout << "\nLetter counts:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char('a' + i) << ": " << freq[i] << endl;
    }

    return 0;
}

*/







    //problem 7

/*
int main() {
    int size;
    cout << "Please enter the size of the array: ";
    cin >> size;
    int list[size];

    cout << "Please enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Please enter element #" << i + 1 << ": ";
        cin >> list[i];
    }

    // Bubble Sort Start
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {

                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    cout << "RESULT:" << endl;
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}

*/


    //problem 8

/*
int main() {
    srand(time(0));
    int dice[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 10000; i++) {
        int randomNum = rand() % 6;

        cout << "Roll " << i << " dice result: " << dice[randomNum] << endl;
    }
    return 0;
}

*/

    //problem 9

/*
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Please enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Please enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cout << "Element #" << i + 1 << ": ";
        cin >> arr[i];
    }

    reverseArray(arr, 0, size - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

*/



    //problem 10


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input.";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    cout << (sorted ? "YES" : "NO") << endl;
    return 0;
}