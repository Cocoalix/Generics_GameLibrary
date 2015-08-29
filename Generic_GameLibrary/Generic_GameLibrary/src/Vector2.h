#ifndef Vector2_h__
#define Vector2_h__

#include "Vector2d.h"
#include "Vector2f.h"
#include "Vector2i.h"

// ������
#define GglVector2_Set(_tgt, _x, _y)				((_tgt).x=(_x));((_tgt).y=(_y))
#define GglVector2_SetInitialize(_out)				GglVector2_Set(_out, 0.0, 0.0)
#define GglVector2_SetEqual(_x, _y)					{(_x), (_y)}
#define GglVector2_SetInitializeEqual()				GglVector2_SetEqual(0.0, 0.0)

// ���Z
#define GglVector2_Add(_out, _a, _b)				GglVector2_Set(_out, (_a).x+(_b).x, (_a).y+(_b).y)
#define GglVector2_AddEqual(_a, _b)					GglVector2_SetEqual((_a).x+(_b).x, (_a).y+(_b).y)

// ���Z
#define GglVector2_Sub(_out, _a, _b)				GglVector2_Set(_out, (_a).x-(_b).x, (_a).y-(_b).y)
#define GglVector2_SubEqual(_a, _b)					GglVector2_SetEqual((_a).x-(_b).x, (_a).y-(_b).y)

// ����
#define GglVector2_Dot(_a, _b)						(((_a).x*(_b).x)+((_a).y*(_b).y))

// �O��
#define GglVector2_Cross(_a, _b)					((_a.x*_b.y)-(_a.y*_b.x))

// ���Z


// �x�N�g���X�J���[�{
#define GglVector2_MulScalar(_vec, _out, _scl)		((_out).x)=((_vec).x)*(_scl); ((_out).y)=((_vec).y)*(_scl)

// ���K��
#define GglVector2_Normalize(_src, _out)			{double s = sqrt(GGL_POW2((_src).x)+GGL_POW2((_src).y)); (_out).x=(_src).x/s; (_out).y=(_src).y/s;}

// �x�N�g�������擾
#define GglVector2_GetLength(_vec)					(sqrt(GGL_POW2((_vec).x)+GGL_POW2((_vec).y)))




#endif