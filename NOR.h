#include "systemc.h"
SC_MODULE(NOR) {
// Inputs
sc_in<sc_uint<1> > X;
sc_in<sc_uint<1> > Y;
// Outputs
sc_out<sc_uint<1> > Z;
//Process
void do_nor();
SC_CTOR(NOR) {
SC_METHOD(do_nor);
sensitive << X;
}
};