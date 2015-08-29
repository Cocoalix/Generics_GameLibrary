#ifndef Vector4d_h__
#define Vector4d_h__

/**
 * GglVector4d���p��
 * �x�N�g����\�����p��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector4d
{
	struct
	{
		double x;		// x���W
		double y;		// y���W
		double z;		// z���W
		double q;		// �N�I�[�^�j�I����

	};

	double array[4];	// �z��([0] = x, [1] = y, [2] = z, [3] = q)

}typedef GglVector4d;

#endif