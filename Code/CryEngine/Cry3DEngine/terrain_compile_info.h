// Copyright 2001-2019 Crytek GmbH / Crytek Group. All rights reserved.

STRUCT_INFO_BEGIN(StatInstGroupChunk)
STRUCT_VAR_INFO(szFileName, TYPE_ARRAY(256, TYPE_INFO(char)))
STRUCT_VAR_INFO(fBending, TYPE_INFO(float))
STRUCT_VAR_INFO(fSpriteDistRatio, TYPE_INFO(float))
STRUCT_VAR_INFO(fShadowDistRatio, TYPE_INFO(float))
STRUCT_VAR_INFO(fMaxViewDistRatio, TYPE_INFO(float))
STRUCT_VAR_INFO(fBrightness, TYPE_INFO(float))
STRUCT_VAR_INFO(nRotationRangeToTerrainNormal, TYPE_INFO(int32))
STRUCT_VAR_INFO(fAlignToTerrainCoefficient, TYPE_INFO(float))
STRUCT_VAR_INFO(nMaterialLayers, TYPE_INFO(uint32))
STRUCT_VAR_INFO(fDensity, TYPE_INFO(float))
STRUCT_VAR_INFO(fElevationMax, TYPE_INFO(float))
STRUCT_VAR_INFO(fElevationMin, TYPE_INFO(float))
STRUCT_VAR_INFO(fSize, TYPE_INFO(float))
STRUCT_VAR_INFO(fSizeVar, TYPE_INFO(float))
STRUCT_VAR_INFO(fSlopeMax, TYPE_INFO(float))
STRUCT_VAR_INFO(fSlopeMin, TYPE_INFO(float))
STRUCT_VAR_INFO(fStatObjRadius_NotUsed, TYPE_INFO(float))
STRUCT_VAR_INFO(nIDPlusOne, TYPE_INFO(int))
STRUCT_VAR_INFO(fLodDistRatio, TYPE_INFO(float))
STRUCT_VAR_INFO(nReserved, TYPE_INFO(uint32))
STRUCT_VAR_INFO(nFlags, TYPE_INFO(int))
STRUCT_VAR_INFO(nMaterialId, TYPE_INFO(int))
STRUCT_VAR_INFO(m_dwRndFlags, TYPE_INFO(uint64))
STRUCT_VAR_INFO(fStiffness, TYPE_INFO(float))
STRUCT_VAR_INFO(fDamping, TYPE_INFO(float))
STRUCT_VAR_INFO(fVariance, TYPE_INFO(float))
STRUCT_VAR_INFO(fAirResistance, TYPE_INFO(float))
STRUCT_INFO_END(StatInstGroupChunk)

STRUCT_INFO_BEGIN(SNameChunk)
STRUCT_VAR_INFO(szFileName, TYPE_ARRAY(256, TYPE_INFO(char)))
STRUCT_INFO_END(SNameChunk)
