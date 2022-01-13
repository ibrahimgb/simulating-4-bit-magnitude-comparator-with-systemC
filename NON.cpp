#include "NON.h"
   void NON::do_non(){  
        if (X.read() == 1){
           Z.write(0);
        }else{
            Z.write(1);  
        }

    }

   