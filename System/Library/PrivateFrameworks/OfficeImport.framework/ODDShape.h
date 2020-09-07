/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {

	int mType;
	int mPresetType;
	NSMutableArray* mAdjustments;

}
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)adjustments;
-(int)presetType;
-(void)setPresetType:(int)arg1 ;
-(void)addAdjustment:(id)arg1 ;
@end
