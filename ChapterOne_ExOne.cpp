//
//  ChapterOne_ExOne.cpp
//  Cpp_Lessons
//
//  Created by Artur Akhmetshin on 04.10.2020.
//

#include <iostream>

//Функция без аргументов. Получает от пользователя целое число через консоль и возвращает его обратно в caller
int readNumber()
{
    std::cout  << "Введите число: ";
    int number;
    std::cin  >> number;
    return number;
}

//Фукция с единственным аргументом, который она получает из main() и выводит в консоль
void writeAnswer (int result)
{
    std::cout  << "Результат сложения двух чисел: " << result;
}

int main() {

    std::cout << "Эта программа складывает 2 целых числа" << std::endl;
    std::cout << "======================================" << std::endl;
    //Инициализуем 2 переменные, назначаем их значения через вызов функции
    int firstNumber = readNumber();
    int  secondNumber = readNumber();
    
    //Вызываем функцию вывода результата сложения 2х чисел передав в фунцию сумму 2х переменных
    writeAnswer (firstNumber + secondNumber);
    std::cout << std::endl << "======================================" << std::endl;
    
    return 0;
}
