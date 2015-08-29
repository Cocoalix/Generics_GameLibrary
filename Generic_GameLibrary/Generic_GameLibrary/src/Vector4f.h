#ifndef Vector4f_h__
#define Vector4f_h__

/**
 * GglVector4f���p��
 * �x�N�g����\�����p��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector4f
{
	struct
	{
		float x;	// x���W
		float y;	// y���W
		float z;	// z���W
		float q;	// �N�I�[�^�j�I����
	};

	float array[4];	// �z��([0] = x, [1] = y, [2] = z, [3] = q)

}typedef GglVector4f;

#endif