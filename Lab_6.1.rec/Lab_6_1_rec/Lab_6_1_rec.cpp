#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_6.1.rec/lb_6.1.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            
            int r[23];
            create(r,  15, 85, 0);
            Assert::AreEqual(424, Sum(r,  0, 0), 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
           ;
            int r[23];
            create(r, 18, 85, 0);
            Assert::AreEqual(12, Count(r, 0, 0), 0.00001);
        }
    };
}
