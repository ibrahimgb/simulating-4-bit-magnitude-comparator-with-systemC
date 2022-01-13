#include "systemc.h"
SC_MODULE(XNOR) {
// Inputs
sc_in<sc_uint<1> > X;
sc_in<sc_uint<1> > Y;
// Outputs
sc_out<sc_uint<1> > Z;
//Process
void do_xnor();
SC_CTOR(XNOR) {
SC_METHOD(do_xnor);
sensitive << X;
}
};