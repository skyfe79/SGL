#ifndef SGLFACESET_H
#define SGLFACESET_H
/*
 ���� �׷��� �����︸ ��´�.
*/
#include "SGLVertex.h"
#include <vector>
class SGLObject;
class SGLFace
{
public:
	SGLObject* obj;
	int numPoints;
	float depthZ;   //DepthSort �� ���� Z ��
	SGLVertex v[4]; //�� �������� 4���� ���� �ʴ´�. �ﰢ�� �Ǵ� �簢���� �׸��Ƿ�
};

class SGLFaceSet
{
public:
	std::vector<SGLFace> faceset;
public:
	SGLFaceSet(void);
	~SGLFaceSet(void);
	void clear(void);
	void addFace(const SGLFace& f);
	SGLFace& operator[](unsigned int index);
	const SGLFace& operator[](unsigned int index) const;
	int size(void) const;
};

#endif