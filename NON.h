
#include "systemc.h"
SC_MODULE(NON) {
// Inputs
sc_in<sc_uint<1> > X;

// Outputs
sc_out<sc_uint<1> > Z;

//Process
void do_non();
SC_CTOR(NON) {
SC_METHOD(do_non);
sensitive << X;
}
};