#include <Windows.h>
#include <iostream>

extern "C" int my_add();


int main() {
   
    BYTE byte_array[] = { 0x12, 0x34, 0x56, 0x78 };
    
    printf("%X", *(int*)byte_array);

    return 0;
}