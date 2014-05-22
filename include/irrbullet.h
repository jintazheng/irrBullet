/*
irrBullet Bullet physics wrapper for the Irrlicht rendering engine.
Copyright (C) 2009-2011 Josiah Hartzell (Skyreign Software)

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.

Josiah Hartzell fighterstw@hotmail.com or josiah.hartzell@gmail.com
Irrlicht Engine - http://www.irrlicht.sf.net
Bullet Physics Engine - http://www.bulletphysics.com/

The above copyright notice and its accompanying information may not be removed.

The same applies for all other copyright notices at the top of files included with this library.
*/

#pragma once

#include "irrBulletCompileConfig.h"
#include <btBulletDynamicsCommon.h>
#include <btBulletCollisionCommon.h>
#include <BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h>
#include "irrBulletCommon.h"
#include "irrBulletWorld.h"
#include "irrBulletBoxShape.h"
#include "irrBulletSphereShape.h"
#include "irrBulletGImpactMeshShape.h"
#include "irrBulletBvhTriangleMeshShape.h"
#include "irrBulletConvexHullShape.h"
#include "irrBulletMotionState.h"
#include "irrBulletRayCastVehicle.h"
#include "irrBulletCollisionObjectAffector.h"
#include "irrBulletCollisionObjectAffectorDelete.h"
#include "irrBulletCollisionObjectAffectorAttract.h"
//#include "collisionobjectaffectorbuoyancy.h"
#include "irrBulletCollisionCallBackInformation.h"
#include "irrBulletLiquidBody.h"
#include "irrBulletKinematicCharacterController.h"


/*!
@mainpage irrBullet Wrapper Documentation


@section intro Introduction

Welcome to the irrBullet API documenation.


@section irrbulletexample irrBullet Example

Using irrBullet with Irrlicht is very straight-forward and simple.


Example source code and projects can be found in (irrBullet / examples),
and compiled examples can be found in (irrBullet / bin / win32_gcc) or  (irrBulletDir / bin / win32_VisualStudio) depending on your IDE.


@section linkerandsearchdirs Linker and Search Directories Settings

Before you can begin integrating irrBullet in your application, there are a few things
to add to your project first.

Link against these static libraries (irrBullet.a/.lib will be available in (irrBullet / lib) after compiling):

irrBullet.a/.lib
BulletCollision.a/.lib
BulletDynamics.a/.lib
BulletSoftBody.a/.lib
ConvexDecomposition.a/.lib
LinearMath.a/.lib
Irrlicht.a/.lib

This is for most features and with GImpact included. Other libs must be linked against for some features,
such as libconvexdecomposition.a for decomposing objects.

<i>It is important that they are linked against in this order to avoid linker errors.</i>


Next, add these directories to your Search Directories list:

irrBullet / include

Then just include irrBullet.h into the top of your files using irrBullet.


You are now ready to begin the integration process!

*/

irrBulletWorld *createIrrBulletWorld(irr::IrrlichtDevice* const device, bool useGImpact = false, bool useDebugDrawer = false);