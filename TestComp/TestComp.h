
#ifndef _TestComp_COMPONENT_H
#define _TestComp_COMPONENT_H
/*
 *  Generated sources by OPRoS Component Generator (OCG V2.0[Symbol])
 *   
 */

#include <OPRoSInclude.h>



#include "MobileControllerServiceRequired.h"


class TestComp: public Component
{
protected:
// service
// method for required
	MobileControllerServiceRequired *ptrMobileTest;

protected:
// data


//event


// method for provider
	

// method for required
	


// symbol value generation
	

public:
	TestComp();
	TestComp(const std::string &compId);
	virtual ~TestComp();
	virtual void portSetup();

protected:
	virtual ReturnType onInitialize();
	virtual ReturnType onStart();
	virtual ReturnType onStop();
	virtual ReturnType onReset();
	virtual ReturnType onError();
	virtual ReturnType onRecover();
	virtual ReturnType onDestroy();

public:
	virtual ReturnType onEvent(Event *evt);
	virtual ReturnType onExecute();
	virtual ReturnType onUpdated();
	virtual ReturnType onPeriodChanged();


};

#endif

