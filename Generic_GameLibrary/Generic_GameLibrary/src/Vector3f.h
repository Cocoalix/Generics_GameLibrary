#ifndef Vector3f_h__
#define Vector3f_h__

#define GglVector3f_Normal3(x, y, z)	GglVector3f_Set(x, y, z)	// �֐��ʖ�(GglVector3f.h)

/**
 * GglVector3f���p��
 * �x�N�g����\�����p��
 * typedef�ɂ���Ė@�������\��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector3f
{
	struct
	{
		float x;	// x���W
		float y;	// y���W
		float z;	// z���W
	};

	float array[3];	// �z��([0] = x, [1] = y, [2] = z)

}typedef GglVector3f, GglNormal3f;

#endif