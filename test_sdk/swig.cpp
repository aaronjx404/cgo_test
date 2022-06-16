#include "swig.h"
#include <cstdio>

swig::swig()
{
    m_test.clear();
}
swig::~swig()
{
}
void swig::SetVector(int x)
{
    m_test.push_back(x);
    printf("vector:%d\n", m_test[0]);
}
void swig::PrintHello()
{
    printf("hello swig!\n");
}