#include "OR.h"
   void OR::do_or(){  
        
        if ((X.read() == 1) || (Y.read() == 1)){
           Z.write(1);
        }else{
            Z.write(0);  
        }

    }

