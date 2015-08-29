#ifndef GglHit_h__
#define GglHit_h__

#include "Definition.h"
#include "Vector3f.h"
#include "Rectangle.h"

/**
 * GglHit�\����
 * �����蔻��ɕK�v�ȕϐ��A�֐��|�C���^������
 */
struct GglHit
{
	GglBoolean		useHit;									// �����蔻����g�p���邩�ǂ������t���O�Ƃ��Ĉ���
	GglBoolean		useSphere;								// �~�`�A���`�����蔻����g�p���邩�ǂ������t���O�Ƃ��Ĉ���

	GglVector3f*	hitPosition;							// �C���X�^���X�̃|�W�V����
	float			hitRadius;								// �����蔻��̔��a�i�����蔻��͂��ׂĉ~�`�ōs���j
	GglRectangle	hitRect;								// �����蔻��̋�`

	GglObject*		(*HitEventArray)(GglObject, GglObject);	// �����蔻�莞�ɌĂ΂��֐��A���C
	int				HitEventFuncCount;						// �����蔻�莞�ɌĂ΂��֐��A���C�̃A���C�ő吔

}typedef GglHit;

#endif