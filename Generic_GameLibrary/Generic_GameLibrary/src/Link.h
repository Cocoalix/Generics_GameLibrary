#ifndef Link_h__
#define Link_h__

#include "Definition.h"
#include "LinkPriority.h"
#include "LinkStatus.h"
#include "Hit.h"

/**
 * GglLink�\����
 * ����q����̃^�X�N�V�X�e�����\�z������\���̂ł���Ɠ�����
 * �O���I�u�W�F�N�g��GglObject�ɂ���ĕێ����邱�Ƃ��ł��A
 * �֐��|�C���^���������邱�ƂŊO���I�u�W�F�N�g�̎��s�ƊǗ���
 * �ȒP�ɂ��邱�Ƃ��ł���
 * C����Œ��ۉ������������A�I�u�W�F�N�g�w������ł����X�[�p�[�N���X�ɓ�����\����
 */
struct GglLink
{
	struct GglLink*		next;		// ���̃m�[�h���Q��
	struct GglLink*		prev;		// �O�̃m�[�h���Q��

	GglObject			object;		// �O���I�u�W�F�N�g
	GglString			name;		// �I�u�W�F�N�g�̖��O
	GglLinkStatus		status;		// �I�u�W�F�N�g�̏��
	GglLinkPriority		priority;	// �I�u�W�F�N�g�̕`�揇��
	GglHit				hit;		// �����蔻��@�\

	// Update�֐� ���p�҂͂���Ɏ��s���鏈�����L�q�����֐���n���B �I�[�o�[���C�h�̃C���[�W�B
	void(*Update)(struct GglLink* io_pLink, GglObject io_object);
	
	// Draw�֐� ���p�҂͂���ɕ`�悷�鏈�����L�q�����֐���n���B �������I�[�o�[���C�h�̃C���[�W�B
	void(*Draw)(GglObject io_object);

}typedef GglLink;

#endif