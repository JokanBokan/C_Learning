/*
    Hello everyone, 
    as we all know strings in C are very questionable and unsafe,
    so this code under is a basic implementation of strings in C with some example functions,
    this idea was not mine so here are the credits to the people that i saw this from:
        - Magicalbat: https://www.youtube.com/@Magicalbat
        - Tsoding: https://www.youtube.com/@Tsoding
   
    I wrote this code with all these comments for the people that dont really know C that much and want to learn it,
    if you have any questions at all please feel free to ask.
    And of course huge thanks to the guys above who made a detailed video about this, they are cool, you should definately check them out.

    - jokan 30.07.2026 01:44
*/

#include <ctype.h>    // for isspace() function 
#include <stdio.h>    // for printf()
#include <stdint.h>   // for integers with provided size (int8_t, int16_t, ...) 
#include <string.h>   // for the strlen() function 
#include <stdbool.h>  // for the bool data type (true, false)

// This part under is usage of 'typedef' keyword whose syntax goes like this: typedef [type_name] [alias].
// It is basically used to give an alias (alternative name) to a type.
// I like to put these aliases to integers when including 'stdint.h' because "Rust" programming languauge uses these and im used to them.
// You can put any alias you feel comfortable with, its really not important.
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef float    f32;
typedef double   f64;

typedef struct {  // Making a struct with the typedef keyword so we dont need to write keyword 'struct' infront of every struct declaration
    char* data;   // pointer to the first letter of our string ("Hello, world!" -> 'H')
    i32 size;     // total size of our string ("Hello, world!" -> 13)
} string;         // name of the data type 

// This is a macro function and it can be only used in printf() and fprintf().
// And also if you have a pointer to a string then this wont work and you'll have to write all these manually using the dereferencing arrow (->).
// There is both examples in the main() function.
#define STRING_FORMAT(s) (int)s.size, (char*)s.data

// Some example functions just so you can understand how these strings work:
string str(const char* buf);     // function that converts a C string(char*) to our string
void str_trim_left(string* s);   // cuts all the spaces from the string on the left side   (EXAMPLE: "      Hey" -> "Hey")
void str_trim_right(string* s);  // cuts all the spaces from the string on the right side  (EXAMPLE: "Hey      " -> "Hey")
void str_trim(string* s);        // these two functions above called in one 

// Now i will write some functions under that i would like to see you implement as a practice:
void str_cut_left(string* s, i32 n);      // removes n number of letters from the left side  (little hint: this one is already somewhere in this code)
void str_cut_right(string* s, i32 n);     // removes n number of letters from the right side (little hint: this one is already somewhere in this code)
bool str_compare(string* s1, string* s2); // compares two strings, returns true if they are the same, false if not
i32 str_find_char(string* s, char c);     // returns the index of the char provided in the 2nd argument, should return -1 if the char is not found
bool str_char_exists(string*s, char c);   // basically the same as the function above, just returns true if the char is found and false if its not

int main() {
    string a = str("    Hello world    ");                        // example usage of str() function
    str_trim(&a);                                                 // example usage of str_trim() function
    printf("%.*s\n", STRING_FORMAT(a));                           // example usage of STRING_FORMAT() macro function 
    string* pointer_a = &a;                                       // here i will show one example with a string pointer
    printf("%.*s\n",(int)pointer_a->size,(char*)pointer_a->data); // here, STRING_FORMAT(pointer_a) wouldn't work and it has to be done like this
    return 0;
}

string str(const char* buf) {
    return (string) {
        .data = (char*)buf,
        .size = strlen(buf)
    };
}

void str_trim_left(string* s) {
    while(s->size > 0 && isspace(s->data[0])) {
        s->data++;
        s->size--;
    }
}

void str_trim_right(string* s) {
    while(s->size > 0 && isspace(s->data[s->size - 1])) {
        s->size--;
    }
}

void str_trim(string* s) {
    str_trim_left(s);
    str_trim_right(s);
}

void str_cut_left(string* s, i32 n) {       // example call: str_cut_left(&str, 2);
    // your implementation 
} 

void str_cut_right(string* s, i32 n) {      // example call: str_cut_right(&str, 2);
    // your implementation 
}

bool str_compare(string* s1, string* s2) {  // example call: str_compare(&str_1, &str_2);
    // your implementation 
    return true;
} 

i32 str_find_char(string* s, char c) {      // example call: str_find_char(&str, 'a');
    // your implementation 
    return -1;
} 

bool str_char_exists(string*s, char c) {    // example call: str_char_exists(&str, 'a');
    // your implementation 
    return false;
}
