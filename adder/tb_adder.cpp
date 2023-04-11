#include <stdlib.h>
#include <iostream>
#include <verilated.h>
 #include "verilated_vcd_c.h"
#include "obj_dir/Vadder.h"

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    unsigned int a = 0, b = 0, cin = 0;
    Verilated::commandArgs(argc, argv);
    Vadder *adder;
    adder = new Vadder("top");
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    adder->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    while(sim_time<MAX_TIME){
        adder->a = a;
        adder->b = b;
        adder->cin = cin;
        adder->eval();
        m_trace->dump(sim_time);
        a += 1;
        if (a % 2 == 0) b += 1;
        if (a % 4 == 0) cin += 1;
        sim_time++;
    };
    m_trace->close();
    delete adder;
    exit(EXIT_SUCCESS);
}