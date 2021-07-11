#include <iostream>     // подключаем cout
#include <algorithm>    // подключаем sort
#include <vector>       // подключаем vector

using namespace std; // чтобы не писать std::

bool comp2 (int a,int b) { return (a>b); }

int main () {
  int sort_int_array[] = {5,74,11,65,77,84,13,53};
  vector<int> sort_int_vector (sort_int_array, sort_int_array+8); // 5,74,11,65,77,84,13,53
  int i;

  //ввывод первоначального массива на экран
  for(i=0;i<8;i++)
    cout<<sort_int_vector[i]<<" ";
  cout<<"\n";

  // сортировка по умолчанию, по возрастанию
  sort (sort_int_vector.begin(), sort_int_vector.end()); // 5,11,13,53,65,74,77,84

  //ввывод результатов на экран
  for(i=0;i<8;i++)
    cout<<sort_int_vector[i]<<" ";
  cout<<"\n";

  // сортировка по убыванию
  sort (sort_int_vector.begin(), sort_int_vector.end(), comp2); // 84, 77, 74, 65, 53, 13, 11, 5 

  //ввывод результатов на экран
  for(i=0;i<8;i++)
    cout<<sort_int_vector[i]<<" ";
  cout<<"\n";

  system("pause");
}