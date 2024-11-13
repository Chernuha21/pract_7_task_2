#include <iostream>
#include <queue>

int main() {
    // Створення черги для цілих чисел
    std::queue<int> numberQueue;

    // Записуємо цілі числа від 50 до 150 в чергу
    for (int i = 50; i <= 150; ++i) {
        numberQueue.push(i);
    }

    // Витягуємо числа з черги та записуємо двозначні числа назад у чергу
    int size = numberQueue.size(); // Запам'ятовуємо початковий розмір черги

    for (int i = 0; i < size; ++i) {
        int number = numberQueue.front(); // Отримуємо перший елемент
        numberQueue.pop(); // Видаляємо його з черги

        // Перевіряємо, чи є число двозначним
        if (number >= 10 && number < 100) {
            numberQueue.push(number); // Записуємо двозначне число назад у чергу
        }
    }

    // Виводимо результати
    std::cout << "numbers of >10 and <99: ";
    while (!numberQueue.empty()) {
        std::cout << numberQueue.front() << " "; // Виводимо перший елемент
        numberQueue.pop(); // Видаляємо його з черги
    }
    std::cout << std::endl;

    return 0;
}
