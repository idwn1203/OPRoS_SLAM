

#ifndef __REQUIRED_PORT_H
#define __REQUIRED_PORT_H

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
		



/*
 * 
 *  : public RequiredServicePort
 *
 */
class Required
   :public RequiredServicePort
{
protected:

	typedef RequiredMethod<null> nullFuncType;
	nullFuncType *nullFunc;

public:
	//
	// Constructor
	//
	Required()
	{
            nullFunc = NULL;
            
	   setup();
	}

	// method implementation for required method
	(,,,,,)
	{
            opros_assert(nullFunc != NULL);
	
            return (*Func)(,,,,,);
		
	}

	

    // generated setup function
    virtual void setup()
    {
        Method *ptr_method;
    
        ptr_method = makeRequiredMethod(&Required::null,"null");
        opros_assert(ptr_method != NULL);
        addMethod("null",ptr_method);
        nullFunc = reinterpret_cast<nullFuncType *>(ptr_method);
        ptr_method = NULL;

    
    }
};
#endif
