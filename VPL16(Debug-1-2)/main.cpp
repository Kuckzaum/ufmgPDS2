#include <iostream>
#include <list>
#include <stdlib.h>

template <class T, int N>
class BoundedArray {
    public:

        void set(int index, T value) {
            if (index > N-1) throw 1;
            if (index < 0) throw 2;
            buf[index] = value;
        }

        T get(int index, std::list<int>& initIndexes) {
            int found = 0;
            if (index > N-1) throw 1;
            if (index < 0) throw 2;
            for (auto &x : initIndexes) {
		        if(x == index) found = 1;
	        }
            if(found == 0) throw 3;
            return buf[index];
        }
    private:
        T buf[N];
};

template <class T>
void testArray() {
    BoundedArray<T, 8> a;
    char action;
    std::list<int> initIndexes;
    while (std::cin >> action) {
        int index;
        std::cin >> index;
        try {
            if (action == 's') {
                T value;
                std::cin >> value;
                a.set(index, value);
                initIndexes.push_back(index);
            } else if (action == 'g') {
                std::cout << a.get(index,initIndexes) << std::endl;
            }
        }
        catch(int e) {
            if(e == 1) {
                std::cerr << "Erro: indice maior que arranjo." << std::endl;
            } else if(e == 2){
                std::cerr << "Erro: indice negativo." << std::endl;
            } else if(e == 3){
                std::cerr << "Erro: indice nao inicializado." << std::endl;
            } else {
                std::cerr << "Erro desconhecido." << std::endl;
            }
        }
    }
}

int main() {
    char type;
    std::cin >> type;
    switch (type) {
    case 'd':
        testArray<double>();
        break;
    case 'i':
        testArray<int>();
        break;
    case 's':
        testArray<std::string>();
        break;
    }
    return 0;
}