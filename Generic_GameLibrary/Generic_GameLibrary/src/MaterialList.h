#ifndef GglMaterialList_h__
#define GglMaterialList_h__

#include "Color.h"
#include "Definition.h"

/****
 * GglMaterialList�\����
 * ��L�̃}�e���A���f�[�^���Ǘ�����\����
**********************************************************/
struct GglMaterialList			// 3D���f���p�}�e���A�����X�g
{
	GglColor4	colorType;		// �g�U���A���邢�͊���
	int			lightPower;		// ���ʌ��̎w��
	GglColor4	specularColor;	// ���ʌ�
	GglColor4	emissionColor;	// ���ˋP�x

	GglString	textureName;	// �e�N�X�`���摜��

}typedef GglMaterialList;

#endif