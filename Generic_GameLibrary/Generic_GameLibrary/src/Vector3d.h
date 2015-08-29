#ifndef Vector3d_h__
#define Vector3d_h__

#define GglVector3d_Normal3(x, y, z)	GglVector3d_Set(x, y, z)	// �֐��ʖ�(Vector3d.h)

/**
 * GglVector3d���p��
 * �x�N�g����\�����p��
 * typedef�ɂ���Ė@�������\��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector3d
{
	struct
	{
		double x;		// x���W
		double y;		// y���W
		double z;		// z���W
	};

	double array[3];	// �z��([0] = x, [1] = y, [2] = z)

}typedef GglVector3d, GglNormal3d;


#endif