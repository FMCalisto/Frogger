#include "Frog.h"

Frog::Frog()
{
	
}

class Frog: public DynamicObject
{
	public:	
		Frog();
		~Frog();
		void draw();
		
	/*
	 *
	 *	New changes by Francisco Maria Calisto
	 *
	 */

	void Frog::drawModel()
	{
		if (!pmodel)
		{
			pmodel = glmReadOBJ("ship.obj");
			if (!pmodel) exit(0);
			glmUnitize(pmodel);
			glmFacetNormals(pmodel);
			glmVertexNormals(pmodel, 90.0);
		}
		glmDraw(pmodel, GLM_SMOOTH );
	}

	void Frog::draw()
	{
		drawModel();
		/*
		glPushMatrix();		
			glTranslatef(_transform.getX(), _transform.getY(), _transform.getZ());
			glRotatef(_rotate.getX(), 1, 0, 0);
			glRotatef(_rotate.getY(), 0, 1, 0);
			glRotatef(_rotate.getZ(), 0, 0, 1);
			glScalef(_scale.getX(), _scale.getY(), _scale.getZ());
			drawModel();
		glPopMatrix();
		*/
	}
};