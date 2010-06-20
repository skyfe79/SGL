#include "SGLObjectList.h"

SGLObjectList::SGLObjectList(void)
{
	clear();
	olist.reserve(1024);
}

SGLObjectList::~SGLObjectList(void)
{
	clear();
}

void SGLObjectList::clear(void)
{
	olist.clear();
}
void SGLObjectList::addObject(const SGLObject& v)
{
	olist.push_back(v);
}
void SGLObjectList::addObject(const SGLObject* obuffer, int count)
{
	olist.reserve(count * 2); //�� ���� ������ �޸� ����
	if(olist.empty()) //�Ʒ� �޸𸮺��簡 �������� �ʵ��� ������ ���ؽ��� �� �� �ִ´�
		olist.push_back(SGLObject());
	memcpy(&olist[0], obuffer, sizeof(SGLObject)*count);
}
SGLObject& SGLObjectList::getLastObject(void)
{
	return olist.back();
}
SGLObject& SGLObjectList::operator[](unsigned int index)
{
	return olist[index];
}
const SGLObject& SGLObjectList::operator[](unsigned int index) const
{
	return olist[index];
}

int SGLObjectList::size(void) const
{
	return olist.size();
}