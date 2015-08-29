#ifndef Vector2d_h__
#define Vector2d_h__

/**
 * GglVector2d���p��
 * �x�N�g����\�����p��
 * �z����g����悤�ɂ��邽�߂ɋ��p�̂��g�p
 */
union GglVector2d
{
	struct
	{
		double x;			// X���W
		double y;			// Y���W
	};

	double array[2];		// �z��([0] = x, [1] = y)

}typedef GglVector2d;

#endif