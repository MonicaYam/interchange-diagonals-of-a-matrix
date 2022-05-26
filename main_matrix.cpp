#include<iostream>

using namespace std;

// Number for array.
constexpr static int NUM = 3;


void interchangeMatrix(int matrix[][NUM]);
void display(const int matrix[][NUM]);

int main()
{
    int matrix[][NUM] = { 10,11,12, 20,21,22, 30,31,32, 40,41,42 };
    //int matrix[][NUM] = { 10,11,12,13, 20,21,22,23, 30,31,32,33, 40,41,42,43 };

    //just show original matrix
    display(matrix);

    //interchange matrix
    interchangeMatrix(matrix);

    //display interchanged matrix
    display(matrix);
    
    return 0;
}

/*
 * Function for interchange matrix
 */
void interchangeMatrix(int matrix[][NUM])
{
    int last_num_idx = NUM - 1;

    // for-loop for each line
    for (int i = 0; i < NUM; ++i) {       
        // First line and Last line are need to swap first number and last number.
        if (i == 0 || i == last_num_idx) {
            swap(matrix[i][0], matrix[i][last_num_idx]);
        } else{
            // Other lines
            swap(matrix[i][i], matrix[i][last_num_idx - i]);           
        }
    }
}


/*
 * Display current matrix
 */
void display(const int matrix[][NUM]) {
    cout << "**** current Diagonals of Matrix ****" << endl;

    for (int i = 0; i < NUM; ++i){
        for (int j = 0; j < NUM; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}