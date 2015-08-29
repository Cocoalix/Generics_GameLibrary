#ifndef GglImage_h__
#define GglImage_h__

#include "Definition.h"
#include "Vector2.h"
#include "Color.h"

/**
 * GglImage�\����
 * png�摜��RAW�ȂǁA�C���[�W��������
 */
struct GglImage
{
	// �s�N�Z�����̐F���
	GglUByte*			rows;		// �摜���

	// �摜�̑傫��
	union
	{
		GglVector2i		size;
		unsigned int	array[2];
	};

	// �`�����l����(�O���[�X�P�[���ARGB�ARGBA�Aetc...
	char				depth;		// �F�[�x
	char				colorType;	// �摜�̃J���[�^�C�v(�O���[�X�P�[���A�p���b�g�Aetc...
	char				channles;	// �J���[�`�����l��

	// �p���b�g�摜�̏ꍇ�A�p���b�g���A�o�b�N�O���E���h�J���[�A�p���b�g��������
	size_t				maxPalette;			// �p���b�g�̍ő吔
	GglColor4*			palette;			// �p���b�g�̓��e
	GglColor4			backgroundColor;	// �p���b�g�̃o�b�N�O���E���h�J���[

	// OpenGL�ɓo�^���ꂽ�e�N�X�`��ID
	int					id;

}typedef GglImage;

#endif