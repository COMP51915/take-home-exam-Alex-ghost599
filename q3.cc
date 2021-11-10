#include <iostream>
#include <vector>
#include <ctime>


void Method1(){
    const int SIZE = 1000;

    double matrix[SIZE*SIZE];
    double vector[SIZE];
    for(int i = 0; i < SIZE; i++) {
        vector[i] = i*i;
    }
    for(int i = 0;  i < SIZE*SIZE; i++) {
        int row = i/SIZE;
        int column = i%SIZE;
        matrix[i] = row*column+2.1*row+4.2*column;
    }

    clock_t begin = clock();
    for(int iter=0; iter<100; iter++){

       // TODO: Matrix-vector product
       for(int i = 0; i <SIZE; i++){
			for(int j =0;j <SIZE;j++){
			matrix[i*1000+j] * vector[i];
			}
       }
    }
    clock_t end = clock();
    std::cout << "Time taken method 1: " << double(end - begin) / CLOCKS_PER_SEC / 100 << std::endl;
}

void Method2(){
    const int SIZE = 1000;

    double matrix[SIZE*SIZE];
    double vector[SIZE];
    for(int i = 0; i < SIZE; i++) {
        vector[i] = i*i;
    }
    for(int i = 0;  i < SIZE*SIZE; i++) {
        int row = i%SIZE;
        int column = i/SIZE;
        matrix[i] = row*column+2.1*row+4.2*column;
    }

    clock_t begin = clock();
    for(int iter=0; iter<100; iter++){

        // TODO: Matrix-vector product
       for(int i = 0; i <SIZE; i++){
			for(int j =0;j <SIZE;j++){
			matrix[i*1000+j] * vector[i];
			}
       }
    }
    clock_t end = clock();
    std::cout << "Time taken method 2: " << double(end - begin) / CLOCKS_PER_SEC / 100 << std::endl;
}

void Method3(){
    const int SIZE = 1000;

    double matrix[SIZE][SIZE];
    double vector[SIZE];
    for(int i = 0; i < SIZE; i++) {
        vector[i] = i*i;
        for(int j = 0;  j < SIZE; j++) {
            matrix[i][j] = i*j+2.1*i+4.2*j;
        }
    }

    clock_t begin = clock();
    for(int iter=0; iter<100; iter++){

        // TODO: Matrix-vector product
        for(int i = 0; i<SIZE; i++){
		 	for(int j =0;j<SIZE; j++){
		 	matrix[i][j] * vector[i];
		 	}
        }

    }
    clock_t end = clock();
    std::cout << "Time taken method 3: " << double(end - begin) / CLOCKS_PER_SEC / 100 << std::endl;
}

int main()
{
    Method1();
    Method2();
    Method3();
    // TODO: Comment on your results and reasoning here
    printf("\nBy running q3 few times, the fastest one is Method2\n\
follow by Method1 and Method3 is the slowest one.\n\
the reason for that should be c use row major, matrix\n\
list of row, the memory for row is continuous which will\n\
be faster to access.\n");
    return 0;
}


