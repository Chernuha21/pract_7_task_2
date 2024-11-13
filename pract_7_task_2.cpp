#include <iostream>
#include <queue>

int main() {
    // ��������� ����� ��� ����� �����
    std::queue<int> numberQueue;

    // �������� ��� ����� �� 50 �� 150 � �����
    for (int i = 50; i <= 150; ++i) {
        numberQueue.push(i);
    }

    // �������� ����� � ����� �� �������� �������� ����� ����� � �����
    int size = numberQueue.size(); // �����'������� ���������� ����� �����

    for (int i = 0; i < size; ++i) {
        int number = numberQueue.front(); // �������� ������ �������
        numberQueue.pop(); // ��������� ���� � �����

        // ����������, �� � ����� ����������
        if (number >= 10 && number < 100) {
            numberQueue.push(number); // �������� ��������� ����� ����� � �����
        }
    }

    // �������� ����������
    std::cout << "numbers of >10 and <99: ";
    while (!numberQueue.empty()) {
        std::cout << numberQueue.front() << " "; // �������� ������ �������
        numberQueue.pop(); // ��������� ���� � �����
    }
    std::cout << std::endl;

    return 0;
}
