#ifndef Vector3i_h__
#define Vector3i_h__

/**
 * GglVector3i���p��
 * �x�N�g����\�����p��
 * typedef�ɂ���Ė@�������\��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector3i
{
	struct
	{
		int x;		// x���W
		int y;		// y���W
		int z;		// z���W
	};

	int array[3];	// �z��([0] = x, [1] = y, [2] = z)

}typedef GglVector3i, GglNormal3i;

#endif