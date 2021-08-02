#include <iostream>

/**
 * Dummy class using template
*/
template <typename T>
class Foo {
    public:
        /**
         * Init new Foo object and set value
         * @param value 
        */
        Foo(T value) {
            _value = value;
        }

        T getValue() const {
            return _value;
        }
        
    private:
        T _value;     
};

int main() {
    Foo<int> instance {5};
    std::cout << "Value: " << instace.getValue() << std::endl;

    return 0;
}