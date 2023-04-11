#include <stdlib.h>
#include <iostream>
#include <verilated.h>
 #include "verilated_vcd_c.h"
#include "obj_dir/Vseven.h"

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    unsigned int a = 0, b = 0, cin = 0;
    unsigned int SW = 0, CLK = 0;
    Verilated::commandArgs(argc, argv);
    Vseven *seven;
    seven = new Vseven("top");
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    seven->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
    while(sim_time<MAX_TIME){
        seven->SW = SW;
        seven->CLK = CLK;
        seven->eval();
        m_trace->dump(sim_time);
        SW += 1;
        CLK = ~CLK;
        sim_time++;
    };
    m_trace->close();
    delete seven;
    exit(EXIT_SUCCESS);
}