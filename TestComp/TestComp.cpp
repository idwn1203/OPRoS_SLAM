
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
	ptrLaserTest = NULL;

/*	ptrLaserScannerService = NULL;*/


	portSetup();
}

//
// constructor declaration (with name)
//
TestComp::TestComp(const std::string &name) :Component(name)
{
	ptrLaserTest = NULL;

/*	ptrLaserScannerService = NULL;*/


	portSetup();
}

//
// destructor declaration
//

TestComp::~TestComp() {
}

void TestComp::portSetup() {
	ptrLaserTest=new LaserScannerServiceRequired();
	addPort("LaserTest",ptrLaserTest);

/*	ptrLaserScannerService=new LaserScannerServiceRequired();*/
/*	addPort("LaserScannerService",ptrLaserScannerService);*/


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



	//Scanner Test Start
	std::vector<OPRoS::Float64Array> vval;
	OPRoS::Float64Array fval;

	vval = ptrLaserTestService->GetSensorValue();

	std::cout << "TEST04" << std::endl;
	std::cout << "LASERSCANNERTESTCOMP ONEXECUTE TEST02" << std::endl;
	std::cout << "TEST05" << std::endl;
	std::cout<<"val="<<vval.size()<<std::endl;
	std::cout << "TEST06" << std::endl;

	fval = vval[0].data;
	std::cout << "Test 01 vval="<< fval.data.size() << std::endl;
	std::vector<int>::size_type sz = fval.data.size();
	for (unsigned i = 0; i < sz; i++)
		std::cout << ' ' << fval.data[i];
	std::cout << '\n';
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

