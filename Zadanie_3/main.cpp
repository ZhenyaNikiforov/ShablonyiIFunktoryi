/*-Функтор с двумя подпрограммами
(задание №3 в самостоятельной работе)-*/

#include <iostream>
#include <vector>

class count
{
public:
  count()
  {
    this->sum = 0;
    this->coun = 0;
  };
  int getSum() { return this->sum; };
  int getCount() { return this->coun; };
  void operator()(int vectorMember) // перегружаем оператор;
  {
    if (vectorMember % 3 == 0) // если член вектора делится на 3 без ост.,;
    {
      this->sum += vectorMember; // заносим его в накопитель;
      this->coun++;              // увеличиваем счёт;
    }
    return;
  };

protected:
  int sum;
  int coun;
};

int main()
{
  count MyCount;                             // делаем экземпляр функтора
  std::vector<int> vect{4, 1, 3, 6, 25, 54}; // делаем экземпляр вектора;
  for (int i = 0; i < vect.size(); ++i)      // пробегаемся по вектору
  {
    MyCount(vect[i]);
  };

  std::cout << "[IN]: ";
  for (int i = 0; i < vect.size(); ++i)
  {
    std::cout << vect[i] << " ";
  };
  std::cout << std::endl;
  std::cout << "[OUT]: get_sum() = " << MyCount.getSum() << std::endl;
  std::cout << "[OUT]: get_count() = " << MyCount.getCount() << std::endl;
  return 0;
}