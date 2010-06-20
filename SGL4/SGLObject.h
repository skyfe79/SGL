#ifndef SGLOBJECT_H
#define SGLOBJECT_H

#include "SGLVertexList.h"
#include "SGLPolygonList.h"


//��ü����
void sglBegin(int objectType);
void sglSetTexture(int textureId);
void sglVertices(const SGLVertex* vlist, int count);
void sglVertex3f(float x, float y, float z);
void sglIndexes(const int* vilist, int count);
void sglIndex3i(int v1, int v2, int v3);
void sglIndex4i(int v1, int v2, int v3, int v4);
void sglColor3f(float r, float g, float b); //a = 1.0f
void sglColor4f(float r, float g, float b, float a);
void sglNormal3f(float x, float y, float z);
void sglTexCoord2f(float u, float v);
void sglSwapBuffer(void);
void sglEnd();

class SGLObject
{
public:
	int   objectType; //������Ʈ Ÿ��
	bool  visible; //���̴� ������Ʈ�ΰ�?
	float radius;  //����ü Ŭ������ ���� ����, Ŭ������ ���ؼ� visible �� �����ȴ�.
	int numPolygons;
	int numVertices;
	int numTextures;
	
	//�ε������ǿ�
	bool indexedType;
	SGLPolygonList	plist;
	SGLVertexList	localVertices;
	SGLVertexList	worldVertices;
	SGLVertexList	cameraVertices;

	//�������ǿ�
	SGLVertexPolygonList vplist;


	SGLTextureIdList textureIds;
	SGLPoint3D		worldPos; //������ǥ
public:
	SGLObject(void) : objectType(0), numTextures(0), visible(true), radius(0.0f), numPolygons(0), numVertices(0), indexedType(false)
	{}
	SGLObject(int type) : objectType(type), numTextures(0), visible(true), radius(0.0f), numPolygons(0), numVertices(0), indexedType(false)
	{}
	~SGLObject(void)
	{}
};



#endif
