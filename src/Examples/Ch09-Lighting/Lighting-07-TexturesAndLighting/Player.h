//===============================================================================
// @ Player.h
// ------------------------------------------------------------------------------
// Main player
//
// Copyright (C) 2008 by Elsevier, Inc. All rights reserved.
//
//
//
//===============================================================================

#ifndef __PlayerDefs__
#define __PlayerDefs__

//-------------------------------------------------------------------------------
//-- Dependencies ---------------------------------------------------------------
//-------------------------------------------------------------------------------

#include <IvMatrix33.h>
#include <IvVector2.h>
#include <IvVector3.h>
#include <IvVector4.h>

//-------------------------------------------------------------------------------
//-- Classes --------------------------------------------------------------------
//-------------------------------------------------------------------------------

class IvIndexBuffer;
class IvShaderProgram;
class IvUniform;
class IvTexture;
class IvVertexBuffer;

class Player
{
public:
    Player();
    ~Player();

    void Update( float dt );
    void Render();

private:
    void ComputeMaterialComponents();
    void CreateSphere();
    void DrawSphere();
    
    IvVector3 mLightPos;

    float mRadius;

    IvIndexBuffer* mSphereIndices;
    IvVertexBuffer* mSphereVerts;

    IvShaderProgram* mShader;
    float            mSpecularPercentage;
    float            mAmbientFactor;
    float            mEmissiveFactor;

    IvTexture* mTexture;

    IvUniform* mLightPosUniform;
    IvUniform* mViewPosUniform;
    IvUniform* mColorUniform;
};

#endif