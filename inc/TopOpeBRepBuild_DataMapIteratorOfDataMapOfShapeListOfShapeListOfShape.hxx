// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepBuild_ListOfShapeListOfShape;
class TopTools_ShapeMapHasher;
class TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape;
class TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape;



class TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape();
  
  Standard_EXPORT TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape(const TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  TopOpeBRepBuild_ListOfShapeListOfShape& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape_HeaderFile
