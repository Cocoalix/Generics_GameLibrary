#ifndef Vector2i_h__
#define Vector2i_h__

/****
 * GglVector2i���p��
 * �x�N�g����\�����p��
 * �z��Ƃ��Ă�������悤�ɋ��p�̂��g�p
 */
union GglVector2i
{
	struct
	{
		int x;		// X���W
		int y;		// Y���W
	};

	int array[2];	// �z��([0] = x, [1] = y)

}typedef GglVector2i;

#endif