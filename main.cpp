#include "NON.h"
#include "AND.h"
#include "XNOR.h"
#include "OR.h"
#include "NOR.h"

  int sc_main (int argc , char * argv[]) {


//andf2out X = Y
//orf2out X > Y
//norfout A < B
  //tb tb("TB");
  NON NON0("NON");
  NON NON1("NON");
  NON NON2("NON");
  NON NON3("NON");

  AND AND0("AND");
  AND AND10("AND");
  AND AND11("AND");

  AND AND20("AND");
  AND AND21("AND");
  AND AND22("AND");

  AND AND30("AND");
  AND AND31("AND");
  AND AND32("AND");
  AND AND33("AND");

  XNOR XNOR0("XNOR");
  XNOR XNOR1("XNOR");
  XNOR XNOR2("XNOR");
  XNOR XNOR3("XNOR");

  OR ORf0("OR");
  OR ORf1("OR");
  OR ORf2("OR");

  AND ANDf0("AND");
  AND ANDf1("AND");
  AND ANDf2("AND"); 

  NOR NORf("NOR");

  sc_signal<sc_uint<1> > A0; 
  sc_signal<sc_uint<1> > A1; 
  sc_signal<sc_uint<1> > A2; 
  sc_signal<sc_uint<1> > A3;  

  sc_signal<sc_uint<1> > B0;  
  sc_signal<sc_uint<1> > B1; 
  sc_signal<sc_uint<1> > B2; 
  sc_signal<sc_uint<1> > B3; 
  
  sc_signal<sc_uint<1> > non0out; 
  sc_signal<sc_uint<1> > non1out; 
  sc_signal<sc_uint<1> > non2out; 
  sc_signal<sc_uint<1> > non3out; 

  sc_signal<sc_uint<1> > and0out; 

  sc_signal<sc_uint<1> > and10out; 
  sc_signal<sc_uint<1> > and11out;

  sc_signal<sc_uint<1> > and20out;
  sc_signal<sc_uint<1> > and21out;
  sc_signal<sc_uint<1> > and22out;

  sc_signal<sc_uint<1> > and30out;
  sc_signal<sc_uint<1> > and31out;
  sc_signal<sc_uint<1> > and32out;
  sc_signal<sc_uint<1> > and33out;

  sc_signal<sc_uint<1> > xnor0out; 
  sc_signal<sc_uint<1> > xnor1out; 
  sc_signal<sc_uint<1> > xnor2out; 
  sc_signal<sc_uint<1> > xnor3out; 
  //ORf0.
  sc_signal<sc_uint<1> > orf0out; 
  sc_signal<sc_uint<1> > orf1out; 
  sc_signal<sc_uint<1> > orf2out; 

  sc_signal<sc_uint<1> > andf0out;
  sc_signal<sc_uint<1> > andf1out;
  sc_signal<sc_uint<1> > andf2out;

  sc_signal<sc_uint<1> > norfout;

  
  
  NON0.X(B0);
  NON0.Z(non0out);

  NON1.X(B1);
  NON1.Z(non1out);

  NON2.X(B2);
  NON2.Z(non2out);

  NON3.X(B3);
  NON3.Z(non3out);

  XNOR0.X(B0);
  XNOR0.Y(A0);
  XNOR0.Z(xnor0out);

  XNOR1.X(B1);
  XNOR1.Y(A1);
  XNOR1.Z(xnor1out);

  XNOR2.X(B2);
  XNOR2.Y(A2);
  XNOR2.Y(xnor2out);

  XNOR3.X(B3);
  XNOR3.Y(A3);
  XNOR3.Y(xnor3out);

  AND10.X(xnor1out);
  AND10.Y(non1out);
  AND10.Z(and10out);

  AND11.X(and10out);
  AND11.Y(A1);
  AND11.Z(and11out);


  AND20.X(xnor1out);
  AND20.Y(xnor0out);
  AND20.Z(and20out);

  AND21.X(non2out);
  AND21.Y(and20out);
  AND21.Z(and21out);

  AND22.X(and21out);
  AND22.Y(A2);
  AND22.Z(and22out);


  AND30.X(xnor2out);
  AND30.Y(xnor1out);
  AND30.Z(and30out);

  AND31.X(xnor0out);
  AND31.Y(non3out);
  AND31.Z(and31out);

  AND32.X(and30out);
  AND32.Y(and31out);
  AND32.Z(and32out);

  AND33.X(and32out);
  AND33.Y(A3);
  AND33.Z(and33out);

  AND0.X(non0out);
  AND0.Y(A0);
  AND0.Z(and0out);

  ORf0.X(and0out);
  ORf0.Y(and11out);
  ORf0.Z(orf0out);

  ORf0.X(and22out);
  ORf0.Y(and33out);
  ORf0.Z(orf1out);

  ORf0.X(orf0out);
  ORf0.Y(orf1out);
  ORf0.Z(orf2out);


  ANDf0.X(xnor0out);
  ANDf0.Y(xnor1out);
  ANDf0.Z(andf0out);

  ANDf1.X(xnor2out);
  ANDf1.Y(xnor3out);
  ANDf1.Z(andf1out);

  ANDf1.X(andf0out);
  ANDf1.Y(andf1out);
  ANDf1.Z(andf2out);



  NORf.X(andf2out);
  NORf.Y(orf2out);
  NORf.Z(norfout);



  return 0;
}

