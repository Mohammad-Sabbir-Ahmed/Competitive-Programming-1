#include <forward_list>
#include <iostream>
 
int main()
{
    std::list<char> letters {'o', 'm', 'g', 'w', 't', 'f'};
 
    if (!letters.empty()) {
        std::cout << "The first character is: " << letters.front() << '\n';
    }

    forward_list<int> numbers;
    cout << "Initially, numbers.empty(): " << numbers.empty() << '\n';
 
    numbers.push_front(42);
    numbers.push_front(13317); 
    cout << "After adding elements, numbers.empty(): " << numbers.empty() << '\n';

    Output:
    Initially, numbers.empty(): 1
    After adding elements, numbers.empty(): 0
}