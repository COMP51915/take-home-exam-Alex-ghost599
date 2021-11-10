#include <iostream>
#include <ctime>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
    const int SIZE = 1000;
    //TODO: Add the matrix and vector from q3 in eigen format
    MatrixXd matrix(SIZE,SIZE);
    VectorXd vector(SIZE);
    for(int i = 0; i < SIZE; i++) {
        vector[i] = i*i;
        for(int j = 0;  j < SIZE; j++) {
            matrix(i,j) = i*j+2.1*i+4.2*j;
        }
    }
    clock_t begin = clock();
    for(int iter=0; iter<100; iter++){

        // TODO: Matrix-vector product using Eigen
        // Do not use auto to initialise the solution,
        // this will produce an abstract type instead of a vector
        matrix * vector;
    }
    clock_t end = clock();
    std::cout << "Time taken using eigen: " << double(end - begin) / CLOCKS_PER_SEC / 100 << std::endl;
    // TODO: Comment on your results here
    printf("\nit is very fast compare to all q3 method, it may because Eigen use lazy evaluation\n\
which means it put real calculation at last as possible, whcih will reduce memory\n\
used, also eigen donot have intermediate variables which means it does not need\n\
move data from one memory to another, whcih save time. And inside eigen it has SIMD\n\
whcih doing better for matrix.\n");
    return 0;
}


