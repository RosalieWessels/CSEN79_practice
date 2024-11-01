#include <ostream>
#include <iostream>

void addElements(size_t first_pos, size_t second_pos, int array[]) {
    //update 'second' item
    int first_item = array[first_pos];
    int second_item = array[second_pos];
    array[second_pos] = first_item + second_item;

    //delete first item
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = first_pos, i < size; i++) {
        
    }
}


int main() {
    int number_array[20] = {};

}