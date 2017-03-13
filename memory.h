#include <iostream>
#include <fstream>
using namespace std;
extern unsigned int PC_ini;
extern unsigned int *ins_mem;
extern unsigned int num_of_ins;
extern unsigned int *data_mem;
extern unsigned int num_of_data;

void load_instruction(ifstream*);
void load_data(ifstream*);
unsigned int read_4_byte_int(ifstream*);
unsigned int read_byte_int(ifstream*);
