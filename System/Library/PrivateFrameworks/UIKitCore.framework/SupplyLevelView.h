/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SupplyLevelView : UIView {

	int supplyLevel;
	NSArray* colors;

}

@property (assign,nonatomic) int supplyLevel; 
@property (nonatomic,retain) NSArray * colors; 
-(BOOL)isOpaque;
-(void)setColors:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)colors;
-(int)supplyLevel;
-(void)setSupplyLevel:(int)arg1 ;
@end

