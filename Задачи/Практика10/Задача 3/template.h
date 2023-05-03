#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

template <typename Atype>
class Set {
    Atype* a; // ��������� �� ������ ��������� ���������
    int len; // ���������� ��������� � ���������, ������� ����������
    int len_NOT_NULL; // ���������� ��������� � ���������, ������� �� �������
    int size; // ������ ������� a

public:
    Set(int size); // �����������
    Set(); // ����������� �� ���������
    ~Set(); // ����������
    bool IsEmpty(); // �������� �� �������
    bool IsFull(); // �������� �� �������������
    bool Add(const Atype& value); // ��������� ��������
    bool InSet(const Atype& value); // �������������� ��������
    Atype Get(const Atype& value); // ���������� ��������
    void show();
    int Get_len();
    Atype *Get_A(); // ���������� ��������

    friend bool operator<=<>(Set<Atype>& s1, Set<Atype>& s2);

};
template <typename Atype>
Set<Atype>::Set(int size) {
    len = size;
    len_NOT_NULL = 0;
    this->a = new Atype[size];
    size = sizeof(Atype) * size;
    for (int i = 0; i < len; i++) { a[i] = 0; } // ��� ������� �����.
    cout << "������ ������ ���� " << typeid(Atype).name() << " �� " << len << " ��������/��" << endl;


}

template <typename Atype>
Set<Atype>::~Set() {
    cout << "������ ���� " << typeid(Atype).name() << " �� " << len << " ��������/�� �����" << endl;
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
    //    return false; // ���� ��������� ������, ������� false
    //}
    
        for (int i = 0; i < len; i++) {
            if (a[i] == value) {
                cout << "������� ��� ����" << endl;
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
    // ���� ���������� �������� ���, ����������� ������ ������� �� 1
    if (freeIndex == -1) {
        Atype* newA = (Atype*)realloc(a, (len + 1) * sizeof(Atype));
        if (newA == nullptr) {
            return false;
        }
        else {
            a = newA;
            a[len] = value;
            cout << "������ ������� �������� " << len + 1 << endl;
            cout << "�������� ������� value = " << value << endl;
            len_NOT_NULL++;
            len++;
            size = size + sizeof(Atype);
            sort(a, a + len); // ���������� ���������

        }
    }
    else {
        // ����� ������ ��������� ������� �� ��������� �����
        a[freeIndex] = value;
        len_NOT_NULL++;
        size = size + sizeof(Atype);

        cout << "�������� ������� value = " << value << endl;
        sort(a, a + len); // ���������� ���������
    }
    return true;
}

template <typename Atype>
void Set<Atype>::show() {
    for (int i = 0; i < len; i++) {
        cout << "������� i = " << a[i] << endl;
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
            sort(a, a + len); // ���������� ���������
            return result;
        }
    }
    return false;
}

template<typename Atype>
int Set<Atype>::Get_len() { //��������� len ��� ������������� ����������
    return len;
}
template<typename Atype>
Atype* Set<Atype>::Get_A() { //��������� a ��� ������������� ����������
    return a;
}

template <typename Atype>
void operator+(Set<Atype> &s1, Set<Atype> &s2) {  //����������� ���� ��������
    Set<Atype> result(s1.Get_len()); // ������� ����� ���������
    Atype* a_s1 = s1.Get_A(); // �������� ��������� �� ������ ������� ���������
    for (int i = 0; i < s1.Get_len(); i++) {
        result.Add(a_s1[i]); // ��������� ��� �������� ������� ��������� � ����� ���������
    }

    Atype* a_s2 = s2.Get_A(); // �������� ��������� �� ������ ������� ���������
    for (int i = 0; i < s2.Get_len(); i++) {
        result.Add(a_s2[i]); // ��������� ��� �������� ������� ��������� � ����� ���������
    }
    
    Atype* a_r = result.Get_A(); // �������� ��������� �� ������ ������ ���������
    cout << "����� ��������� ����� �����������" << endl;
    for (int i = 0; i < result.Get_len(); i++) {
        cout << "i " << i << " " << a_r[i] << endl; // ������� 
    }

    return;
}




template<typename Atype>
void operator*(Set<Atype>& s1, Set<Atype>& s2) {//����������� ���� ��������
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
    Atype* a_r = result.Get_A(); // �������� ��������� �� ������ ������ ���������
    cout << "����� ��������� ����� �����������" << endl;
    for (int i = 0; i < result.Get_len(); i++) {
        cout << "i " << i << " " << a_r[i] << endl; // ������� 
    }
    return;
}


template<typename Atype>
bool operator<=(Set<Atype>& s1, Set<Atype>& s2) { // �������� �� ���� ��������� ������
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


