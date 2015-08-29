#ifndef LinkPriority_h__
#define LinkPriority_h__

/**
 * GglLinkPriority�񋓑�
 * �I�u�W�F�N�g�̕`�揇�Ԃ�\������
 */
enum GglLinkPriority
{
	PrioLinkHead,		// LinkTask��Head��\��	��ɐ擪
	PrioEmergency,		// �ً}��\�� �v���C���[���������������������Ɏg��
	PrioPlayer,			// ��{�I�Ƀv���C���[�I�u�W�F�N�g��\��
	PrioCharactor,		// �v���C���[�ȊO�̃L�����N�^�[�I�u�W�F�N�g
	PrioObject,			// ���ʂ̃I�u�W�F�N�g
	PrioBackground,		// �w�i�ȂǁA�o�b�N�O���E���h�V�X�e���Ȃǂ�
	PrioOther,			// ���̑��̃I�u�W�F�N�g
	PrioLinkTail		// LinkTask��Tail		��ɍŌ�

}typedef GglLinkPriority;

#endif