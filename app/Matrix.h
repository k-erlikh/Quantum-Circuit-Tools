#include <stdio.h>
#include <vector>
#include <iostream>

#ifndef MATRIX_H
#define MATRIX_H

template<typename T>
class Matrix{
    protected:
        int cols;
        int rows;
        std::vector<T> data;

    public:
        Matrix(int cols, int rows){
            if (cols > 0 && rows > 0){
                this->cols = cols;
                this->rows = rows;
                data.resize(cols * rows);
            }
            else{
                data.resize(1 * 1);
            }
        };

        void setMatrix(const std::vector<T> values){
            data = values;
        }
        
        int t_cols() const{
            return this->cols;
        };

        int t_rows() const{
            return this->rows;
        };

        T& operator()(int col, int row){
            if(row > 0 && row <= this->rows && col > 0 && col <= this->cols){
                return this->data[row*this->cols + col];
            }
            else{
                return -1;
            }
        };

        T& operator()(int col, int row) const{
            if(row > 0 && row <= this->rows && col > 0 && col <= this->cols){
                return this->data[row*this->cols + col];
            }
            else{
                return -1;
            }
        };

        void print_matrix(){
            for(int i = 0; i < this->rows; i ++){
                for(int j = 0; j < this-> cols; j++){
                    std::cout << (i, j) << " ";
                }
                std::cout << std::endl;
            }
        };
}; 

#endif