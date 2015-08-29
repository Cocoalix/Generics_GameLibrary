#ifndef InputDevice_h__
#define InputDevice_h__

#include "Definition.h"

/**
 * GglInputDevice�\����
 * glutKeyboardFunc�ȂǂŎ擾�����L�[�{�[�h����
 * �}�E�X�̃{�^�����Ȃǂ��擾���܂�
 */
struct GglInputDevice
{
	GglByte	keyState[256];	// �L�[�{�[�h�̓��͏���ێ����܂�
	int		mouseButton;	// �}�E�X�̓��͏���ێ����܂�
	int		mouseState;		// �}�E�X�̃{�^���̏�Ԃ�ێ����܂�
	int		mouseX;			// ���ꂼ��̑��쎞�̃}�E�X��X���W��ێ����܂�
	int		mouseY;			// ���ꂼ��̑��쎞�̃}�E�X��Y���W��ێ����܂�

}typedef GglInputDevice;

void GglInputDevice_GetKeyboardState(void);
void GglInputDevice_Mouse(int in_button, int in_state, int in_x, int in_y);

#endif