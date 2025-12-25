/*-Шаблонная ф-ция возведения в квадрат
(задание №1 в домашней работе)-*/

#include <iostream>
#include <vector>

template <typename vl>
void multiplies(vl number) // шаблонная ф-ция под разные типы чисел;
{
  std::cout << number * number << std::endl;
};

template <typename f>
void multiplies(std::vector<f> &numbers) // перегрузка шаблонной ф-ции под вектор;
{
  for (int i = 0; i < numbers.size(); ++i)
  {
    std::cout << numbers[i] * numbers[i] << " ";
  };
  std::cout << "\n";
}

int main()
{
  /*-пробуем шаблонную ф-цию с разными типами чисел (int и double)-*/
  std::cout << "Pod cseloe chislo :" << std::endl;
  int number1 = 4;
  std::cout << "[IN]: " << number1 << std::endl;
  std::cout << "[OUT]: ";
  multiplies(number1);
  std::cout << std::endl;

  std::cout << "Pod drobnoe chislo :" << std::endl;
  double number2 = 4.5;
  std::cout << "[IN]: " << number2 << std::endl;
  std::cout << "[OUT]: ";
  multiplies(number2);
  std::cout << std::endl;

  /*-пробуем перегруженную шаблонную ф-цию с разными типами векторов (<int> и <double>)-*/
  std::cout << "Pod nabor cselyikh chisel :" << std::endl;
  std::vector<int> vec{-1, 4, 8};
  std::cout << "[IN]: ";
  for (int i = 0; i < vec.size(); ++i)
  {
    std::cout << vec[i] << " ";
  };
  std::cout << "\n";

  std::cout << "[OUT]: ";
  multiplies(vec);
  std::cout << std::endl;

  std::cout << "Pod nabor drobnyikh chisel :" << std::endl;
  std::vector<double> vect{-1.1, 4.2, 8.1};
  std::cout << "[IN]: ";
  for (int i = 0; i < vect.size(); ++i)
  {
    std::cout << vect[i] << " ";
  };
  std::cout << "\n";

  std::cout << "[OUT]: ";
  multiplies(vect);
  std::cout << std::endl;

  return 0;
}