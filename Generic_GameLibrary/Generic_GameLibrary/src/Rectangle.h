#ifndef GglRectangle_h__
#define GglRectangle_h__

/**
 * GglRectangle�\����
 * ��`��\���\����
 */
union GglRectangle
{
	struct
	{
		int t;		// top		��
		int l;		// left		��
		int b;		// bottom	��
		int r;		// right	�E
	};

	int array[4];	// �z��([0] = top, [1] = left, [2] = bottom, [3] = right)

}typedef GglRectangle;

#endif