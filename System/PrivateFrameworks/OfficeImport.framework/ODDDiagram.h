/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition, NSArray;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;
	NSArray* mEquivalentDrawables;

}

@property (nonatomic,retain) NSArray * equivalentDrawables; 
-(id)init;
-(id)description;
-(id)colorTransform;
-(id)documentPoint;
-(id)styleDefinition;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setEquivalentDrawables:(NSArray *)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(NSArray *)equivalentDrawables;
@end

