
// Class template - Array

// Note: Since C++11 the STL has std::array which is a template-based array class
// Use std::array instead of raw arrays whenever possible

// Note that we can have non-type template parameters
// That's what N is in this case

#include <iostream>
#include <string>

template <typename T, int N>//without int N, the constructor cant get executed as it needs to know what the value of N is at compile time !!
class Array {
    int size {N};           // how do we get the N???
    T values[N];            // the N needs to ne known at compile-time!

    friend std::ostream &operator<<(std::ostream &COUT, const Array<T, N> &arr) {
        //must be defined inside the class body as T and N are declared in side the class scope
        //must use 'friend' as the first parameter is not Array class type, but ostream type
        COUT << "[ ";
        for (const auto &val: arr.values)
            COUT << val << " ";
        COUT << "]" << std::endl;
        return COUT;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item: values)
            item = init_val;
    }
    //fill all elements of the values array with the val value
    void fill(T val) {
        for (auto &item: values )
            item = val;
    }
    int get_size() const {
        return size;
    }
    // overloaded subscript operator for easy use
    T &operator[](int index) {
        return values[index];
    }
};

int main() {

    Array<int, 5> nums;
    std::cout << "The size of nums is: "<< nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is: "<< nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<int, 100> nums2 {1};
    std::cout << "The size of nums2 is: "<< nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings(std::string{"Frank"});
    std::cout << "The size of strings is: "<< strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings[0] = std::string{"Larry"};
    std::cout << strings << std::endl;

    strings.fill(std::string{"X"});
    std::cout << strings << std::endl;


    return 0;
}

