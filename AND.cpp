#include "AND.h"
   void AND::do_and(){  
        
        if ((X.read() == 1) && (Y.read() == 1)){
           Z.write(1);
        }else{
            Z.write(0);  
        }

    }


