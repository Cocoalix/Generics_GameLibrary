#ifndef GglPolygonFace_h__
#define GglPolygonFace_h__

#include "Definition.h"
#include "Vector2.h"

/****
 * GglPolygonFace�\����
 * �|���S���Ɩʏ�������
***********************************************************/
struct GglPolygonFace
{
	GglBoolean	useFourPolygon;	// �l�p�|���S���g�p�t���O
	GglBoolean	useTexture;		// �e�N�X�`���g�p�t���O
	int			index[4];		// �g�p����o�[�e�N�X���
	int			materialIndex;	// �ʂɑΉ�����}�e���A���̃C���f�b�N�X���iGglModel.fMax���瓮�I�m�ہj
	GglVector2d	uv;				// uv���W���

}typedef GglPolygonFace;

#endif