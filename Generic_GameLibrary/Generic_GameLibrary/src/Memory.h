#ifndef GglMemory_h__
#define GglMemory_h__

#include "Definition.h"

/****
 * GglMemory�\����
 * �������Ǘ��̃x�[�X�ƂȂ�\���̂ł���
**********************************************************/
struct GglMemory					// �������Ǘ��\����
{
	struct GglMemory*	next;		// ���̃��������Q��
	struct GglMemory*	prev;		// �O�̃��������Q��

	GglObject			object;		// �������Ǘ��Ƀq���t����I�u�W�F�N�g
	GglSize				memorySize;	// �����o�uobject�v�̃T�C�Y

}typedef GglMemory;

#endif