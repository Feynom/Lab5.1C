#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1C/Vector3D_Public.h"
#include "../Lab5.1C/Vector3D_Public.cpp"
#include "../Lab5.1C/Vector3D_Private.h"
#include "../Lab5.1C/Vector3D_Private.cpp"
#include "../Lab5.1C/Vector3D.h"
#include "../Lab5.1C/Vector3D.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector3D_Public A(5, 5, 5);
			++A;
			Assert::AreEqual(A.GetX(), 6.);
		}
	};
}
