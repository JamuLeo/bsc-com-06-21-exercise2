
    #include <iostream>
    using namespace std;
    int main() {


        //Getting  the dimensions of the array from the user
        int rows, cols;
        
        cout << "Enter the number of rows: ";
        cin >> rows;

        cout << "Enter the number of columns: ";
        cin >> cols;

        // Check if the dimensions are valid
        if (rows > 3 || cols > 3) {
            cout << "The dimensions of the array must not exceed 3x3." << endl;
            return 1;
        }

        // Dynamically allocate the array
        double **array = new double*[rows];
        for (int i = 0; i < rows; i++) {
            array[i] = new double[cols];
        }

        // Assign values to each element of the array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter the value for row " << i << ", column " << j << ": ";
                cin >> array[i][j];
            }
        }

        // Output the values of each element of the array
        cout << "The values of the array are:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }

        // Deallocate the array
        for (int i = 0; i < rows; i++) {
            delete[] array[i];
        }
        delete[] array;

    return 0;
    }