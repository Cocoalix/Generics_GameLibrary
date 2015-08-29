#ifndef Vector2f_h__
#define Vector2f_h__

/**
 * GglVector2f���p��
 * �x�N�g����\�����p��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector2f
{
	struct
	{
		float x;	// X���W
		float y;	// Y���W
	};

	float array[2];	// �z��([0] = x, [1] = y)

}typedef GglVector2f;

#endif