#include "XNOR.h"
   void XNOR::do_xnor(){  
        
        if (((X.read() == 0) && (Y.read() == 0))||((X.read() == 1) && (Y.read() == 1))){
           Z.write(1);
        }else{
            Z.write(0);  
        }

    }

