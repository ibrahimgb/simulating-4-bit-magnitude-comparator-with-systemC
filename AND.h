#include "systemc.h"
SC_MODULE(AND) {
// Inputs
sc_in<sc_uint<1> > X;
sc_in<sc_uint<1> > Y;
// Outputs
sc_out<sc_uint<1> > Z;
//Process
void do_and();
SC_CTOR(AND) {
SC_METHOD(do_and);
sensitive << X;
}
};