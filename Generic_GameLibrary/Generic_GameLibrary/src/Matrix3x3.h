#ifndef GglMatrix3x3_h__
#define GglMatrix3x3_h__

/****
 * GglMatrix3x3�\����
 * �s���\��
**********************************************************/
union GglMatrix3x3
{
	// ���̂悤��3x3�s��ł���
	// [0a][0b][0c]
	// [1a][1b][1c]
	// [2a][2b][2c]
	struct
	{
		double _11, _12, _13;
		double _21, _22, _23;
		double _31, _32, _33;
	};

	double array[3][3];

}typedef GglMatrix3x3;

#endif