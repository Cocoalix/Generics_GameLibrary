#ifndef GglFps_h__
#define GglFps_h__

#include "Definition.h"

/**
 * GglFps�\����
 * ��ʍX�V���ԏ����܂Ƃ߂Ă���
 */
struct GglFps
{
	GglClock	countMode;			// �P�b�Ԃɉ��x�X�V���邩��ۑ�����
	GglClock	leaveTime;			// �O��̍X�V�̎��Ԃ�ۑ�����
	GglClock	secondTime;			// �P�b�O�̍X�V�̎��Ԃ�ۑ�����
	int			nowCount	: 8;	// �P�b�Ԃɉ��xFps���X�V���������J�E���g����
	int			secondCount	: 8;	// �O��̂P�b�Ԃɂǂꂭ�炢�X�V���ꂽ����ۑ�����

}typedef GglFps;

#endif