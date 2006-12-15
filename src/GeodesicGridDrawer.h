/*
 * Stellarium
 * Copyright (C) 2006 Fabien Chereau
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef GEODESICGRIDDRAWER_H_
#define GEODESICGRIDDRAWER_H_

#include "geodesic_grid.h"
#include "StelModule.h"

class SFont;

class GeodesicGridDrawer : public StelModule
{
public:
	GeodesicGridDrawer(int level);
	virtual ~GeodesicGridDrawer();

	///////////////////////////////////////////////////////////////////////////
	// Methods defined in the StelModule class
	virtual void init(const InitParser& conf, LoadingBar& lb);
	virtual string getModuleID() const {return "geodesic_grid_drawer";}
	virtual double draw(Projector *prj, const Navigator *nav, ToneReproductor *eye);
	virtual void update(double deltaTime) {;}
	virtual void updateI18n() {;}
	virtual void updateSkyCulture(LoadingBar& lb) {;}
	
private:
	GeodesicGrid* grid;
	GeodesicSearchResult* searchResult;
	SFont* font;
};

#endif /*GEODESICGRIDDRAWER_H_*/
