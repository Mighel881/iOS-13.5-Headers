/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {

	OADBevel* mTopBevel;
	OADBevel* mBottomBevel;
	OADColor* mExtrusionColor;
	float mExtrusionHeight;
	OADColor* mContourColor;
	float mContourWidth;
	float mShapeDepth;
	int mMaterial;

}
+(id)nullShape3D;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)material;
-(void)setMaterial:(int)arg1 ;
-(void)setTopBevel:(id)arg1 ;
-(void)setBottomBevel:(id)arg1 ;
-(void)setExtrusionColor:(id)arg1 ;
-(void)setContourColor:(id)arg1 ;
-(void)setShapeDepth:(float)arg1 ;
-(void)setExtrusionHeight:(float)arg1 ;
-(void)setContourWidth:(float)arg1 ;
-(float)shapeDepth;
-(float)extrusionHeight;
-(float)contourWidth;
-(id)topBevel;
-(id)bottomBevel;
-(id)extrusionColor;
-(id)contourColor;
@end
