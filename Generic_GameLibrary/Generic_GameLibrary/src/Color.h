#ifndef GglColor4_h__
#define GglColor4_h__

/**
 * GglColor4���p��
 * �F����32bit�J���[�œZ�߂��Ă���
 */
union GglColor4
{
	struct
	{
		float r;	// Red
		float g;	// Green
		float b;	// Blue
		float a;	// Alpha
	};

	float array[4];	// �z��([0] = red, [1] = green, [2] = blue, [3] = alpha)

}typedef GglColor4;

#endif