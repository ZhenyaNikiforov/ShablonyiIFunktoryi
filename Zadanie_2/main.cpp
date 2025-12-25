/*-Шаблонный класс
(задание №2 в самостоятельной работе)-*/

#include <iostream>
template <typename T>
class table
{
protected:
  T **matrix;
  int rows;
  int cols;

public:
  table(int rows, int cols)
  {
    this->rows = rows;
    this->cols = cols;
    matrix = new T *[rows];
    for (int i = 0; i < rows; ++i)
    {
      matrix[i] = new T[cols];
    };
  };

  ~table()
  {
    for (int i = 0; i < this->rows; ++i)
    {
      delete[] matrix[i];
    };
    delete[] matrix;
  };

  int *operator[](int i)
  {
    return matrix[i];
  }
  const int *operator[](int i) const
  {
    return matrix[i];
  }

  int Size() const
  {
    return this->rows * this->cols;
  }
};

int main()
{
  table<int> matrix(3, 4);
  std::cout << "Znachenie v matrix[2][3]: " << matrix[2][3] << std::endl;
  matrix[2][3] = 10;
  std::cout << "Novoe znachenie v matrix[2][3]: " << matrix[2][3] << std::endl;
  std::cout << "Razmer tablicsyi = rows*cols = " << matrix.Size() << std::endl;

  return 0;
}