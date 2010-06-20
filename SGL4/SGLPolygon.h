#ifndef SGLPOLYGON_H
#define SGLPOLYGON_H
#include "SGLVertexList.h"
#include "SGLVertexIndexList.h"
#include "SGLVector3D.h"
#include "SGLVertex.h"
#include "SGLColor.h"
//�ε����� ������
class SGLPolygon
{
public:
	bool visible;	//���̴� ���ΰ�?
	bool clipped;	//Ŭ���� �Ǿ��°�?
	int numVertex;
	SGLColor intencity;
	SGLVertexIndexList indexList;	
	//SGL
	SGLVector3D normal; //��������
	//int textureId; //�ؽ��縮��Ʈ�� �ε���
public:
	SGLPolygon(void) : visible(true), clipped(false), numVertex(0)
	{}
	~SGLPolygon(void)
	{}
	SGLPolygon(int v1, int v2, int v3);
	SGLPolygon(int v1, int v2, int v3, int v4);
};

//������ ������
class SGLVertexPolygon
{
public:
	bool visible;	//���̴� ���ΰ�?
	bool clipped;	//Ŭ���� �Ǿ��°�?
	int numVertex;
	SGLColor intencity;
	SGLVertexList	localVertices;
	SGLVertexList	worldVertices;
	SGLVertexList	cameraVertices;
	//SGL
	SGLVector3D normal; //��������
	//int textureId; //�ؽ��縮��Ʈ�� �ε���
public:
	SGLVertexPolygon(void) : visible(true), clipped(false), numVertex(0)
	{}
	~SGLVertexPolygon(void)
	{}
	SGLVertexPolygon(const SGLVertex& v1, const SGLVertex& v2, const SGLVertex& v3);
	SGLVertexPolygon(const SGLVertex& v1, const SGLVertex& v2, const SGLVertex& v3, const SGLVertex& v4);
};
#endif