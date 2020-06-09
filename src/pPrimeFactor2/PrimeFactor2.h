/************************************************************/
/*    NAME:                                               */
/*    ORGN: MIT                                             */
/*    FILE: PrimeFactor2.h                                          */
/*    DATE:                                                 */
/************************************************************/

#ifndef PrimeFactor2_HEADER
#define PrimeFactor2_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class PrimeFactor2 : public CMOOSApp
{
 public:
   PrimeFactor2();
   ~PrimeFactor2();

 protected: // Standard MOOSApp functions to overload  
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

 protected:
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
};

#endif 
