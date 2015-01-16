// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_Couple_HeaderFile
#define _IntSurf_Couple_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif


//! creation d 'un couple de 2 entiers <br>
class IntSurf_Couple  {
public:

  DEFINE_STANDARD_ALLOC

  
      IntSurf_Couple();
  
      IntSurf_Couple(const Standard_Integer Index1,const Standard_Integer Index2);
  //! returns the first element <br>
        Standard_Integer First() const;
  //! returns the Second element <br>
        Standard_Integer Second() const;





protected:





private:



Standard_Integer firstInteger;
Standard_Integer secondInteger;


};


#include <IntSurf_Couple.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif