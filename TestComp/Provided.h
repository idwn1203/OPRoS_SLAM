

#ifndef __PROVIDED_PORT_H
#define __PROVIDED_PORT_H

#include <OPRoSTypes.h>
#include <InputDataPort.h>
#include <OutputDataPort.h>
#include <InputEventPort.h>
#include <OutputEventPort.h>
#include <ProvidedServicePort.h>
#include <RequiredServicePort.h>
#include <ProvidedMethod.h>
#include <RequiredMethod.h>
#include <device/ApiTypes.h>


#include "null.h"
		
#include "null.h"
		
#include "null.h"
		
#include "null.h"
		
#include "null.h"
		
#include "null.h"
		

#ifndef _I_CLASS_DEF
#define _I_CLASS_DEF
/*
 * I
 *
 *  The comonent inherits this class and implements methods. 
 */
class I
{
 public:
    virtual (,,,,,)=0;
 };
#endif

/*
 * 
 *  : public ProvidedServicePort
 *
 */
class Provided
	:public ProvidedServicePort, public I
{
protected:
    I *pcom;


   typedef ProvidedMethod<null> nullFuncType;
   nullFuncType *nullFunc;


public: // default method
   virtual (,,,,,)
   {
		opros_assert(nullFunc != NULL);
		
            return (*Func)(,,,,,);
		
   }


public:
    //
    // Constructor
    //
    Provided(I *fn)
    {
        pcom = fn;

        nullFunc = NULL;
        

        setup();
    }

    // generated setup function
    virtual void setup()
    {
        Method *ptr_method;
    
        ptr_method = makeProvidedMethod(&I::null,pcom,"null");

        opros_assert(ptr_method != NULL);
        addMethod("null",ptr_method);
        nullFunc = reinterpret_cast<nullFuncType *>(ptr_method);
        ptr_method = NULL;

    
    }
};
#endif
