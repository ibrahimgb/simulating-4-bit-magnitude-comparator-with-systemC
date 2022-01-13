#include "NOR.h"
   void NOR::do_nor(){  
        
        if ((X.read() == 0) && (Y.read() == 0)){
           Z.write(1);
        }else{
            Z.write(0);  
        }

    }


