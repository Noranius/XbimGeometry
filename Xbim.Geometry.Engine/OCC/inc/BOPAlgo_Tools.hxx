// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPAlgo_Tools_HeaderFile
#define _BOPAlgo_Tools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPCol_IndexedDataMapOfIntegerListOfInteger_HeaderFile
#include <BOPCol_IndexedDataMapOfIntegerListOfInteger.hxx>
#endif
#ifndef _BOPCol_DataMapOfIntegerListOfInteger_HeaderFile
#include <BOPCol_DataMapOfIntegerListOfInteger.hxx>
#endif
#ifndef _BOPCol_BaseAllocator_HeaderFile
#include <BOPCol_BaseAllocator.hxx>
#endif
#ifndef _BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock_HeaderFile
#include <BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock.hxx>
#endif
#ifndef _BOPDS_DataMapOfIntegerListOfPaveBlock_HeaderFile
#include <BOPDS_DataMapOfIntegerListOfPaveBlock.hxx>
#endif
#ifndef _BOPDS_PDS_HeaderFile
#include <BOPDS_PDS.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_BOPDS_PaveBlock_HeaderFile
#include <Handle_BOPDS_PaveBlock.hxx>
#endif
#ifndef _BOPDS_IndexedDataMapOfPaveBlockListOfInteger_HeaderFile
#include <BOPDS_IndexedDataMapOfPaveBlockListOfInteger.hxx>
#endif
class BOPDS_PaveBlock;



class BOPAlgo_Tools  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void MakeBlocksCnx(const BOPCol_IndexedDataMapOfIntegerListOfInteger& theMILI,BOPCol_DataMapOfIntegerListOfInteger& theMBlocks,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT   static  void MakeBlocks(const BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock& theMILI,BOPDS_DataMapOfIntegerListOfPaveBlock& theMBlocks,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT   static  void PerformCommonBlocks(BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock& theMBlocks,BOPCol_BaseAllocator& theAllocator,BOPDS_PDS& pDS) ;
  
  Standard_EXPORT   static  void FillMap(const Standard_Integer tneN1,const Standard_Integer tneN2,BOPCol_IndexedDataMapOfIntegerListOfInteger& theMILI,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT   static  void FillMap(const Handle(BOPDS_PaveBlock)& tnePB1,const Handle(BOPDS_PaveBlock)& tnePB2,BOPDS_IndexedDataMapOfPaveBlockListOfPaveBlock& theMILI,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT   static  void FillMap(const Handle(BOPDS_PaveBlock)& tnePB1,const Standard_Integer tneF,BOPDS_IndexedDataMapOfPaveBlockListOfInteger& theMILI,BOPCol_BaseAllocator& theAllocator) ;
  
  Standard_EXPORT   static  void PerformCommonBlocks(const BOPDS_IndexedDataMapOfPaveBlockListOfInteger& theMBlocks,BOPCol_BaseAllocator& theAllocator,BOPDS_PDS& pDS) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif