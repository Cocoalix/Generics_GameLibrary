#include <stdlib.h>
#include "Generic_GameLibrary.h"

///*****************************************
// * GglGraphic2d_DrawSprite�֐�
// * 2D�|���S���y�уe�N�X�`����`�悵�܂�
// *
// * �߂�l�F�Ȃ�
// * �����F
// * 1.GglImage*		in_pImage	//�C���[�W�{��
// * 2.GglRectangle*		in_pRect	//�`��͈�
// * 3.GglVector3f*	in_pVec		//�`��ʒu
// * 4.GglColor4*	in_pColor	//�`��F
//*/
//void GglGraphic2d_DrawSprite(GglImage* in_pImage, GglRectangle* in_pRect, GglVector3f* in_pVec, GglColor4* in_pColor)
//{
//	//GglGraphic_Ortho2d();
//	
//	GglGraphic_DrawSpriteBegin();
//
//	glEnable(GL_ALPHA_TEST);
//	glEnable(GL_BLEND);
//
//	glEnable(GL_TEXTURE_2D);
//	glBegin(GL_QUADS);
//
//		glTexCoord2d(in_pRect->l / in_pImage->width, in_pRect->t / in_pImage->height);
//		glVertex2d(in_pVec->x,									in_pVec->y);
//
//		glTexCoord2d(in_pRect->r / in_pImage->width, in_pRect->t / in_pImage->height);
//		glVertex2d(in_pVec->x + (in_pRect->r - in_pRect->l),	in_pVec->y);
//
//		glTexCoord2d(in_pRect->r / in_pImage->width, in_pRect->b / in_pImage->height);
//		glVertex2d(in_pVec->x + (in_pRect->r - in_pRect->l),	in_pVec->y + (in_pRect->b - in_pRect->t));
//
//		glTexCoord2d(in_pRect->l / in_pImage->width, in_pRect->b / in_pImage->height);
//		glVertex2d(in_pVec->x,									in_pVec->y + (in_pRect->b - in_pRect->t));
//		
//
//	glEnd();
//	
//	GglGraphic_DrawSpriteEnd();
//
//}
//
//

/**
* GglGraphic2d_DrawSpriteFull�֐�
* 2D�|���S���ɕ`�悷��ہA�e�N�X�`���f�[�^�̂��ׂĂ�`�悵�܂�
*
* @param in_pImage	type: GglImage*		�C���[�W�{��
* @param in_pVec	type: GglVector3f*	�`��ʒu
* @param in_pSize	type: GglVector2i*	�|���S���T�C�Y
* @param in_pColor	type: GglColor4*	�`��F(�e�N�X�`���J���[�ɏd�˂܂�)
*/
void GglGraphic2d_DrawSprite(GglImage* in_pImage, GglVector3f* in_pVec, GglVector2i* in_pSize, GglColor4* in_pColor)
{
	// NULL�`�F�b�N
	if (in_pImage == NULL || in_pVec == NULL || in_pSize == NULL)
	{
		#ifdef _DEBUG	
		GglDebug_PrintExceptionLine();
		#endif
		return;
	}
	/*
	 glEnable(GL_BLEND);
 glEnable( GL_TEXTURE_2D );
 glBindTexture( GL_TEXTURE_2D, texture );
 glAlphaFunc(GL_GREATER, alpha);
 glEnable(GL_ALPHA_TEST);//�A���t�@�e�X�g�J�n
 glBegin(GL_POLYGON);
 glTexCoord2f(0.0f, 1.0f); glVertex2d(10 , 230);//����
 glTexCoord2f(0.0f, 0.0f); glVertex2d(10 ,  10);//����
 glTexCoord2f(1.0f, 0.0f); glVertex2d( 310 ,  10);//�E��
 glTexCoord2f(1.0f, 1.0f); glVertex2d( 310 , 230);//�E��
 glEnd();
 glDisable(GL_ALPHA_TEST);//�A���t�@�e�X�g�I��
 glDisable( GL_TEXTURE_2D );
 glDisable(GL_BLEND);
	*/
	GglGraphic_DrawSpriteBegin();						// �`��J�n

	glEnable(GL_BLEND);									// �A���t�@�u�����h��L��
	glBindTexture(GL_TEXTURE_2D, in_pImage->id);			// �`�悷��e�N�X�`����ݒ�
	glEnable(GL_TEXTURE_2D);
	glAlphaFunc(GL_ALWAYS, 0.5);						// �A���t�@�e�X�g�ݒ�

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	// �A���t�@�u�����h�ݒ�
	glEnable(GL_ALPHA_TEST);							// �A���t�@�e�X�g��L��

//	glPushMatrix();
//	glLoadIdentity();
//	gluPerspective(GglGraphic_PERS_FOVY, (double)GglGraphic_PERS_WIDTH / GglGraphic_PERS_HEIGHT, GglGraphic_PERS_ZNEAR, GglGraphic_PERS_ZFAR);
//	gluLookAt(0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

	glBegin(GL_QUADS);

	glTexCoord2d(0.0, 0.0);		glVertex2d(in_pVec->x,					in_pVec->y);
	glTexCoord2d(1.0, 0.0);		glVertex2d(in_pVec->x + in_pSize->x,	in_pVec->y);
	glTexCoord2d(1.0, 1.0);		glVertex2d(in_pVec->x + in_pSize->x,	in_pVec->y + in_pSize->y);
	glTexCoord2d(0.0, 1.0);		glVertex2d(in_pVec->x,					in_pVec->y + in_pSize->y);

	glEnd();

//	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);

	GglGraphic_DrawSpriteEnd();

	return;
}

/*****************************************
 * GglGraphic2d_DrawSpriteScraps�֐�
 * 2D�|���S���y�уe�N�X�`����`�悵�܂�
 *
 * �߂�l�F�Ȃ�
 * �����F
 * 1.GglImage*		in_pImage	//�C���[�W�{��
 * 2.GglRectangle*		in_pRect	//�`��͈�
 * 3.GglVector3f*	in_pVec		//�`��ʒu
 * 4.GglColor4*	in_pColor	//�`��F
*/
void GglGraphic2d_DrawSpriteScraps(GglImage* in_pImage, GglVector2i* in_pSize, GglRectangle* in_pRect, GglVector3f* in_pVec, GglColor4* in_pColor)
{
	GglGraphic_DrawSpriteBegin();

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	// �A���t�@�u�����h�ݒ�
	//glAlphaFunc(GL_ALWAYS, 0.5);						// �A���t�@�e�X�g�ݒ�
	glEnable(GL_ALPHA_TEST);							// �A���t�@�e�X�g��L��
	glEnable(GL_BLEND);									// �A���t�@�u�����h��L��

	glEnable(GL_TEXTURE_2D);
	glPushMatrix();
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, in_pImage->id);
	gluPerspective(GglGraphic_PERS_FOVY, (double)GglGraphic_PERS_WIDTH / GglGraphic_PERS_HEIGHT, GglGraphic_PERS_ZNEAR, GglGraphic_PERS_ZFAR);
	gluLookAt(0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glBegin(GL_QUADS);

		//glTexCoord2d(in_pRect->l / in_pImage->size.x, in_pRect->t / in_pImage->size.y);
		//glVertex2d(in_pVec->x,					in_pVec->y);

		//glTexCoord2d(in_pRect->r / in_pImage->size.x, in_pRect->t / in_pImage->size.y);
		//glVertex2d(in_pVec->x + in_pSize->x,	in_pVec->y);

		//glTexCoord2d(in_pRect->r / in_pImage->size.x, in_pRect->b / in_pImage->size.y);
		//glVertex2d(in_pVec->x + in_pSize->x,	in_pVec->y + in_pSize->y);

		//glTexCoord2d(in_pRect->l / in_pImage->size.x, in_pRect->b / in_pImage->size.y);
		//glVertex2d(in_pVec->x,					in_pVec->y + in_pSize->y);

		glTexCoord2d(0.0, 0.0);
		glVertex2d(in_pVec->x, in_pVec->y);

		glTexCoord2d(1.0, 0.0);
		glVertex2d(in_pVec->x + in_pSize->x, in_pVec->y);

		glTexCoord2d(1.0, 1.0);
		glVertex2d(in_pVec->x + in_pSize->x, in_pVec->y + in_pSize->y);

		glTexCoord2d(0.0, 1.0);
		glVertex2d(in_pVec->x, in_pVec->y + in_pSize->y);
		
	glEnd();
	glPopMatrix();
	glDisable(GL_TEXTURE_2D);
	glDisable(GL_BLEND);
	glDisable(GL_ALPHA_TEST);
	
	GglGraphic_DrawSpriteEnd();
}
//
///********************************************************************
// * GglGraphic2d_DrawLine2d�֐�
// * �����̏�������2D������`�悵�܂�
// *
// * �߂�l�F�Ȃ�
// * �����F
// * 1.const GglVector3f* in_pOrigin		// �����̎n�_
// * 2.const GglVector3f* in_pEndPoint	// �����̏I�_
// * 3.const GglColor4*	in_pColor		// �����̐F
//*/
//void GglGraphic2d_DrawLine2d(GglVector3f* in_pOrigin, GglVector3f* in_pEndPoint, GglColor4* in_pColor)
//{
//	GglGraphic_Ortho2d();
//
//	//glPushMatrix();
//	//	GglTranslatef(in_pOrigin);
//	//glPopMatrix();
//
//	GglGraphic2d_Color3dv(in_pColor);
//
//	glBegin(GL_LINE_STRIP);
//		GglVector3f_Vertex3dv(in_pOrigin);
//		GglVector3f_Vertex3dv(in_pEndPoint);
//	glEnd();
//
//	return ;
//}

/*****************************************************************
 * GglGraphic2d_Color3dv�֐�(�A���t�@�l�Ȃ�)
 * GglGraphic2d_Color4dv�֐�(�A���t�@�l����)
 * �`��F���w�肵�܂�
 *
 * �߂�l�F�Ȃ�
 * �����F
 * 1.const GglColorRGBA* in_pColor	//�g�����X���[�V��������F���
*/
void GglGraphic2d_Color3dv(const GglColor4* in_pColor)		//�A���t�@�Ȃ�
{
	glColor3d(in_pColor->r, in_pColor->g, in_pColor->b);
	return ;
}

void GglGraphic2d_Color4dv(const GglColor4* in_pColor)		//�A���t�@����
{
	glColor4d(in_pColor->r, in_pColor->g, in_pColor->b, in_pColor->a);
	return ;
}

/*************************************
 * GglMaterialfv�֐�
 * �e�N�X�`���}�e���A����ύX���܂�
 *
 * �߂�l�F�Ȃ�
 * �����F
 * 1.const GLenum in_targetFace
 * 2.const GLenum in_lightingMaterial
 * 3.const GglColor4 in_color
*/
void GglGraphic2d_Materialfv(const GLenum	in_targetFace,
							const GLenum	in_lightingMaterial,
							const GglColor4*	in_pColor)
{
	float color[4];

	if(in_pColor == NULL)	return ;

	color[0] = in_pColor->r;
	color[1] = in_pColor->g;
	color[2] = in_pColor->b;
	color[3] = in_pColor->a;

	glMaterialfv(in_targetFace, in_lightingMaterial, color);

	return ;
}