#pragma once
 
#include <iostream>
#include <sstream>

using namespace std;

/**
* \brief Структура узла
 */
struct Node
{
private:
	/**
	 * \brief Данные узла
	 */
	int data;
	/**
	 * \brief Указатель на следующий узел в списке
	 */
	Node* next;

	friend class CircularLinkedList; // Для возможности классу ЦОС обращаться к privite полям Node
public:
	/**
	 * \brief Консруктор по умолчанию
	 */
	Node() noexcept;
	/**
	 * \brief Консруктор с параметрами
	 */
	Node(const int data_) noexcept;
	/**
	 * \brief Деструктор
	 */
	~Node() noexcept;
};

/**
 * \brief Класс ЦОС
 */
class CircularLinkedList
{
private:
	/**
	* \brief Указатель на голову списка
	*/
	Node* head;
	/**
	* \brief Удаление узла с ЦОС
	*/
	Node* delete_head(Node *node);
public:
	/**
	* \brief Консруктор по умолчанию
	*/
	CircularLinkedList() noexcept;
	/**
	 * \brief Деструктор
	 */
	~CircularLinkedList() noexcept;
	/**
	* \brief Добавление узла в ЦОС
	*/
	void add_node(Node* node) noexcept;
	/**
	* \brief Удаление узла с ЦОС
	*/
	void remove() noexcept;
	/**
	* \brief Поиск узла в ЦОС
	*/
	bool find_node(const int data_) const noexcept;
    /**
     * \brief Печать списка
     * \return Строка, содержащая узлы списка
     */
	string print_list() const;
};
