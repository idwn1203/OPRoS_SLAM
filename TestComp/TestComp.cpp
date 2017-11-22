
/*
 *  Generated sources by OPRoS Component Generator (OCG V2.1 [Symbol,Topic])
 *  
 */

#include <OPRoSInclude.h>

#include "TestComp.h"

//
// constructor declaration
//
TestComp::TestComp()
{
	ptrMobileTest = NULL;
	portSetup();
}

//
// constructor declaration (with name)
//
TestComp::TestComp(const std::string &name):Component(name)
{
	ptrMobileTest = NULL;
	portSetup();
}

//
// destructor declaration
//

TestComp::~TestComp() {
}

void TestComp::portSetup() {
	ptrMobileTest=new MobileControllerServiceRequired();
	addPort("MobileTest",ptrMobileTest);




	// export variable setup


}

// Call back Declaration
ReturnType TestComp::onInitialize()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onStart()
{
	// user code here
	return OPROS_SUCCESS;
}
	
ReturnType TestComp::onStop()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onReset()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onError()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onRecover()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onDestroy()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onEvent(Event *evt)
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onExecute()
{
	// user code here
	OPRoS::MobileVelocityData value;
		value.x = 10;
		ptrMobileTest->SetVelocity(value);


	return OPROS_SUCCESS;
}
	
ReturnType TestComp::onUpdated()
{
	// user code here
	return OPROS_SUCCESS;
}

ReturnType TestComp::onPeriodChanged()
{
	// user code here
	return OPROS_SUCCESS;
}







#ifndef MAKE_STATIC_COMPONENT
#ifdef WIN32

extern "C"
{
__declspec(dllexport) Component *getComponent();
__declspec(dllexport) void releaseComponent(Component *pcom);
}

Component *getComponent()
{
	return new TestComp();
}

void releaseComponent(Component *com)
{
	delete com;
}

#else
extern "C"
{
	Component *getComponent();
	void releaseComponent(Component *com);
}
Component *getComponent()
{
	return new TestComp();
}

void releaseComponent(Component *com)
{
	delete com;
}
#endif
#endif

