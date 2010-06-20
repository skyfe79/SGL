#ifndef SGLVERTEX_H
#define SGLVERTEX_H

#include "SGLPoint3D.h"
#include "SGLVector3D.h"
#include "SGLColor.h"
class SGLVertex
{
public:
	SGLPoint3D pos;		//��ġ
	float u, v;			//�ؽ�����ǥ
	SGLVector3D normal; //���彦�̵��� ��, ������ ����
	SGLColor color;		//������ ����
public:
	SGLVertex(void);
	SGLVertex(float x, float y, float z, const SGLColor& c = SGLColor(0, 0, 0), SGLVector3D& nv = SGLVector3D(), float u=0.0f, float v=0.0f);
	SGLVertex(float x, float y, float z, float u, float v);
	SGLVertex(const SGLPoint3D& pt, const SGLColor& c = SGLColor(0, 0, 0), SGLVector3D& nv = SGLVector3D(), float u=0.0f, float v=0.0f);
	SGLVertex(const SGLVertex& v);
	~SGLVertex(void);

	void setTexCoord(float u, float v);
	void setColor(const SGLColor& c);
	void setNormal(const SGLVector3D& nv);
};

#endif
