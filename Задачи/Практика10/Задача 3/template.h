#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

template <typename Atype>
class Set {
    Atype* a; // Указатель на массив элементов множества
    int len; // Количество элементов в множестве, которые существует
    int len_NOT_NULL; // Количество элементов в множестве, которые не нулевые
    int size; // Размер массива a

public:
    Set(int size); // Конструктор
    Set(); // Конструктор по умолчанию
    ~Set(); // Деструктор
    bool IsEmpty(); // Проверка на пустоту
    bool IsFull(); // Проверка на заполненность
    bool Add(const Atype& value); // Включение элемента
    bool InSet(const Atype& value); // Принадлежность элемента
    Atype Get(const Atype& value); // Извлечение элемента
    void show();
    int Get_len();
    Atype *Get_A(); // Извлечение элемента

    friend bool operator<=<>(Set<Atype>& s1, Set<Atype>& s2);

};
template <typename Atype>
Set<Atype>::Set(int size) {
    len = size;
    len_NOT_NULL = 0;
    this->a = new Atype[size];
    size = sizeof(Atype) * size;
    for (int i = 0; i < len; i++) { a[i] = 0; } // Для базовых типов.
    cout << "Создан массив типа " << typeid(Atype).name() << " на " << len << " элемента/ов" << endl;


}

template <typename Atype>
Set<Atype>::~Set() {
    cout << "Массив типа " << typeid(Atype).name() << " на " << len << " элемента/ов удалён" << endl;
    delete[] this->a;

}

template <typename Atype>

bool Set<Atype>::IsEmpty() {
   return len_NOT_NULL == 0;
}

template<typename Atype>
bool Set<Atype>::IsFull() {
   /* int count = 0;
    for (auto i : a) {
        if (i != 0) count++;
    }
    if (count == len) return true;
    else return false;*/
    return len_NOT_NULL == len;
    //else return false;

}

template <typename Atype>
bool Set<Atype>::Add(const Atype& value) {
    //if (IsFull()) {
    //    return false; // Если множество полное, возврат false
    //}
    
        for (int i = 0; i < len; i++) {
            if (a[i] == value) {
                cout << "Элемент уже есть" << endl;
                return false;
            }
        }
    
    int freeIndex = -1;
    for (int i = 0; i < len; i++) {
        if (a[i] == 0) {
            freeIndex = i;
            break;
        }
    }
    // Если свободного элемента нет, увеличиваем размер массива на 1
    if (freeIndex == -1) {
        Atype* newA = (Atype*)realloc(a, (len + 1) * sizeof(Atype));
        if (newA == nullptr) {
            return false;
        }
        else {
            a = newA;
            a[len] = value;
            cout << "Размер массива увеличен " << len + 1 << endl;
            cout << "Добавлен элемент value = " << value << endl;
            len_NOT_NULL++;
            len++;
            size = size + sizeof(Atype);
            sort(a, a + len); // сортировка элементов

        }
    }
    else {
        // Иначе просто добавляем элемент на свободное место
        a[freeIndex] = value;
        len_NOT_NULL++;
        size = size + sizeof(Atype);

        cout << "Добавлен элемент value = " << value << endl;
        sort(a, a + len); // сортировка элементов
    }
    return true;
}

template <typename Atype>
void Set<Atype>::show() {
    for (int i = 0; i < len; i++) {
        cout << "Элемент i = " << a[i] << endl;
    }
}
template <typename Atype>
bool Set<Atype>::InSet(const Atype& value) {

    for (int i = 0; i < len; i++) {
        if (a[i] == value) return true;
    }
}

template<typename Atype>
Atype Set<Atype>::Get(const Atype& value) {
    for (int i = 0; i < len; i++) {
        if (a[i] == value) {
            Atype result = a[i];
            a[i] = 0;
            len--;
            len_NOT_NULL--;
            sort(a, a + len); // сортировка элементов
            return result;
        }
    }
    return false;
}

template<typename Atype>
int Set<Atype>::Get_len() { //получение len для перегруженных операторов
    return len;
}
template<typename Atype>
Atype* Set<Atype>::Get_A() { //получение a для перегруженных операторов
    return a;
}

template <typename Atype>
void operator+(Set<Atype> &s1, Set<Atype> &s2) {  //объединение двух множеств
    Set<Atype> result(s1.Get_len()); // создаем новое множество
    Atype* a_s1 = s1.Get_A(); // получаем указатель на массив первого множества
    for (int i = 0; i < s1.Get_len(); i++) {
        result.Add(a_s1[i]); // добавляем все элементы первого множества в новое множество
    }

    Atype* a_s2 = s2.Get_A(); // получаем указатель на массив второго множества
    for (int i = 0; i < s2.Get_len(); i++) {
        result.Add(a_s2[i]); // добавляем все элементы второго множества в новое множество
    }
    
    Atype* a_r = result.Get_A(); // получаем указатель на массив нового множества
    cout << "Новое множество после объединения" << endl;
    for (int i = 0; i < result.Get_len(); i++) {
        cout << "i " << i << " " << a_r[i] << endl; // выводим 
    }

    return;
}




template<typename Atype>
void operator*(Set<Atype>& s1, Set<Atype>& s2) {//пересечение двух множеств
    Set<Atype> result(s1.Get_len());
    Atype* a_s1 = s1.Get_A();
    Atype* a_s2 = s2.Get_A(); 

    for (int i = 0; i < s1.Get_len(); i++) {
        for (int j = 0; j < s2.Get_len(); j++) {
            if (a_s1[i]== a_s2[j]) {
                result.Add(a_s1[i]);
            }
        }
    }
    Atype* a_r = result.Get_A(); // получаем указатель на массив нового множества
    cout << "Новое множество после пересечения" << endl;
    for (int i = 0; i < result.Get_len(); i++) {
        cout << "i " << i << " " << a_r[i] << endl; // выводим 
    }
    return;
}


template<typename Atype>
bool operator<=(Set<Atype>& s1, Set<Atype>& s2) { // включает ли одно множество другое
    Atype* a_s1 = s1.Get_A();
    Atype* a_s2 = s2.Get_A();
    int len_s1 = s1.Get_len();
    int len_s2 = s2.Get_len();
    if (len_s1 > len_s2) {
        return false;
    }
    for (int i = 0; i < len_s1; i++) {
        bool found = false;
        for (int j = 0; j < len_s2; j++) {
            if (a_s1[i] == a_s2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}


