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
        Matrix() : cols(1), rows(1), data(1, T()) {}

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

        T& operator()(int row, int col) {
            if (row >= 0 && row < this->rows && col >= 0 && col < this->cols) {
                return this->data[row * this->cols + col];
            } 
            throw std::out_of_range("Exception: Out of bounds");
        }
        
        const T& operator()(int row, int col) const {
            if (row >= 0 && row < this->rows && col >= 0 && col < this->cols) {
                return this->data[row * this->cols + col];
            } 
            throw std::out_of_range("Exception: Out of bounds");
        }        

        void print_matrix(){
            for (int i = 0; i < this->rows; i++) {
                std::cout << "| ";
                for (int j = 0; j < this->cols; j++) {
                    std::cout << data[i * this->cols + j] << " ";  // Fix the indexing
                }
                std::cout << "|";
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }

        Matrix<T> multiply_matrix(const Matrix<T>& other) {
            Matrix<T> result(other.cols, this->rows);
            for (int i = 0; i < this->rows; ++i) { 
                for (int j = 0; j < other.cols; ++j) {
                    T sum = 0;
                    for (int k = 0; k < this->cols; ++k) { 
                        sum += (*this)(i, k) * other(k, j); 
                    }
                    result(i, j) = sum;
                }
            }
            return result;
        }
}; 

#endif