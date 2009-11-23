#ifndef MYCLASS_H
#define MYCLASS_H

#include <TObject.h>

class MyClass: public TObject
{
 public:
	MyClass();
	MyClass(Int_t* array);
	~MyClass();
	void SetArray(Int_t* array);

#if MYCLASS == 1
	// old
	Int_t* GetArray() {return farray;}
private:
   // old
	Int_t farray[5];
	ClassDef(MyClass,1)

#elif MYCLASS == 2
	// new
   Int_t* GetArray() {return farrayPointer;}
private:
	//new 
	Int_t fentries;
	Int_t* farrayPointer; //[fentries]
	ClassDef(MyClass,2)
#endif
};
#endif
