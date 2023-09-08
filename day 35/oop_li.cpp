#include <iostream>
using namespace std;

class linearsearch {
public:
    bool lisearch(int size) {
        int arr[size];
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        return search1(arr, size);
    }

    bool search1(int arr[], int size) {
        bool flag = false;
        int ele;
        cout << "Enter element to search: ";
        cin >> ele;

        for (int i = 0; i < size; i++) {
            if (arr[i] == ele) {
                flag = true;
                break;
            }
        }
        return flag;
    }

    void output(bool flag) {
        if (flag) {
            cout << "Element found";
        } else {
            cout << "Element not found";
        }
    }
};

int main() {
    int x;
    cout << "Enter size: ";
    cin >> x;

    linearsearch search;
    bool result = search.lisearch(x);
    search.output(result);

    return 0;
}