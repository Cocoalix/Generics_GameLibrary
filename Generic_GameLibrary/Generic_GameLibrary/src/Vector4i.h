#ifndef Vector4i_h__
#define Vector4i_h__

/**
 * GglVector4i���p��
 * �x�N�g����\�����p��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector4i
{
	struct
	{
		int x;		// x���W
		int y;		// y���W
		int z;		// z���W
		int q;		// �N�I�[�^�j�I����
	};

	int array[4];	// �z��([0] = x, [1] = y, [2] = z, [3] = q)

}typedef GglVector4i;

#endif