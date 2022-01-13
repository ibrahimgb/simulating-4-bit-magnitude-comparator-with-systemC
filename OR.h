#include "systemc.h"
SC_MODULE(OR) {
// Inputs
sc_in<sc_uint<1> > X;
sc_in<sc_uint<1> > Y;
// Outputs
sc_out<sc_uint<1> > Z;
//Process
void do_or();
SC_CTOR(OR) {
SC_METHOD(do_or);
sensitive << X;
}
};